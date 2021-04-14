#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int N;
    unsigned long long pangkat2, pangkat3, pangkat4, rumus1, rumus2, rumus3, pembilang, jumlahtotal;
    scanf("%d", &N);
    unsigned long long jumlahdata[N];
    for(int i=0; i<n; i++){
        scanf("%llu", &jumlahdata[i]);
    }
    for(int i=0; i<n; i++){
        if(jumlahdata[i]>=1){
            rumus2=(jumlahdata[i]*jumlahdata[i])%24000000168;
            pangkat3=(pangkat2*jumlahdata[i])%24000000168;
            pangkat4=(pangkat3*jumlahdata[i])%24000000168;
            rumus1=(pangkat2*6*jumlahdata[i])%24000000168;
            rumus2=(pangkat2*23)%24000000168;
            rumus3=(rumus2+pangkat4)%24000000168;
            pembilang=(rumus3-rumus1-18*jumlahdata[i]+24);
            if(pembilang>=0){
                pembilang=(rumus3-rumus1-18*jumlahdata[i]+24)%24000000168;
                jumlahtotal=(pembilang/24)%24000000168;
                printf("%llu \n", jumlahtotal);
            }
        }
    }
    return 0;
}#include <iostream>
using namespace std;

int main()
{
    return 0;
}