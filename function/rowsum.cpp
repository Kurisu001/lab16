#include<iostream>
#include<cstdlib>
#include<ctime>
#include<iomanip>
using namespace std;

void findRowSum(const double *dPtr,double *sumrow,int N,int M){
    int q = 0;
    sumrow[q] = 0;
    for(int i = 0; i < N*M; i++){
        sumrow[q] += dPtr[i];
        if((i%M) == (M-1)) {
            q++;
            sumrow[q] = 0;
        }
    }
}

int main(){
    double a[2][3] = {1,2,3,4,5,6};
    double sumrow[3]={};
    findRowSum(a[0],sumrow,2,3);

}