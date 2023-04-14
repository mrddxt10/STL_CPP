#include<bits/stdc++.h>
using namespace std;

int main(){
    
    vector<int> v;
    cout<<"Initially the capacity of Vector is: "<<v.capacity()<<endl;

    //insert elements
    v.push_back(1);
    v.push_back(2);
    cout<<"CAPACITY IS: "<<v.capacity();

    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    cout<<endl<<"New capacity: "<<v.capacity()<<endl;

    //how many elements the vector has
    cout<<"No of ele in the vector are: "<<v.size()<<endl;

    //random access of particular element 
    cout<<"Element at index 1 is: "<<v.at(1)<<endl;

    //
    cout<<v.front()<<endl;
    cout<<v.back()<<endl;

    //delete ele
    v.pop_back();
    cout<<"Vector elements: "<<endl;
    for(int i:v){
        cout<<i<<" "<<endl;
    }

    vector<int> a;
    a.push_back(4);
    a.push_back(-5);
    a.push_back(32);
    a.push_back(23);
    a.push_back(0);
    a.push_back(-564);
    a.push_back(3244);

    sort(a.begin(),a.end());

    for(int i:a){
        cout<<i<<" "<<endl;
    }
    cout<<endl;

    


}