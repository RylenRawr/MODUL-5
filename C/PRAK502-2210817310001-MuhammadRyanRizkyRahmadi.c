#include <stdio.h>
#include <math.h>
int rumus(int r, int y){
    return r - y;
}

int mutlak(int angka) {
    return fabs(angka);
}

int main() {
    int a, b, c, d;
        scanf("%d",&a);
        scanf("%d",&c);
        scanf("%d",&b);
        scanf("%d",&d);
        int Hasil = rumus(a,b) + rumus(c,d); 
        printf("%d",mutlak(Hasil));
    
    
    return 0;
}