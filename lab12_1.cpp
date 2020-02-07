#include <iostream>
#include <cmath>
using namespace std;

void stat(const double[],int,double []);

int main()
{
    double A[] = {1.2,-3.5,6.9,7.8,12.5,-0.5};
    int N = sizeof(A)/sizeof(A[0]);
    double B[4];
    stat(A,N,B);
    cout << "Average = " << B[0];
    cout << "\nS.D. = " << B[1];
    cout << "\nMax = " << B[2];
    cout << "\nMin = " << B[3];
    return 0;
}

//Write definition of stat() here 
void stat(const double A[] ,int N,double B[]){
    B[0]=(A[0]+A[1]+A[2]+A[3]+A[4]+A[5])/N;

    double sum=0,max=A[0],min=A[0];
    for(int i=0;i<6;i++){
        sum=sum+(A[i]*A[i]);
        if(A[i]>max)
        max=A[i];
        if(A[i]<min)
        min=A[i];
    }

    B[1]=sqrt(((1/(double)N)*sum)-(B[0]*B[0]));
    B[2]=max;
    B[3]=min;

}
