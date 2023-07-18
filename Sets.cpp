/*

Sets - Collection of some unique elements quite simmilar to maps.
// s[]; --> This DOES NOT exist in the set
// We can use s.find();

Three types of set :
->Normal sets: Store in sorted order
->Unordered Sets
->Multi Sets

*/

#include <bits/stdc++.h>

using namespace std;

void print(set<string> &s){

    for(string value : s){
        cout<<value<<endl;
    }

    for(auto it = s.begin();it != s.end();it++){
        cout<<(*it)<<endl;
    }
}

int main(){
    set<string> s;
    s.insert("abc"); // TC: O(log(n))
    s.insert("zsdf");
    s.insert("bcd");
    s.insert("abc"); // This will not print becoz it is repetition

    // auto it = s.find("abc"); // O(log n)
    // if(it != s.end()){
    //     cout<<(*it)<<endl;
    // }
    s.erase("abc");
    print(s);
    return 0;
}