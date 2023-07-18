/*
Difference in maps and unordered map are:
1- Inbuilt implementation
----> Maps use trees for inbuild implementation but 
      unordered maps use inbuilt hash tables
   
2- Time Complexity
---->For unordered
---->Any Insertion  TC: O(1)
---->m.find(); TC: O(1)
---->m.erase(); TC: log(1)

3- Valid Key Datatypes
----> unordered_map<pair<int,int>,string> m;
      We cannot insert pair int it
      This will give error becoz For pairs there is no inbuild
      hash defined but in maps we can insert pair
---->Basically those which have no inbuild hash defined cannot
     be inserted in unordered_maps
----> Therefore Sets,Vectors,Pairs cannot be used in unordered maps    

Note: Use of all the function are same
      in both normal and inordered maps
*/


#include <bits/stdc++.h>

using namespace std;

void print(unordered_map<int,string> &m){
    cout<<m.size()<<endl;
    for(auto &pr : m){
        cout<<pr.first<<" "<<pr.second<<endl;
    }
}

int main(){

   unordered_map<int,string> m;
   m[1] = "abc";
   m[5] = "cdc";
   m[3] = "acd";
   m[6] = "a";
   m[5] = "cde";

   print(m);
    
    return 0;
}