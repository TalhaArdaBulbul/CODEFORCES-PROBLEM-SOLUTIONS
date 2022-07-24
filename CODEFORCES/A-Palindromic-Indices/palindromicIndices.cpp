#include <cstdio>
#include <cstring>




int stillPalindrom(char* ptr, int u){

    int x = 0;

    for(int k = 0; k < u; k++){

        char arr[u];

        for(int j = 0; j < u; j++){

            if(j>=k)
                arr[j]=ptr[j+1];
            else
                arr[j]=ptr[j];

        }
       int h = 0, y = 0;
       for(int g = 0; g <=u+1; g+=2, h++){
            if(!arr[h] == arr[u-h-1]);

            else
                y++;
       }

        x+=y/h;
    }

    return x;

}

int main(){

    int a;
    scanf("%d ",&a);
    int results[a];

    for(int i = 0; i < a; i++){

        int len;
        scanf("%d ",&len);
        char pali[len];
        scanf("%s",pali);

        results[i] = stillPalindrom(pali, len);

    }

    for(int m = 0; m < a; m++)
        printf("%d\n",results[m]);


    return 0;

}
