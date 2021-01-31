#include <stdio.h>

using namespace std;

int ncr(int n,int r){
    if(r == 0 || (n-r) == 0) return 1;
    return ncr(n-1,r-1) + ncr(n-1,r);
}

int main(){
    int n, r;
    scanf("%d %d",&n,&r);
    printf("ncr value for n=%d and r=%d is %d\n",n,r,ncr(n,r));

    return 0;
}