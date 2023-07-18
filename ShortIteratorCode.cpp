// for(int value : v){
//     cout<<value<<" ";
// }
// Here values of "v" is just getting copied in "value"

// for (int &value : v) //Actual values are coming from v not its copy
// {
//         cout<<value<<" ";
// }
#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> v = {2, 3, 5, 6, 7};

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    // vector<int>::iterator it;  //Instead of this we can use "auto" keyword
    for ( auto it = v.begin(); it != v.end(); it++)
    {
        cout << (*it) << " ";
    }

    // vector<pair<int, int>> v_p = { {1, 2},{2, 3} }
    // for(pair<int,int> &value: v_p){
    //     cout<<value.first<<" "<<value.second;
    // }
                                
    cout<< endl;
    return 0;
}