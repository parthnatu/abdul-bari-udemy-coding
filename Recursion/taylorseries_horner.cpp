#include <stdio.h>

using namespace std;

double e(int x, int n){
    static double s = 1.0;
    if(n == 0) return s;
    s = 1 + ((double)x/(double)(n))*s;
    return e(x,n-1);
}

int main(){
    int x,n;
    scanf("%d %d",&x,&n);
    printf("value of e to the power %d is : %lf\n", x, e(x,n));
    return 0;
}