#include <stdio.h>

using namespace std;

int pow(int m, int n, bool fast){
    if(n == 0) return 1;
    if(!fast){
        return pow(m, n-1,fast)*m;
    }
    else{
        if(n%2 == 0)
            return pow(m*m,n/2,fast);
        else
            return pow(m*m,(n-1)/2,fast)*m;
    }
}

int main(){
    int m,n,f;

    scanf("%d %d %d",&m,&n,&f);
    bool fast = (f==1);
    printf("the value %d to the power of %d is : %d\n",m,n,pow(m,n,fast));

    return 0;
}