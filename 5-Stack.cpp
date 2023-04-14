#include<bits/stdc++.h>
using namespace std;

int main(){

    //main concept --> LAST IN FIRST OUT
    stack<string> s;

    s.push("abc");
    s.push("xyz");
    s.push("pqr");


    cout<<"On top : "<<s.top()<<endl;
    s.pop();

    cout<<"Size : "<<s.size()<<endl;

    cout<<"Empty or what? "<<s.empty();
    
}