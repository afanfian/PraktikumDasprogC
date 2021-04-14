#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int dp[8][8] = {0};

int getsteps(int a, int b, int c, int d)
{
    if (a == c && b == d) 
    {
        return dp[0][0];
    }
    else
    {
        if (dp[abs(a - c)][abs(b - d)] != 0) 
        {
            return dp[abs(a - c)][abs(b - d)];
        }
        else
        {
            int a1, b1, a2, b2;
            if (a <= c)
            {
                if (b <= d)
                {
                    a1 = a + 2;
                    b1 = b + 1;
                    a2 = a + 1;
                    b2 = b + 2;
                }
                else 
                {
                    a1 = a + 2;
                    b1 = b - 1;
                    a2 = a + 1;
                    b2 = b - 2;
                }
            }
            else
            {
                if (b <= d)
                {
                    a1 = a - 2;
                    b1 = b + 1;
                    a2 = a - 1;
                    b2 = b + 2;
                }
                else
                {
                    a1 = a - 2;
                    b1 = b - 1;
                    a2 = a - 1;
                    b2 = b - 2;
                }
            }
            dp[abs(a - c)][abs(b - d)] = min(getsteps(a1, b1, c, d), getsteps(a2, b2, c, d)) + 1;
            dp[abs(b - d)][abs(a - c)] = dp[abs(a - c)][abs(b - d)];
            return dp[abs(a - c)][abs(b - d)];
        }
    }
}

int main()
{
    int i, n, a, b, c, d, ans;
    int rowsK, rowsQ, num;
    char columnK, columnQ;
    cin >> columnK >> rowsK;
    cin >> columnQ >> rowsQ;
    cin >> num;
    n = 64;
    a = rowsK;
    b = ((int) columnK)-64;
    c = rowsQ;
    d = ((int) columnQ)-64;
    dp[1][0] = 3;
    dp[0][1] = 3;
    dp[1][1] = 2;
    dp[2][0] = 2;
    dp[0][2] = 2;
    dp[2][1] = 1;
    dp[1][2] = 1;
   ans = getsteps(a, b, c, d);
    if (ans<=num) 
    {
        cout << "Yeayy, berhasil" << endl;
    }
    else 
    {
        cout << "Dia terlalu kuat" << endl;
    }
        return 0;
}