#include <stdio.h>

int main(){
    int x, z;
    long int res = 1;
    
    printf("Digite o valor de x: ");
    scanf("%d", &x);
    
    printf("Digite o valor de z: ");
    scanf("%d", &z);
    
    printf("%d elevado a %d é igual a %ld\n", x, z, res);

    return 0;
}