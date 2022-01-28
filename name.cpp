#include<iostream>
#include<stdio.h>
#include<ctype.h>
#include<string.h>
using namespace std;

int main()
{
char name[30];
 
 cout << " Enter your name " << endl;
 cin >> name;
 
 int length = strlen(name);
 for(int i=0;i<length;i++)
    {
        if(i==0)
        {
            if(islower(name[i]))
            name[i]=toupper(name[i]);
        }
        else
        {
            if(name[i]!=' ')
            {
                if(isupper(name[i]))
                    name[i]=tolower(name[i]);
            }
            else
            {
                i++;
                if(islower(name[i]))
                    name[i]=toupper(name[i]);
            }
        }
    }
 
 cout << " Hello " << name << "!" << endl;

    system("pause");
    return 0;
}
