#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string.h>

using namespace std;

int main()
{
    int a,b;
    int jumlahsepatu, ukuran[101], ukuransepatu, jumlahtotalsepatu=0; 
    memset(ukuran, 0, sizeof(ukuran)); 
    cin>>jumlahsepatu;

    for(a=0; a<jumlahsepatu; a++)
        {
            cin>>ukuransepatu;
            ukuran[ukuransepatu]++;
        }
        for(b=0; b<101; b++) 
            {
                if (ukuran[b]>0)
                {
                   if(ukuran[b]%2==0) 
                   {
                    jumlahtotalsepatu=jumlahtotalsepatu+ukuran[b]/2;
                   }
                   else if(ukuran[b]%2==1)  
                   {
                    jumlahtotalsepatu=jumlahtotalsepatu+(ukuran[b]-1)/2;
                   }
                }
            }
            cout<<jumlahtotalsepatu; 
            return 0;
}   