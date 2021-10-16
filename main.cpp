#include <iostream>
#include <conio.h>
using namespace std;

int main()
{

     double b,pf,t,ot,dd,whr,n,z,x;
     cout<<"Enter Number Of Time You Want To Run : ";
     cin>>x;

     for(z=1;z<=x;z++)
     {

     cout<<"_______________________________________________________________________________________________________"<<endl;
     cout<<"\t \t \t \t \t NETT SALARY OF EMPLOYEE "<<z<<endl;
     cout<<"_______________________________________________________________________________________________________"<<endl;
     cout<<"Enter The Value Of Basic Salary  : ";
     cin>>b;
     cout<<"Enter The Value Of Working Hours : ";
     cin>>whr;
     cout<<"_______________________________________________________________________________________________________"<<endl;
     if(b>=18000)
     pf=0.1*b;
     else
     pf=0.08*b;


     if(b<=9999)
     t=0;
     else if(b<=16999)
     t=1000;
     else if(b<=21999)
     t=0.1*b;
     else
     t=0.14*b;


     if(whr>280)
     {
	ot=(whr-280)*35;
	dd=0;
     }
     else if(whr<280)
     {
	ot=0;
	dd=(whr-280)*30;
     }
     else
     {
	ot=0;
	dd=0;
     }


     cout<<"\n Provident Fund : "<<pf;
     cout<<"\n Tax            : "<<t;
     cout<<"\n Overtime       : "<<ot;
     cout<<"\n Deduction      : "<<dd<<endl;
     n=b-pf-t+ot-dd;
     cout<<"_______________________________________________________________________________________________________"<<endl;
     cout<<"\n Nett Salary    : "<<n<<endl;

     }
     getch();
}
