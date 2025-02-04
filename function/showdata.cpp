#include<iostream>
#include<cstdlib>
#include<ctime>
#include<iomanip>
using namespace std;

void showData(double *dPtr,int N,int M){
    cout << fixed << setprecision(2);
    for(int i = 0; i < N*M; i++){
        cout << dPtr[i];
        if((i%M) == (M-1)) cout << endl;
        else cout << " ";
    }
}

int main(){

    double a[4][3] = {1,2,3,4,5,6,7,8,9,10,11,12}; 
    showData(a[0],4,3);
}