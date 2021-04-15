#include <bits/stdc++.h>
using namespace std;

int N, T;//Ukuran array & N selanjutnya elemen array, target
int X=0, Y=0;// bilangan 1//bilangan2
int arr[10001]{0},//elemen array dan bilangan target
step = false;

int main()
{
    cin >> N;//input ukuran array
    for (int a=1; a<=N; a++)
    {
    cin >> arr[a];//input elemen array
    }
    {
    cin >> T; // input bilangan target
    for (int a=1; a<=N; a++)
    {
        if(step)//jika dia step kan salah jadi berhenti
        {
            break;
        }
        if (a>=T) //  jika a lebih dari sama dengan T maka dia berhenti
        {
            break;
        }
        if (a<T)
        {
            X=a; //bilangan 1 sama dengan a
            for (int b=a+1; b<=N; b++)//masuk perulangan untuk mengecek benar atau tidak
            {
                if(arr[a]+arr[b]==T)//masuk ke fif
                {
                step=true; // jika step benar
                Y=b;//maka Y sama dengan lalu berhenti 
                break;
                }
            }
        }
    }
}
    if (step)//jika di temukan indeks 2 index 
    {
        cout << X << " " << Y << endl;// maka outputnya X dan Y
    }
    else
    {
        cout << "Gaada bebs." << endl;
    }
    return 0;
}
4
2 5 7 9
7
Sample Output 0

1 2
Sample Input 1

3
1 3 5
5
Sample Output 1

Gaada bebs.