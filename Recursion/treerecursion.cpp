#include <iostream>

using namespace std;

void fun(int n){
    if(n > 0){
        printf("%d ",n);
        fun(n-1);
        printf("\n");
        fun(n-1);
    }
}

int main(){
    int n = 0;
    scanf("%d",&n);

    fun(n);
    printf("\n");
    return 0;
}