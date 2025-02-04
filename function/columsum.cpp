#include<iostream>
#include<cstdlib>
#include<ctime>
#include<iomanip>
using namespace std;

void findColSum(const double *dPtr,double *sumcol,int N,int M){
    for(int i = 0; i < M; i++){
        sumcol[i] = 0;
        for(int j=0; j < N;j++){
            sumcol[i] += dPtr[(j*M)+i];
        }
        }
}

int main(){
    double a[2][3] = {1,2,3,4,5,6};
    double sumcol[3]={};
    findColSum(a[0],sumcol,2,3);

}