#include <iostream>

using namespace std;

int rec_sumofN(int n){
    if(n == 0) return 0;
    return rec_sumofN(n-1)+n;
}

int main(){
    int n;
    scanf("%d",&n);
    printf("sum of %d natural numbers is : %d\n",n, rec_sumofN(n));
    return 0;
}