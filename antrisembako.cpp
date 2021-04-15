#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int N, M;//Jumlah kasus, jumlah orang yang ngantri
    int afan [10000], fian [10000];//
    cin >> N;// input jumlah kasus
    for (int a=0; a<N; a++)
    {
        int p=0, q=0, r=0;//rusuh, salip, nyalip
        cin >> M;//input jumlah orang yang mengantri 
        for (int a=0; a<M; a++)
        {
            fian[a] = a+1; 
            cin >> afan[a];//input posisi terakhir setelah terjadi salip menyalip antrian
        }
        for (int a=0; a<M; a++)
        {
           if(fian [a] < (afan[a]-2)) 
           {
               p = 1;
           }
        }
        for (int a=1; a<M; a++)
        {
            for (int b=0; a>b; b++)
            {
                if (afan[a] < afan[b])
                {
                    q++;
                }
                else if (q == 3) 
                {
                    p = 1;
                }
            }
            r += q;
            q = 0;
        }
        if (p == 1) 
        {
            cout << "Rusuh gan" << endl;
        }
        else
        {
            cout << r << endl;
        }
    }
}
Sample Input 0

2
5
5 4 3 1 2
5
3 2 1 5 4
Sample Output 0

Rusuh gan
4