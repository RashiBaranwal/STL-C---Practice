// upper_bound() and lower_bound() are standard library functions in C++.

// upper_bound() returns an iterator
//  pointing to the first element in the range [first, last) 
// that is greater than the value. If no such an element is found, 
// return end().
//If element it will alway find value greater than that element.

//lower_bound() returns an iterator pointing to 
//the first element in the range [first,last] 
//which is greater or equal to the value. 
//If no such an element is found, return end().
//If the element is present then it will fing it and
//if element is not present then only greater than that element


//Both of the function return location(Pointer) in case of array
//Iterator in case of vector

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
    sort(a,a+n);
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    int *ptr = lower_bound(a,a+n,5); //Give 5
    // int *ptr = upper_bound(a,a+n,5); // will give 7
    if(ptr == (a+n)){
        cout<<"Not found";
        return 0;
    }
    cout<<*ptr<<endl;
    
    return 0;
}