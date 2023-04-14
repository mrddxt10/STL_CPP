#include<bits/stdc++.h>
using namespace std;

int main(){

    //main concept --> FIRST IN FIRSR OUT
    queue<string> q;

    q.push("abc");
    q.push("xyz");
    q.push("pqr");

    cout<<q.front()<<endl;
    q.pop();

    cout<<q.front()<<endl;

    cout<<q.size()<<endl;


}