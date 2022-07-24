#include <iostream>
using namespace std;


int beatTheOdds(int* ptr, int len){

    int e = 0, o = 0;

    for(int i = 0; i < len; i++)
        ptr[i]%2?o++:e++;

    if(e <= o)
        return e;
    else
        return o;


}


int main(){

    int x;
    cin>>x;

    int results[x];

    for(int i = 0; i < x; i++){

        int y;
        cin>>y;

        int arr[y];
        for(int j = 0; j < y; j++)
            cin>>arr[j];

        results[i] = beatTheOdds(arr, y);

    }

    for(int k = 0; k < x; k++)
        cout<<results[k]<<endl;

    return 0;
}
