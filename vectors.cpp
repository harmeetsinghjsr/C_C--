#include <vector>
#include <iostream>
using namespace std;
int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    cout << "Size: " << v.size() << endl;
    cout << "Capacity: " << v.capacity() << endl;
    cout << "Max Size: " << v.max_size() << endl;
    cout << "Element at 2nd index: " << v.at(2) << endl;
    cout << "Front: " << v.front() << endl;
    cout << "Back: " << v.back() << endl;
    cout << "Data: " << v.data() << endl;
    return 0;
}