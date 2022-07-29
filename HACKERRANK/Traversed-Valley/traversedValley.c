#include <stdio.h>

int traversedValley(char* arr, int len){
    int yukseklik = 0, valley = 0;
    for(int i = 0; i < len; i++){
        arr[i]=='U'?yukseklik++:yukseklik--;
        if(yukseklik == 0 && arr[i] == 'U')
            valley++;
    }
    return valley;
}

int main(){
    int x;
    scanf("%d ", &x);
    char ptr[x+1];
    for(int i = 0; i < x; i++){
        scanf("%c ", &ptr[i]);
    }
    printf("%d", traversedValley(ptr, x));
}
