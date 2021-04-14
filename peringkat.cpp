#include <bits/stdc++.h>
using namespace std;

void panjatperingkat(stack <long int> angka, vector <int> pindah)
{
    for(long unsigned int i =0 ; i<pindah.size() ; i++)
    {
        while(!angka.empty() && pindah[i]>=angka.top()) angka.pop() ;//kosong, puncak/nilai paling tinggi, mengeluarkan atau menghapus data dari stack.
        cout<<angka.size()+1<<endl ; // N bilangan yang menyatakan peringkat keberapa tiap score yang di peroleh
    }

}

int main(void)
{
    int M=0, N=0, temp=0; 
    cin >> M;// jumlah list nilai yang ada dalam daftar peringkat
    stack <long int> angka ;
    for(int i = 0; i < M; i++)
    {
       cin >> temp;// bilangan yang menyatakan nilai tiap peringkat
        if(angka.empty() || angka.top()!=temp)// kosong, puncak/nilai paling tinggi
            angka.push(temp) ;// untuk menambahkan data ke dalam stack
    }
    cin >> N;//  jumlah permainan yang akan dimainkan
    vector<int> pindah(N);
    for(int i = 0; i < N; i++)
    {
       cin >> pindah[i];//bilangan score pada permainan ke -i
    }
    panjatperingkat(angka,pindah) ;

    return 0;
}
//skor: larik bilangan bulat yang mewakili skor papan peringkat
//alice: array bilangan bulat yang mewakili skor Alice
//Larik adalah struktur data yang menyimpan sekumpulan elemen yang bertipe sama.
//Setiap elemen diakses secara langsung melalui indeksnya
//Setiap elemen mempunyai indeks yang bertipe data berurutan (integer atau karakter).
//Dengan demikian stack adalah struktur data yang menggunakan konsep LIFO(Last In First Out).
Sample Input 0

7
100 100 50 40 40 20 10
4
5 25 50 120
Sample Output 0

6
4
2
1
//http://www.nblognlife.com/2014/04/stack-pada-c.html
//https://bekti.net/blog/implementasi-stack-di-cpp/
//https://pintarkom.com/stack-pada-c-8-10/