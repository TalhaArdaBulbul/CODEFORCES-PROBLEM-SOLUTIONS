#include <stdio.h>
#include <math.h>
int main(){

    int x;
    scanf("%d ", &x);

    int sum = 0;
    int loop = 1;
    for(int i = 2; i < x; i++){
        int b=x;
        int subTotal = 0;
        int j = 0;
        convertToBase:
            for(j = b; pow(i,j) > b; j--);
            int a = pow(i,j);
            b-=a;
            subTotal++;
            if(!(b<i))
               goto convertToBase;
            else
                sum+=b+subTotal;
    }
    int c = x - 2;
    int gcd=0;
    while(loop){
        if(sum%loop==0 && c%loop==0)
            gcd = loop;
        loop++;
        if(loop>c)
            loop=0;
    }
    sum/=gcd, c/=gcd;
    printf("%d/%d\n", sum, c);
    return 0;


}
