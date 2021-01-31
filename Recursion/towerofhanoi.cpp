#include <iostream>

using namespace std;

void toh(int n, char A, char B, char C){
    if(n > 0){
        toh(n-1,A,C,B);
        printf("(%c,%c) ",A,C);
        toh(n-1,B,A,C);
    }
}

int main(){
    int n;
    scanf("%d",&n);

    toh(n,'A','B','C');
    printf("\n");
    return 0;
}

