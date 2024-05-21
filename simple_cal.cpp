#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    
    
    int a, b,c,count = 3;
    while(count <=4)
   { 
    cout << "_____Simple Calculator_____" << endl;
    cout << "Press 1 for add" << endl;
    cout << "Press 2 for Sub" << endl;
    cout << "Press 3 for multi" << endl;
    cout << "Press 4 for div" << endl;
    cout << "Enter two Number = " << endl;
    cin >> a;
    cin >> b;
    cout << "Enter your choice " << endl;
    cin >> c;



    switch (c)
    {
    case 1:
        cout << "The sum is " << a + b << endl;
        break;
    case 2:
        cout << "The sum is " << a - b << endl;
        break;
    case 3:
        cout << "The sum is " << a * b << endl;
        break;
    case 4:
            cout << "The sum is " << a / b <<endl;
            break;
    default:
        cout<<"Error"<<endl;
        break;
    }



//     if (c = 1)
//     {
//         cout << "The sum is " << a + b << endl;
//     }
//     else if (c = 2)
//     {
//         cout << "The sum is " << a - b << endl;
//     }
//    else if (c = 3)
//     {
//         cout << "The sum is " << a * b << endl;
//     }
//     else if(c = 4)
//     {
//         cout<<"The sum is " << a/b <<endl;
//     }
//     else 
//     {
//         cout<<"Error"<<endl;
//     }

   }
    return 0;
}
