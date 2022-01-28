#include <iostream>
using namespace std;

int main()
{
     int evenNum;
     int i = 0;
     do
     {
          cout<<"Enter even number from 0 to 10\n";
          cin>>evenNum;
          if( evenNum % 2 == 0)
          {
               cout << evenNum << " is an even number " << endl;
          }
          else
          {
               cout << evenNum << " Is not an even number re-enter number " << endl;
          }
          i++;
          
          
      }while(evenNum <= 10); 
     
     return 0;     
}
