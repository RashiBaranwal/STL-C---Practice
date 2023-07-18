// Maps :  Store Key Value pairs
//All element of map is a pair
//Maps are not in continuous nature
//So we use it++ not (it+1)
//All the keys should be unique

//   int string
//    1   abc
//    5   cdc
//    3   acd

//Two types of map : NORMAL MAP and UNORDERED MAP

//In normal map values are stored in sorted order like
// int  string
//  1    abc
//  3    acd
//  5    cdc
//Implemented using Red Black Trees


#include <bits/stdc++.h>

using namespace std;

void print(map<int,string> &m){
    cout<<m.size()<<endl;
    for(auto &pr : m){ //O(N(log(N)))
        cout<<pr.first<<" "<<pr.second<<endl;
    }
}

int main(){
    map<int,string> m;

    m[1] = "abc"; //O(log(n))
    m[5] = "cdc";
    m[3] = "acd";
    m.insert({4,"afg"}); //OR m.insert(make_pair(4,"afg"))
    
    map<int,string> :: iterator it;
    for(it = m.begin();it!=m.end();it++){
        cout<<(*it).first <<" "<<(*it).second<<endl;
    //  cout<<(it->first)<<" "<<(it->second)<<endl;
    }
    m[6]; //This will create a map with key =6 and value of Empty String
    print(m);
    return 0;
}