#include<bits/stdc++.h>
using namespace std;

int main(){

    /*
    Unique elements stored
    BST concept
    No modificaion possible
    Elements are returned in sorted order
    */


   set<int> s;

   s.insert(5); // t.c --> O(log n)
   s.insert(1);
   s.insert(6);
   s.insert(0);
   s.insert(4);

   for(auto i:s){
    cout<<i<<" ";
   }

   //erase
   cout<<"\nAfter deleting an element"<<endl;
   set<int>::iterator it=s.begin();
   it++;


   s.erase(it); //will delete 1
      for(auto i:s){
    cout<<i<<" ";
   }

   //find
   set<int>::iterator itr=s.find(5);


   //find, insert, erase, count --> O(log n)
   
   //size, begin, empty, end --> O(1)

    cout<<"Y/n ? "<<s.count(5);

}