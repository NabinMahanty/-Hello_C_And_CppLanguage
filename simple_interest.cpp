#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int t,ch;
    float i,p,r;
    cout<<"_____In this program We can find simple interest______"<<endl;
    cout<<"Press 1 for find the interest"<<endl;
    cout<<"Press 2 for find the Amount"<<endl;
    cout<<"Press 3 for find the Rate of interest"<<endl;
    cout<<"Press 4 for find the Time"<<endl;
    cout<<"Enter your choice"<<endl;
    cin>>ch;
    switch (ch)
    {
    case 1:
        cout<<"Enter the value of p"<<endl;
        cin>>p;
        cout<<"Enter the value of t"<<endl;
        cin>>t;
        cout<<"Enter the value of r"<<endl;
        cin>>r;
        i = (p*t*r)/100;
        cout<<"The result is "<<i<<endl;
        break;
    
    case 2:
        cout<<"Enter the value of i "<<endl;
        cin>>i;
        cout<<"Enter the value of t "<<endl;
        cin>>t;
        cout<<"Enter the value of r "<<endl;
        cin>>r;
        p = (100*i)/(t*r);
        cout<<"The result is  "<<p<<endl;
        break;

    case 3:
        cout<<"Enter the value of i "<<endl;
        cin>>i;
        cout<<"Enter the value of t "<<endl;
        cin>>t;
        cout<<"Enter the value of p "<<endl;
        cin>>p;
        r = (100*i)/(t*p);
        cout<<"The result is  "<<r<<endl;
        break;   

    case 4:
        cout<<"Enter the value of i "<<endl;
        cin>>i;
        cout<<"Enter the value of p "<<endl;
        cin>>p;
        cout<<"Enter the value of r "<<endl;
        cin>>r;
        t = (100*i)/(p*r);
        cout<<"The result is  "<<t<<endl;
        break;
    
    default:
        cout<<"\t\t\t\tClick a valid option "<<endl;
        break;

    }
    cout<<"\n\n\nThank You visit again";
    return 0;
}
