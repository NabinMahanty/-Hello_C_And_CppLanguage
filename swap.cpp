#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    cout<<"Enter two number = "<<endl;
    int a,b,c;
    cin>>a;
    cin>>b;
    c = a;
    a = b;
    b = c;
    cout<<"Before swap ";
    cout<<a<<"\t"<<b;
    return 0;
}
