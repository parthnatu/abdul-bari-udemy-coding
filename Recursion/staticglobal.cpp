#include <iostream>

using namespace std;

int _x = 0;

int fun_nonstatic(int n){
    if(n > 0){
        return fun_nonstatic(n-1)+n;
    }
    return 0;
}

int fun_static(int n){
    static int x = 0;
    if(n > 0){
        x++;
        return fun_static(n-1)+x;
    }
    return 0;
}

int fun_global(int n){
    if(n > 0){
        _x++;
        return fun_global(n-1)+_x;
    }
    return 0;
}

int main(){
    int n = 5;

    printf("%d\n",fun_nonstatic(n));
    printf("%d\n",fun_static(n));
    printf("%d\n",fun_global(n));
    return 0;
}