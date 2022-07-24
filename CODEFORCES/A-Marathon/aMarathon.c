#include <stdio.h>



int biggerThan(int *ptr){

    int a = ptr[0];
    int output = 0;

    for(int k = 1; k < 4; k++){
        if(ptr[k]>a)
            output++;
    }

    return output;
}


int main(){

    int x;
    scanf("%d ",&x);
    int arr[x];
    int results[x];

    for(int i = 0; i < x; i++){
        for(int j = 0; j < 4; j++){
            scanf("%d ", &arr[j]);
            results[i] = biggerThan(arr);
        }

    }
    for(int l = 0; l < x; l++)
        printf("%d\n", results[l]);
}
