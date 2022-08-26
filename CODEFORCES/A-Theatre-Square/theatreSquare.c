#include <stdio.h>

int main(){

    int n, m, a;
    scanf("%d %d %d", &n, &m, &a);

    long long int aN, aM;
    if(n%a!=0)
        aN = ((n-n%a)+a)/a;
    else
        aN = n/a;
    if(m%a!=0)
        aM = ((m-m%a)+a)/a;
    else
        aM = m/a;

    long long int sonuc = aN*aM;
    printf("%lld", sonuc);

    return 0;

}
