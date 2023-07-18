#include <bits/stdc++.h>

using namespace std;

void printVec(vector<int> &v) //"&v" shows that we are actually passing value ,We are not copying
{
    cout << "Size: " << v.size() << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " " ;
    }
    cout << endl;
}

int main()
{
    // vector<int> v[10];  //10 different vectors are being created of zero size

    int N;
    cin>>N;

    vector<int> v[N]; //N different vetors will be created

    for (int i = 0; i < N; i++)
    {
        int n;
        cin>>n;
        for (int j = 0; j < n; j++)
        {
            int x;
            cin>>x;
            v[i].push_back(x);
        }
        
    }

    for (int i = 0; i < N; i++)
    {
        printVec(v[i]);
    }
    
    
    return 0;
}