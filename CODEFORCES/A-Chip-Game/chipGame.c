#include <stdio.h>

int main(){

    int testCases;
    scanf("%d", &testCases);

    for(int i = 0; i < testCases; i++){
        int k, l;
        scanf("%d %d", &k, &l);
        (k+l)%2?printf("Burenka"):printf("Tonya");
        puts("");
    }

    return 0;

}
