#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
       long a,b,c,d;
       cout<<"Enter First Number : ";
       cin>>a;
       cout<<"Enter second Number : ";
       cin>>b;
       cout<<"\t\t\tMENU\n1. Addtion\n2. Subtraction\n3. Division\n4. Multiply\n\tChoice : ";
       cin>>d;
       switch(d)
       {
           case 1:c=a+b;
                cout<<"Sum Of Number : "<<c;
                break;
           case 2:c=a-b;
                cout<<"Difference Of Number : "<<c;
                break;
           case 3:c=a/b;
                cout<<"On Dividing : "<<c;
                break;
           case 4:c=a*b;
                cout<<"Product : "<<c;
                break;
           default:cout<<"Invalid Character";
       }

}
