#include <iostream>

using namespace std;

long long int theatreSquare(int j, int k, int l){

    if(l == 1) return j*k;

    long long u = l , h = l;
    for(; (int) u < j; u+=u);
    for(; (int) h < k; h+=h);

    return u/l * h/l;

}


int main(){

    int h, n, a;
    cin>>h>>n>>a;

    cout<<theatreSquare(h, n, a);

    return 0;

}
