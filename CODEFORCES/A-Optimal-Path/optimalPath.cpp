#include <iostream>

long long int optimalPath(int a, int b){

    long long int sum = 0;
    int h = 1, n = 1;

    for(;n < b; n++)
        sum += (h-1)*b+n;

    for(;h <= a; h++)
        sum += (h-1)*b+n;

    return sum;
}

int main(){

    int x;
    std::cin>>x;
    long long int arr[x];
    for(int i = 0; i < x; i++){

        long long int y,z;
        std::cin>>y>>z;
        arr[i] = optimalPath(y,z);

    }
    for(int j = 0; j < x; j++)
        std::cout<<arr[j]<<std::endl;

    return 0;
}
