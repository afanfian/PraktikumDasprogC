#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T, N;//bilangan bulat positif, jumlah angka
    int angka=0, cek=0;
    cin>>T; // bilangan bulat positif T yang merupakan banyak test case yang akan dicoba
    while (T--)
    {
        int arr[10010] = {0};
        cek=0;
        cin>>N;// bilangan bulat N yaitu jumlah angka
        for(int i=0; i<N; i++)
        {
            cin>>angka;// list angka
            arr[angka]++;
        }
        for(int i=1; i<=10000; i++)
        {
            if(arr[i]>1)
            {
                cek+=arr[i]-1;
            }
        }
        cout<<cek<<endl;// jumlah 
    }
    return 0;
}
Sample Input 0

2
5
1 1 2 2 5
5
1 2 3 5 5
Sample Output 0

2
1