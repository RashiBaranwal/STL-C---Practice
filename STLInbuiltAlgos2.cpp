#include <bits/stdc++.h>

using namespace std;

bool is_positive(int x){
    return x>0;
}

int main(){
    //LAMBDA FUNCTION
    // cout<< [](int x){return x+2;}(2)<<endl; //Output : 4
    // cout<< [](int x,int y){return x+y;}(4,7)<<endl; //Output : 11

    // auto sum = [](int x,int y){return x+y;};
    // cout<<sum(2,3);

    vector<int> v = {2,-3,-5};
    cout<<all_of(v.begin(),v.end(),  //Will return 0
    [](int x){return x>0;})<<endl; 
    
    cout<<any_of(v.begin(),v.end(),  //Will return 1 becoz atleast 2 is +ve
    [](int x){return x>0;}) <<endl;  //If even one is true it will return true
    
    cout<<none_of(v.begin(),v.end(), //It means no element matches the condition
    [](int x){return x>0;}) <<endl;  //But here since 2 is +ve it will return 0
    
    cout<<all_of(v.begin(),v.end(),
    is_positive)<<endl;
    
    return 0;
}