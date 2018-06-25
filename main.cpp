#include <iostream>
#include <conio.h>
#include <string>
#include <string.h>
using namespace std;

int main()
{
    char b[5]="ubit";
    char a;
    int i=0,j=0;
    for (i=0;;)
    {
        a=getch();
        if((a>='a'&&a<='z') || (a>='A'&&a<='Z') ||  (a>='0'&&a<='9'))
        {
            if(b[j]==a)
            {
                j++;
            }
            i++;
            cout<<"*";
        }
        if(a=='\b'&&i>=1) //backspace ki logic hai
        {
            cout<<"\b \b";
            --i;
        }
        if(a=='\r') //enter press krne ki logic hai ye
            break;

    }

cout<<"\n";
if(j==i)
{
    cout<<"correct";
}
else
{
    cout<<"wrong";
}
}

