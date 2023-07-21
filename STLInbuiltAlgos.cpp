#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    int min = *min_element(v.begin()+3,v.end());
    cout<<min<<endl;
    int max = *max_element(v.begin(),v.end());
    cout<<max<<endl;

    int sum = accumulate(v.begin(),v.end(),0);
    cout<<sum<<endl;
    // It will return v.begin() + v.end() + 0(Initial Sum ,Give in the bracket)

    int ct = count(v.begin()+1,v.end(),3);
    cout<<ct<<endl;
    //Will return the count of 3

    auto it = find(v.begin(),v.end(),2);
    if(it != v.end())
        cout<<*it<<endl;
    else
        cout<<"Element Not Found"<<endl;
    //Will find 2

    reverse(v.begin()+2,v.end()); //Will Reverse the elements
    for(auto val:v){
        cout<<val<<" ";
    }
    cout<<endl;

    string s ="fgvjcbleqjfbel";
    reverse(s.begin() + 1,s.end());
    cout<<s<<endl;
}