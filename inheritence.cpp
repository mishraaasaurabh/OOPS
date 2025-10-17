#include <bits/stdc++.h>
using namespace std;
const long long int mod = 1e9+7;
#define int long long

class College{
    protected: //protected is accessible by just derived class and class itselt but not from external like (main function)
    string name="Ranchi";
};

class College1: public College{
    public:
    string name2="Jalalpur";
};

class College2: public College1{
    public:
    string name3="Gauhaniya";
};

signed main(){

    College2 clg;
    cout<<clg.name3<<endl;
    cout<<clg.name2<<endl;
    cout<<clg.name<<endl;
}