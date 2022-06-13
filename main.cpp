#include <iostream>
using namespace std;

//{8, 2,  0,  1},
//{1, 3,  10, 0},
//{9, 3,  5,  18},
//{3, 10, 15, 4}


int main(int argc, char *argv[]) {



//    double du = -a[1][0]/a[0][0];
//    double du;
//    for (int i = 0; i < 4; ++i) {
//        a[1][i] += du*a[0][i];
//    }
////0,-1,10,-2
//
//    du = -a[2][0]/a[0][0];
//    for (int i = 0; i < 4; ++i) {
//        a[2][i] += du*a[0][i];
//    }
//    du = -a[2][1]/a[1][1];
//    for (int i = 1; i < 4; ++i) {
//        a[2][i] += du*a[1][i];
//    }
//
//    du = -a[3][0]/a[0][0];
//    for (int i = 0; i < 4; ++i) {
//        a[3][i] += du*a[0][i];
//    }
//    du = -a[3][1]/a[1][1];
//    for (int i = 1; i < 4; ++i) {
//        a[3][i] += du*a[1][i];
//    }
//    du = -a[3][2]/a[2][2];
//    for (int i = 2; i < 4; ++i) {
//        a[3][i] += du*a[2][i];
//    }
//
//    double v = a[0][0] * a[1][1] * a[2][2] * a[3][3];




    double a[][4] = {
            {1,24,0,1},
            {2,3,10,10},
            {10,34,5,18},
            {5,10,15,40}
    };
    double du;
    for (int i = 1; i <= 3; ++i) {
        for (int j = 0; j < i; ++j) {
            du = -a[i][j]/a[j][j];
            for (int k = 0; k < 4; ++k) {
                a[i][k] += du*a[j][k];
            }
        }
    }


    double v2 = a[0][0] * a[1][1] * a[2][2] * a[3][3];
    cout << v2 << endl;
    return 0;
}
