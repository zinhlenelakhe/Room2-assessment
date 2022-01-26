#include <iostream>
using namespace std;

int main()
{
     int evenNum;
     int i = 0;
     do
     {
          cout<<"Enter even number\n";
          cin>>evenNum;
          if( evenNum % 2 == 0)
          {
               cout << evenNum << " is an even number " << endl;
          }
          
          
      }while(evenNum < 5); 
     
     return 0;     
}
