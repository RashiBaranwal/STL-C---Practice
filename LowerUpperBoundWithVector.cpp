// upper_bound() and lower_bound() are standard library functions in C++.

// upper_bound() returns an iterator
//  pointing to the first element in the range [first, last)
// that is greater than the value. If no such an element is found,
// return end().
// If element it will alway find value greater than that element.

// lower_bound() returns an iterator pointing to
// the first element in the range [first,last]
// which is greater or equal to the value.
// If no such an element is found, return end().
// If the element is present then it will fing it and
// if element is not present then only greater than that element

// Both of the function return location(Pointer) in case of array
// Iterator in case of vector

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    auto it = lower_bound(a.begin(), a.end(), 5); // Give 5
    // auto it1 = upper_bound(a.begin(),a.end(),5); // will give 7
    if (it == a.end())
    {
        cout << "Not found";
        return 0;
    }
    cout << *it << endl;

    return 0;
}