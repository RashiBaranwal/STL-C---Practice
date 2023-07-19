/*
STACK -> LIFO --> Last In First Out

--> It is like a bucket
--> We can access size and top element

Operations in Stack
1- push
2- pop
3- top
*/

#include <bits/stdc++.h>

using namespace std;

int main(){
    stack<int> s;
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.push(6);
    while (!s.empty())
    {
        cout<<s.top()<<endl;
        s.pop();
    }
    

    return 0;
}