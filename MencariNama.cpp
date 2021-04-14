#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() 
{
    int N;
    bool benar=true;
    cin>>N;
    char ivan[N];
    for(int i=0; i<N; i++)
    {
        cin>>ivan[i];
        if(ivan[i]<'A'||ivan[i]>'Z')
        {
            benar=false;
        }
        else
        {
            benar=true;
        }
    }
    if(benar)
    {
        int jumlah=0;
        for(int i=0; i<N; i++)
        {
            if(ivan[i]<'A'||ivan[i]>'Z'){break;}
            else if(ivan[i]=='I')
            {
                for(int j=i+1; j<N; j++)
                {
                    if(ivan[j]<'A'||ivan[j]>'Z'){break;}
                    if(ivan[j]=='I')
                    {
                        break;
                    }
                    else if(ivan[j]=='V')
                    {
                        for(int k=j+1; k<N; k++)
                        {
                            if(ivan[k]<'A'||ivan[k]>'Z'){break;}
                            if(ivan[k]=='V')
                            {
                                break;
                            }
                            else if(ivan[k]=='A')
                            {
                                for(int l=k+1; l<N; l++)
                                {
                                    if(ivan[l]<'A'||ivan[l]>'Z'){break;}
                                    if(ivan[l]=='A')
                                    {
                                        break;
                                    }
                                    else if(ivan[l]=='N')
                                    {
                                        jumlah+=1;
                                        break;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    cout<<jumlah<<endl;
    }

    return 0;
}