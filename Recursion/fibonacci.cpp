#include <stdio.h>
#include <vector>

using namespace std;

int fib1(int n){
    if(n <= 2) return n-1;

    return fib1(n-1)+fib1(n-2);
}

int fib2(int n){
    if(n<=2) return n-1;
    int t0 = 0, t1 = 1, s;
    for(int i=3;i<=n;i++){
        s = t0+t1;
        t0 = t1;
        t1 = s;
    }
    return s;
}

int fib3(int n){
    static vector<int> dp(n,-1);
    dp[0] = 0;
    dp[1] = 1;
    if(n <= 2){
        return dp[n-1];
    }
    if(dp[n-1] == -1) dp[n-1] = fib3(n-1);
    if(dp[n-2] == -1) dp[n-2] = fib3(n-2);
    dp[n] = dp[n-1]+dp[n-2];
    return dp[n];
}

int main(){

    int n;
    scanf("%d",&n);
    printf("the %dth fibonacci number is : %d\n",n,fib3(n));
    return 0;
}