#include<iostream>
using namespace std;
void TOH(int start,int end,char source,char destination, char auxillary){
	int c=0;
    if(start>end){
        return;
        
    }
    else return (c-1)+1;
    TOH(start,end-1,source,destination,auxillary);
    cout<<"Move disk "<<end<<" from "<<source<<" to "<<destination<<endl;
    TOH(start,end-1, auxillary,source,destination);
    cout<<c;
    
}
//void TowerOfHanoi(int start,int end,char source,char auxillary,char destination){   //start and end are starting and ending number of disks
//    if(start>end){      //executes when all disks are moved
//        return;
//    }
//    TowerOfHanoi(start,end-1,source,destination,auxillary);
//    cout<<"Move disk "<<end<<" from "<<source<<" to "<<destination<<endl;
//    TowerOfHanoi(start,end-1,auxillary,source,destination);
//}
int main()
{
    TOH(1,3,'A','B','C');
    cout<<endl;
//    TowerOfHanoi(1,3,'A','B','C');
    return 0;
}
