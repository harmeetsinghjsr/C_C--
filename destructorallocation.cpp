#include<iostream>
using namespace std;
class Array
{

	int size;
	int *arr=NULL;
	public:
		Array(int s){
			size=s;
			arr=new int[size];
		}
		void get_data() {
        cout << "Enter the array elements :";
        for (int i = 0; i < size; i++) {
            cin >> *(arr + i);
        }
    }
    void put_data() {
        cout << "The array printed is :";
        for (int i = 0; i < size; i++) {
            cout << *(arr + i) << " ";
        }
    }
    ~Array() {
        delete[] arr;
    }
};
int main() {
    int s;
    cout << "Enter the size of the array :";
    cin >> s;
    Array a(s);    
	a.get_data();
    a.put_data();
    return 0;
}
