#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int i ,n = 1,m;
    cout<<"Print 1 to m Peime Number"<<endl;
    cout<<"Enter the value of M"<<endl;
    cin>>m;
    for (n = 1; n<=m ;n++)
    {
        i = 2;
        for(i = 2; i<n; i++)
        {
            if(n%i == 0)
            break;
        }
        if (i == n)
        cout<<n<<endl;
    }
    
    return 0;
}
