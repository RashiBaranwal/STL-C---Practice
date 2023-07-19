/*
Queue - FIFO --> First In First Out

Operations:
1- push
2- pop
3- front

*/

#include <bits/stdc++.h>

using namespace std;

int main(){
    queue<string> q;
    q.push("abc");
    q.push("gsth");
    q.push("hrh");
    q.push("hthwrh");
    q.push("grwhbwr");

    while (!q.empty())
    {
        cout<<q.front()<<endl;
        q.pop();
    }
    
    return 0;
}