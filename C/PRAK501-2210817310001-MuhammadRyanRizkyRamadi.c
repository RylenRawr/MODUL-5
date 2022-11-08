#include <stdio.h>
int maxBilangan(int r, int y, int a, int n){
    if ( r>y && r>a && r>n){
        printf("%d",r);
    }else if (y>r && y>a && y>n){
        printf("%d",y);
    }else if (a>r && a>y && a>n){
        printf("%d",a);
    }else if (n>r && n>y && n>a){
        printf("%d",n);
    }else{
        printf("\n");
    }
    return 0;
}
int main(){
    int a,b,c,d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int hasil = maxBilangan(a, b, c, d);
    printf("%.0d", hasil);
    return 0;
}