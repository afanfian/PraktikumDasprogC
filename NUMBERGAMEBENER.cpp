#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;
int num=0;
void unique_combination(int l, int sum, int K, vector<int>& local, vector<int>& A)
{
    if (sum == K) {
        num++;
    }
    for (int i = l; i < A.size(); i++) {
        if (sum + A[i] > K)
            continue;
        local.push_back(A[i]);
        unique_combination(i + 1, sum + A[i],
                           K, local, A);
        local.pop_back();
    }
}

void Combination(vector<int> A, int K)
{
    sort(A.begin(), A.end());
    vector<int> local;
    unique_combination(0, 0, K, local, A);
}

int main()
{
    int n;
    cin >> n;
    int arr[n+10];
    for (int i = 0; i<n; i++)
    {
        cin >> arr[i];
    }
    int K;
    cin >> K;
    vector<int> dest(arr, arr + n);
    Combination(dest, K);
    cout << num;
    return 0;
}