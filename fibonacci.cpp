#include <bits/stdc++.h>
using namespace std;


void fibonacci(unsigned long long seed, unsigned long long arr[]);// memakai fungsi void dengan variabel fibonaci
unsigned long long indexa(unsigned long long fibo);//memakai fungsi kedua yaitu unsigned long long dengan variabel indexa
int main() {

    int n, i;// jumlah soal yang di masukkan, variable untuk membantu looping    
    char func[6];//func : string untuk nyimpen perintah mau tribbo apa index, panjang arraynya 6 (tribbo length nya = 6,)
    memset(func, 0, 6*sizeof(char));
    unsigned long long arr[2] = {1, 1};
    unsigned long long temp;// menyimpan nilai sementara
    
    cin >> n ;
    for(i=0;i<n;i++)
    {
        cin >> func;
        cin >> temp;
        if(strcmp(func, "fibo") == 0)
        {
            arr[0] = 1;
            arr[1] = 1;
            fibonacci(temp, arr);
            cout << arr[1] << endl;
        }else if(strcmp(func, "index") == 0)
        {
            cout << indexa(temp) << endl;
        }
    }  
    return 0;
}
void fibonacci(unsigned long long seed, unsigned long long arr[]){
    unsigned long long temp;
    if(seed > 2){
        temp = arr[1];
        arr[1] = arr[0] + arr[1];
        arr[0] = temp;
        fibonacci(seed - 1, arr);
    }
}
unsigned long long indexa(unsigned long long fibo){
    unsigned long long arr[2] = {1, 1};
    unsigned long long highest_idx = 2;
    unsigned long long temp;
    while(1){
        if(arr[1] == fibo){
            break;
        }else{
            temp = arr[1];
            arr[1] = arr[0] + arr[1];
            arr[0] = temp;
            highest_idx +=1;
        }
    } 
    return highest_idx;//itu index tertinggi yang ada didalam array, karenya fibo nyimpen 2 terakhir, berarti highest index pertama tu adalah 2, terus nanti tiap generate fibo indexnya nambah satu
}
Sample Input 0

4
fibo 5
index 55
fibo 9
index 13
Sample Output 0

5
10
34
7
// seed : seed itu kek angka yang diperluin untuk nentuin output program makaknya tak kasi nama seed. 
/*kalo untuk fibbo, seed tu index tribbo yang mau dicari, jadi  nanti ngeloop sebanyak seed -3 (sampe seed > 3)*/
// indexa : indeks? iya bener index, aku pake indexa soalya kek biar ga ada kesalahan identifier, entah apa lupa, namanya bebas aja mau dikasi apa bisa tribbo_index dll
// n : n itu kek seberapa banyak ada test case kalo gak salah ya
// i : 
// func : string untuk nyimpen perintah mau tribbo apa index, panjang arraynya 6 (tribbo length nya = 6,)
// highest_idx :  (
//--lajutan : karean yang disimpen di array[2] itu kek index setelah sebelumnya, jadi ya di tambah 1 tiap loop ngebuat tribbo
 // untuk urusan fibbo ya berarti index tertinggi awalnya tu 2, terus untuk sisanya yang 3 ya jadi 2 gitu aja si
