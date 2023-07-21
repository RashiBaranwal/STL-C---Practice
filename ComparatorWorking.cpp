// Sort Algorithm In general sort in ascending order
// But we can customize it using comparators

#include <bits/stdc++.h>

using namespace std;

// bool should_i_swap(int a,int b){
//     if(a>b) return true;
//     return false;
// }
bool cmp(pair<int,int> a,pair<int , int>b){
    if (a.first > b.first)
    {
       
        return a.first < b.first;
        }
    return a.second > b.second;
}

// bool cmp (int a,int b){ //For Integers
//     return a>b; //If you need a>b
// }

int main(){
    int n;
    cin>>n;
    vector<pair<int,int>> a(n);
    for (int i = 0; i < n; i++)
    {
        cin>>a[i].first>>a[i].second;
    }
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = i+1; j < n; j++)
    //     {
    //         if (should_i_swap(a[i],a[j]))
    //         {
    //             swap(a[i],a[j]);
    //         }
            
    //     }
        
    // }

    // sort(a.begin(),a.end());  This will sort in ascending order

    sort(a.begin(),a.end(),cmp); //This will now sort in descending 
    
    //If you want to swap then return false for function should_i_swap
    //OR return directly the condition you wanted
    for (int  i = 0; i < n; i++)
    {
        cout<<a[i].first<<" "<<a[i].second;
    }
    
    
    
    return 0;
}