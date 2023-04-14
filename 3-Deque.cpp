#include<bits/stdc++.h>
using namespace std;

int main(){

    deque<int> d;

    //insert from back
    d.push_back(32);
    d.push_back(23);

    //insert from front
    d.push_front(21);
    d.push_front(13);

    for(int i:d){
        cout<<i<<" ";
    }
    cout<<endl;
    
    cout<<d.at(2);

    //clear elements
    d.erase(d.begin(),d.begin()+4);

    /*delete
    d.pop_back();
    d.pop_front();
    cout<<"\nafter pop "<<endl;
    for(int i:d){
        cout<<i<<" ";
    }
    cout<<endl;
    */

    cout<<"Empty or what? "<<d.empty();




}