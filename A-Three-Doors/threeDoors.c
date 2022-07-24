#include <stdio.h>
#include <stdbool.h>

char* threeDoors(int firstKey, int* keys){

    bool deger = true;
    int sayac = 0;
    while(deger){
        firstKey = keys[firstKey-1];
        sayac++;
        if(firstKey == 0 || sayac==3)
            deger = false;
    }

    if(sayac==3)
        return "YES";
    else
        return "NO";
}

int main(){

    int testCases;
    scanf("%d ", &testCases);

    for(int i = 0; i < testCases; i++){
        int x;
        scanf("%d ", &x);
        int arr[3];
        scanf("%d %d %d", &arr[0], &arr[1], &arr[2]);
        printf("%s", threeDoors(x, arr));
        puts("");
    }
    return 0;
}
