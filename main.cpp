#include <iostream>
using namespace std;


int main(int argc, char *argv[]) {
    //mA nB
    int m=3,n=3;
    //scanf("m=%d,n=%d",&m,&n);
    cout << m << n << endl;
    int A[m+n],B[n];
    for (int i = 0; i < m+n; ++i) {
        A[i] = 0;
    }
    for (int i = 0; i < n; ++i) {
        B[i] = 0;
    }

    int Temp1=0;
    int Temp2;
//    cin >> Temp2;
//    cout << Temp2 << endl;
    switch (m) {
        case 1:
            scanf("%d",&A[0]);
            break;
        case 2:
            scanf("%d,%d",&A[0],&A[1]);
            break;
        case 3:
            scanf("%d,%d,%d",&A[0],&A[1],&A[2]);
            break;
        case 4:
            scanf("%d,%d,%d,%d",&A[0],&A[1],&A[2],&A[3]);
            break;
    }
    switch (n) {
        case 1:
            scanf("%d",&A[0]);
            break;
        case 2:
            scanf("%d,%d",&A[0],&A[1]);
            break;
        case 3:
            scanf("%d,%d,%d",&A[0],&A[1],&A[2]);
            break;
        case 4:
            scanf("%d,%d,%d,%d",&A[0],&A[1],&A[2],&A[3]);
            break;
    }









    return 0;
}
