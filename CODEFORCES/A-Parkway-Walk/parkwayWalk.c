#include <stdio.h>
#include <stdlib.h>

int parkwayWalk(int* ptr, int benchs, int energy){

    int sum = 0;
    for(int i = 0; i < benchs; i++)
        sum += ptr[i];

    if(sum>energy)
        return sum - energy;
    else
        return 0;

}

int main(){

    int testCases;
    scanf("%d ", &testCases);

    for(int i = 0; i < testCases; i++){
        int n, m;
        scanf("%d %d", &n, &m);
        int* ptr = (int*)malloc(n*sizeof(int));
        for(int j = 0; j < n; j++)
            scanf("%d ", &ptr[j]);
        printf("%d", parkwayWalk(ptr, n, m));
        puts("");
        free(ptr);
    }

    return 0;
}
