#include <stdio.h>

int digito(char c){
    if ((c >= '0') && (c <= '9'))
    {
        return 1;
    }else{
        return 0;
    }
    
}

int main(){
    char c = '2';
    int n;
    n = digito(c);
    printf("%d", n);
    return 0;
}