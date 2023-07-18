#include <bits/stdc++.h>

using namespace std;

void print(map<int, string> &m)
{
    cout <<"Size: "<< m.size() << endl;
    for (auto &pr : m)
    { // O(N(log(N)))
        cout << pr.first << " " << pr.second << endl;
    }
}

int main(){
    map<int,string> m;
    m[1] = "abc"; //O(log(n))
    m[5] = "cdc";
    m[3] = "acd";
    m[6] = "a";
    m[5] = "cde";

    auto it = m.find(7); //O(log(n))
    // m.erase(3); //O(log(n)) //It will delete 3rd one
    if(it != m.end())
       m.erase(it);// O(log(n))

    // if(it == m.end()){
    //     cout<<"NO VALUE"<<endl;
    // }
    // else{
    //     cout<<(*it).first<<" "<<(*it).second<<endl;;
    // }

    print(m);
    m.clear(); //Will erase entire map
    print(m);
    return 0;
}