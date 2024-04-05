#include<bits/stdc++.h>
using namespace std;
class Heap{
    public:
    int arr[100];
    int size;
    Heap(){
        arr[0]=-1;
        size=0;
    }

    void insert(int val){
        size=size+1;
        int index=size;
        arr[index]=val;

        while(index>1){
            int parent=index/2;
            if(arr[parent]<arr[index]){
                swap(arr[parent],arr[index]);
                index=parent;
            }
            else{
                return;
            }
        }
    }
    void deletion(){
        if(size==0){
            cout<<"Nothing to delete"<<endl;
            return;
        }
        // step 1: last elememnt to first element
        arr[1]=arr[size];

        // step 2: remove last element
        size--;

        // step 3: take root node to its correct position
        int index = 1;

        while(index < size){

            int leftIndex = 2 * index;
            int rightIndex = 2 * index + 1;
            int swapIndex = index;

            //This section checks if the left child index is within the valid range (not exceeding the size) and whether the element at the swapIndex is less than the element at the leftIndex. If so, it swaps these two elements and updates swapIndex to the left child's index.

            if(leftIndex <= size && arr[swapIndex] < arr[leftIndex]){
                swap(arr[swapIndex],arr[leftIndex]);
                swapIndex = leftIndex;
            }
            //Similarly, this section checks if the right child index is within the valid range and if the element at the swapIndex is less than the element at the rightIndex. If so, it swaps these two elements and updates swapIndex to the right child's index.

            if(rightIndex <= size && arr[swapIndex] < arr[rightIndex]){
                swap(arr[swapIndex],arr[rightIndex]);
                swapIndex = rightIndex;
            }

            //After checking both left and right children, if the index is not equal to the swapIndex, it means that a swap was performed during this iteration, and the index is updated to swapIndex, indicating that the process continues for the child node that was just swapped.

            if(index != swapIndex){
                swap(arr[index], arr[swapIndex]);
                index = swapIndex;
            }
            else return ;
        }
    }

