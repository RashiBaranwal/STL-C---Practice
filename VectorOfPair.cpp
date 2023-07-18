#include <bits/stdc++.h>

using namespace std;

void printVec(vector<pair<int, int>> &v) //"&v" shows that we are actually passing value ,We are not copying
{
    cout << "Size: " << v.size() << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }
    cout << endl;
}

// VECTOR OF PAIR

int main(){
//    vector<pair<int,int>> v = {{1,2},{2,3},{4,5}};

vector<pair<int,int>> v;
 printVec(v);
 int n;
 cin>>n;

 for(int i=0;i<n;i++){
    int x,y;
    cin>>x>>y;
    v.push_back({x,y});
 }
 printVec(v);
    return 0;
}