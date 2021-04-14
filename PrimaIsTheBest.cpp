#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
 
int main()
{
    int x, a, b, c; 
    int cek1=0; 
    int cek2=0; 
    int cek3=0;
    cin>> x ; 
    bool bilprima=true; 
    bool ditest=true;
    cek2=sqrt(x); 
    for(a=2; a<=cek2; a++) 
    {
        if(x%a==0)  
            {
                ditest=false;
                break;
            }
            else 
                {
                    ditest=true;
                }
                
    }
    if(ditest) 
    {
        for(b=2; b<=x; b++)
        {
            if(b==2||b==3)
            {
                bilprima=true;
            }
            else
            {
                cek3=sqrt(b);
                for(c=2; c<=cek3; c++)
                {
                    if(b%c==0){
                        bilprima=false;
                        break;
                    }
                    else
                    {
                        bilprima=true;
                    }
                }
            }
            if(bilprima)
            {
                cek1=cek1+1;
            }
            else
            {
                cek1=cek1+0;
            }
        }
        cout<<cek1<<endl; 
    }
    else
        {   
             cout<<"Ini bilangan normal bjirr..."<<endl;
        }
    return 0;
}