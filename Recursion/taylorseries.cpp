#include <stdio.h>

float e(int x, int n){
    static float p=1.0, f=1.0;
    if(n == 0) return 1;
    float r = e(x,n-1);
    p = p*x;
    f = f*n;
    return r+ (float)(p/f);
}

int main(){
    int x, n;
    scanf("%d %d",&x,&n);
    printf("value of e to the power %d is : %f\n", x, e(x,n));
    return 0;
}