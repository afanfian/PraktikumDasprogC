#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() 
{

    int B, K, N ;  
    cin >> B >> K >> N ;
    for(int a=0; a<B; a++)
    { 
        for(int b=0; b<N-1; b++) 
        {
            for(int c=0; c<K; c++) 
            {
                for(int d=1; d<=N-b-1; d++)
                    {
                        cout<<" ";
                    }
                     for(int d=1; d<=2*b+1; d++)
                        {
                            cout<<"#";
                        }
                        for(int d=1; d<N-b-1; d++)
                            {
                                cout<<" ";
                            }
                            for(int d=1; d<=N-b-1; d++) 
                                {
                                    cout<<" ";
                                }
                                for(int d=1; d<=2*b+1; d++) 
                                    {
                                        cout<<"#";
                                    }
                                    for(int d=1; d<=N-b-1; d++) 
                                        {
                                            cout<<" ";
                                        }
             }
                cout<<" " << endl;   
         }
        int zz = ((N-1)*2-1)*2+3;  
        int spasi=0; 
        for(int b = zz ; b>0 ; b=b-2) 
        {
            for(int c=0; c<K; c++)
            {        
                for(int d=0; d<spasi; d++ )
                {
                    cout<<" ";
                }   
                    for(int d=0; d<b; d++) 
                        {
                            cout<<"#";
                        }
                        for(int d=0; d<spasi; d++ ) 
                            {
                                cout<<" ";
                            }
            }
                spasi++; 
                cout<< " " << endl;
        }
        
    }    
    return 0;
}