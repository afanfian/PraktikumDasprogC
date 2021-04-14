#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;

int main() 
{
    int N,hurufterbanyak; 
    cin >> N; 
    string  a; 
    getline(cin,a); 
    for(int i=0; i<N; i++)
    {
        hurufterbanyak=0; 
        int ans [1000] ={0}; 
        getline(cin,a); 
        for(int j=0; j<a.length(); j++)
        {
            int tmp = a[j]; 
            if(a[j]>=97 && a[j]<=122) 
                {
                    ans[tmp]++; 
                }
            else if(a[j]>=65 && a[j]<=90) 
                {
                    tmp = a[j]+32; 
                    ans[tmp]++;
                }
            if (hurufterbanyak < ans [tmp])
            {
                hurufterbanyak = ans [tmp];
            }
        }
        cout<<"Testcase "<<i<<" :\n"; 
        for(int j=97 ; j<=122 ; j++) 
        {
            if(ans[j]==hurufterbanyak) 
            {
                cout<<char(j)<<"\n"; 
            }
        }
        
    }
    return 0;
}

