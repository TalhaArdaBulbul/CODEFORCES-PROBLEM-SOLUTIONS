#include <iostream>
using namespace std;

int roundDown(int h){


    int n = 1;

    for(; n < h;)
        n*=10;

    if(n>h)
        n/=10;
    return (h - n);

}

int main(){

    int x;
    cin>>x;
    int results[x];
    for(int i = 0; i < x; i++){

        int j;
        cin>>j;
        results[i] = roundDown(j);
    }

    for(int k = 0; k < x; k++)
        cout<<results[k]<<endl;

    return 0;

}
