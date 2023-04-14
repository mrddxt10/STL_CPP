#include<iostream>
#include<array>

using namespace std;

int main(){
    int basic[3]={1,2,3};

    //STL Array
    array<int,5> arr={1,2,3,4,5};
    
    int size=arr.size();
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    cout<<"Element at 3rd index is: "<<arr.at(3)<<endl;
    cout<<"Empty of not--> "<<arr.empty()<<endl;

    cout<<"1st element is: "<<arr.front()<<endl;
    cout<<"Last element is: "<<arr.back()<<endl;



}