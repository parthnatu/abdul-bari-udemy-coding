#include <stdio.h>
using namespace std;

int fact(int n){
    if(n < 0) return -1;
    if(n == 0) return 1;
    return fact(n-1)*n;
}

int main(){
    int n;
    scanf("%d",&n);
    printf("factorial of %d is : %d\n",n,fact(n));
}
