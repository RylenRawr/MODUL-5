#include <stdio.h>
int reverse(int rever) {
    int i = 0;
    while(rever != 0) {
        i = i*10;
        i = i+rever%10;
        rever/=10;
    }
    return i;
}

int main() {
    int A, B,i =0;
        scanf("%d %d",&A,&B); 
        A = reverse(A); 
        B = reverse(B);
        int C= A+ B; 
        printf("%d",reverse(C));
    return 0;
}
