#include<iostream>
using namespace std;
class cal
{
    public:
    static int add(int a, int b)
    {
        return a + b;
    }

    static int add(int a, int b, int c)
    {
        return a+b+c;
    }
};

    int main(int argc, char const *argv[])
{
    {
        cal c;
        cout<<c.add(10,30)<<endl;
        // cout<<c.add(10,30,40,50)<<endl;
        cout<<c.add(10,20,30);

        return 0;
    }
    
}
