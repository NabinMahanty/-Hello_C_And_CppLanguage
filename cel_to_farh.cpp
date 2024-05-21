#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    cout<<"In this program we convert temperature centigrade to Fahrenheit and vice versa"<<endl;
    int ch, cent,fahr;
    cout<<"Press 1 for Cel to fahr"<<endl;
    cout<<"Press 2 for fahr to cael"<<endl;
    cin>>ch;
    switch (ch)
    {
    case 1:
        cout<<"Enter the centigrade value "<<endl;
        cin>>cent;
        fahr = (cent)+(32*5)/5;
        cout<<"Result is "<<fahr<<endl;
        break;
    
    default:
        break;
    }

    return 0;
}
