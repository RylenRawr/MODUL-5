#include <stdio.h>
int maksimal(int maks, int nilai){
    if (maks > nilai){
        return maks;
    }else{
        return nilai;
    }
}
int minimal(int minim, int nilai){
    if(minim<nilai){
        return minim;
    }else{
        return nilai;
    }
}

int main(){
    int batas = 0;
    int maks = -100000;
    int minim = 100000;
    int bilangan;
    scanf("%d", &bilangan); while(batas < bilangan){
    int nilai; scanf("%d", &nilai);
    maks = maksimal(maks, nilai); minim = minimal(minim, nilai); batas++;
    }
    printf("%d %d",maks,minim);

}