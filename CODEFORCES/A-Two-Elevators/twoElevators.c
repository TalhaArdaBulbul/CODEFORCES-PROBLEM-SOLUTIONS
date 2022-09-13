#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int twoElevator(int* ptr){

    int a = abs(ptr[0] - 1);
    int b = abs(ptr[1]-ptr[2]) + abs(ptr[2] - 1);

    if(a<b)
        return 1;
    else if(a>b)
        return 2;
    else
        return 3;
}

int main(){

    int t;
    scanf("%d", &t);

    for(int i = 0; i < t; i++){

        int* arr = (int*)malloc(3*sizeof(int));
        scanf("%d %d %d",&arr[0],&arr[1],&arr[2]);

        printf("%d", twoElevator(arr));
        puts("");
        free(arr);
    }


    return 0;

}
