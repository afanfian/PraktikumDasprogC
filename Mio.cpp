#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;

int main()
{
    int n; 
    float jumlahsementara=0 ; 
    float nilaiterkecil=0, nilaiterbesar=0, totalpembagian, rataratatotal; 
    cin >> n;
    float nilaisementara[n]; 
        for (int i=0;i<n;i++) 
        {
            cin >> nilaisementara[i];
        }
    float jumlahtotal=nilaisementara[0];
        for (int i=0; i<n; i++)
        {
            jumlahsementara=0;
            for(int j=i; j<n; j++)
            {
                 jumlahsementara += nilaisementara[j]; 
                if(jumlahsementara > jumlahtotal || (i == 0 && j == 0))
                {
                    jumlahtotal=jumlahsementara  ; 
                    nilaiterkecil=i;
                    nilaiterbesar=j;
                }
            }
        }
    totalpembagian = nilaiterbesar - nilaiterkecil + 1;
    rataratatotal = jumlahtotal/totalpembagian;// 
    cout << fixed ;
    cout << setprecision(2)<< rataratatotal << endl;
    return 0;
}