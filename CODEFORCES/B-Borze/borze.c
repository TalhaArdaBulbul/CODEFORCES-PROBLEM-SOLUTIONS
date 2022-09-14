#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int main(){

    char* ptr = (char*)malloc(201*sizeof(char));

    scanf("%s", ptr);

    int i = 0;

    bool deger = true;

    while(deger){

        if(ptr[i] == '.'){
            printf("0");
            i++;

        }

        else if(ptr[i] == '-'){
            if(ptr[i+1] == '.'){
                printf("1");
                i+=2;

            }
            else{
                printf("2");
                i+=2;
            }
        }
        else
            deger = false;

    }

    free(ptr);

    return 0;

}
