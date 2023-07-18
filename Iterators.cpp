/*
Iterators are pointer like structure in C++
vector - {1,2,3,4,5,6,7}
          0 1 2 3 4 5 6  <-- Index
v.begin() -> v[0]
v.end() -> v[6]

Declaration Syntax :
vector<int> :: iterator it;

Note: (it++) --->Next Iterator
      (it + 1)-->=Next Location
      // it++ is better becoz if there is map or set elements are at dicontinuous location
      // so elements can be anywhere in random location
      //So it++ simply take you to next iterator but it+1 may lead to wrong location which is not required
      //Vector are in continuous nature
*/

#include <bits/stdc++.h>

using namespace std;

int main(){
    vector<int> v = {2,3,4,5,6,7};
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    vector<int> ::iterator it = v.begin();
    // cout<<(*(it+1))<<endl;
    for(it =v.begin();it != v.end();it++){
        cout<<(*it)<<endl;
    }
    return 0;
}