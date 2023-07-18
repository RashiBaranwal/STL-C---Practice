#include <bits/stdc++.h>

using namespace std;

int main(){
    pair<int,string> p;
    //Two ways to declare Pair

    //First
    // p = make_pair(2,"abc");

    //Second
    p = {2,"abcd"};

    //Coping Pair
    pair<int,string> &p1 = p; //Will give 3 abcd as we are using reference
    // pair<int,string> p1 = p; //Will give 2 abcd not 3 abcd becoz only copy is made
    p1.first = 3; 

    cout<<p.first<<" "<<p.second <<endl;

    int a[] = {1,2,3};
    int b[] = {2,3,4}; 

    pair<int,int> p_array[3];
    p_array[0] = {1,2};
    p_array[1] = {2,3};
    p_array[2] = {3,4};

    for (int i = 0; i < 3; ++i)
    {
        cout<<p_array[i].first<<" "<<p_array[i].second<<endl;
    }
    swap(p_array[0],p_array[2]);
    cout << "After Swaping: "<<endl; 
    for (int i = 0; i < 3; ++i)
    {
        cout << p_array[i].first << " " << p_array[i].second << endl;
    }

    pair<int,string> p2;

    cin>>p2.first;
    cout<<p2.first;
    return 0;
}