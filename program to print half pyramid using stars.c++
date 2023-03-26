#include<iostream>
using namespace std;

int main()
{
    int i, j, n;

    cout<<"enter a number of rows :";
    cin>>"n";

    {
        for(i=1; i<=n; i++)

        {
            for(j=i; j<=i; j++)

            cout<<"*";
            cin>>"endl";
        
        }
        return 0;
    }
}