#include <stdio.h>

int secondOrderStatistics(int* ptr, int n){

    int min = 101, min2 = 101;

    for(int i = 0; i < n; i++){
        if(ptr[i]<min)
            min2=min, min=ptr[i];
        if(ptr[i]<min2 && ptr[i]>min)
            min2=ptr[i];
    }

    if(min==min2)
        return 101;
    else
        return min2;

}

int main(){

    int len;
    scanf("%d ", &len);
    int dizi[len];
    for(int i = 0; i < len; i++)
        scanf("%d ", &dizi[i]);
    (secondOrderStatistics(dizi, len)!=101)?printf("%d", secondOrderStatistics(dizi, len)):printf("NO");
    return 0;

}
