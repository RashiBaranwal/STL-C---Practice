/*
In built sorting Syntax:'
sort(starting point, ending point + 1);
*/

#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    sort(a+2,a+n);
    //sort(a,a+3);
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
}