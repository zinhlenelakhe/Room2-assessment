#include <iostream>
#include<string>
using namespace std;

int main()
{
     int evenNum;
     int i = 0;
     string surname;
     char initial;
     do
     {
          cout<<"Enter even number from 0 to 10\n";
          cin>>evenNum;
          if( evenNum % 2 == 0)
          {
               cout << evenNum << " is an even number " << endl;
               cout<<"enter your initial :";
               cin>>initial;
               cout<<"enter your surname :";
               cin>>surname;
               cout<<"your initial is "<<initial<< "  and your surname is "<<surname<<endl;
               cout<<"and you enetred even number"<<evenNum<<endl;
          }
          else
          {
               cout << evenNum << " Is not an even number re-enter number " << endl;
               cout<<"exit if completed"<<endl;
          }
          i++;
          
          
      }while(evenNum <= 10); 
     
     return 0;     
}
