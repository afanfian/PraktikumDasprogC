#include <bits/stdc++.h> 
using namespace std; 
  
const int Mod = 1e9 + 7; 
int power(int X, int Y, int Mod) 
{ 
    if (Y == 0) 
        return 1; 
  
    int p = power(X, Y / 2, Mod) % Mod; 
    p = (p * p) % Mod; 
  
    if (Y & 1) { 
        p = (X * p) % Mod; 
    } 
  
    return p; 
} 
int Inversefactorial(int N) 
{ 
    if (N <= 0) 
        return 1; 
  
    int fact = 1; 
  
    for (int i = 1; i <= N; i++) { 
        fact = (fact * i) % Mod; 
    } 
  
    return power(fact, Mod - 2, Mod); 
} 
int factorial(int N) 
{ 
  
    if (N <= 0) 
        return 1; 
  
    int fact = 1; 
  
    for (int i = 1; i <= N; i++) { 
        fact = (fact * i) % Mod; 
    } 
  
    return fact; 
} 
int nck(int N, int K) 
{ 
    int factN = factorial(N); 
    int inv = Inversefactorial(K); 
    int invFact = Inversefactorial(N - K); 
    return (((factN * inv) % Mod) * invFact) % Mod; 
} 
int Yeayy, berhasil(int N, int M) 
{ 
    if ((N + M) % 3 != 0) 
        return 0; 
    int X = N - (N + M) / 3; 
    int Y = M - (N + M) / 3; 
  
    if (X < 0 || Y < 0) 
        return 0; 
  
    return nck(X + Y, Y); 
} 
int main() 
{ 
  
    int N = 3, M = 3; 
  
    cout << "Yeayy, berhasil" (N, M); 
  
    return 0; 
}