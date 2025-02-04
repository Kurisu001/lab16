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

void randData(double *dPtr,int N,int M){
    for(int i=0;i<N*M;i++){
    dPtr[i] = ((((double)rand()/RAND_MAX)*100)/100);
    }
}

int main(){
    double a[4][3] = {}; 
    randData(a[0],4,3);
    showData(a[0],4,3);
}