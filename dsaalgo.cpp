
#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

long long merge(vector<int>& arr, vector<int>& temp, int left, int mid, int right) {
    int i = left;
    int j = mid + 1;
    int k = left;
    long long count = 0;

    while (i <= mid && j <= right) {
        if (arr[i] <= arr[j]) {
            temp[k++] = arr[i++];
        } else {
            temp[k++] = arr[j++];
            count += mid - i + 1; // Count split inversions
        }
    }

    while (i <= mid) {
        temp[k++] = arr[i++];
    }

    while (j <= right) {
        temp[k++] = arr[j++];
    }

    for (int l = left; l <= right; ++l) {
        arr[l] = temp[l];
    }

    return count;
}

long long mergeSort(vector<int>& arr, vector<int>& temp, int left, int right) {
    long long count = 0;
    if (left < right) {
        int mid = left + (right - left) / 2;

        count += mergeSort(arr, temp, left, mid);
        count += mergeSort(arr, temp, mid + 1, right);
        count += merge(arr, temp, left, mid, right);
    }
    return count;
}

long long countInversions(vector<int>& arr) {
    int size = arr.size();
    vector<int> temp(size);
    return mergeSort(arr, temp, 0, size - 1);
}

int main() {
    ifstream file("dsaalgo.txt");
    if (!file.is_open()) {
        cout << "File not found!";
        return 1;
    }

    vector<int> integers;
    int num;
    while (file >> num) {
        integers.push_back(num);
    }
    file.close();

    long long inversions = countInversions(integers);
    cout << "Number of inversions: " << inversions << endl;

    return 0;
}

