//
// Created by hsl on 2022/6/11.
//

#include "T1.h"
#include <iostream>
namespace T220611 {
    T1::T1() {
        int n = 5;
        int w[] = {3,2,4,4,5};
        int s[] = {4,3,5,2,1};

        int *inti = huowu(n,w,s);

        for(int i = 0;i<n;i++){
            std::cout << inti[i]<< std::endl;
        }
    }
    int* T1::huowu(int n,int *w,int* s){

        int Temp = 0;
        w[s[0]-1] = 0;

        for(int i = 1;i<n;i++){
            int T = 0;
            for(int j=0;j<n;j++){
                if (w[j] != 0){
                    T += w[j];
                } else if(Temp < T){
                    Temp=T;
                    T = 0;
                } else T=0;
            }
            w[s[i]-1] = 0;
            //std::cout << Temp << std::endl;
            s[i-1] = Temp;
            Temp = 0;
        }
        return s;


    }
} // T220610