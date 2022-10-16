#include <stdio.h>

int main() {
    int m2;
    float precio;
    printf("Introduce el numero de metros cubicos consumidos: ");
    scanf("%d",&m2);
    if (m2<=10)
        precio=6;
    else if (m2>10 && m2<=50)
        precio=6+0.3*(m2-10);
    else
        precio=6+0.45*(m2-10);
    printf("El precio de la factura es de: %.2f Euros",precio);
    return 0;
}
