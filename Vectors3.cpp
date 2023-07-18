#include <bits/stdc++.h>

using namespace std;

void printVec(vector<int> &v) //"&v" shows that we are actually passing value ,We are not copying 
{
    cout << "Size: " << v.size() << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    v.push_back(2);
    cout << endl;
}

int main()
{
    vector<int> v;

    v.push_back(7);
    v.push_back(6);

    vector<int> v2 = v; //Time complexity = O(n)
    // v2 is just copy of v ,if we change v2 then no alteration will be there in v

    // vector<int> &v2 = v; by this we are actually passing entire v to v2 not copying 
    //So if we push_back in v it will be reflected in v2 also

    v2.push_back(5);

    printVec(v);
    printVec(v);
    printVec(v2);
    return 0;
}