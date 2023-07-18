#include <bits/stdc++.h>

using namespace std;

void print(multiset<string> &s)
{

    for (string value : s)
    {
        cout << value << endl;
    }

    for (auto it = s.begin(); it != s.end(); it++)
    {
        cout << (*it) << endl;
    }
}

int main(){
    multiset<string> s;
    s.insert("abc");
    s.insert("zsdf");
    s.insert("bcd");
    s.insert("abc");

    auto it = s.find("abc");
    if (it != s.end())
    {
        s.erase(it); //This "will only erase the first "abc"
        //Not erase all the "abc"
    }
    //s.erase("abc"); //Without Iterator It will erase all the "abc" in the set
    print(s);
    return 0;
}