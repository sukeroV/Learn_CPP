//
// Created by hsl on 2022/6/11.
//

#include "T2.h"

namespace T220611 {
    T2::T2() {
        cout << "T2: " <<endl;
        string str = checkName();
        cout << str << endl;

    }

    /// 检查Name https://leetcode.cn/leetbook/read/meituan/ohsjgd/
    /// \return
    string T2::checkName() {
        string Name;
        int ii = 0;
        int jj = 0;
        cin >> Name;
        cout << Name.length() << endl;
        if(!((Name[0]>='a'&&Name[0]<= 'z' )|| (Name[0]>='A'&&Name[0]<= 'Z' ))){ cout << "Wrong" << endl; return "W";}
        cout << Name.length() << endl;

        for(int i=0;i<Name.length();i++){
            if(((Name[i]>='a'&&Name[i]<= 'z' )|| (Name[i]>='A'&&Name[i]<= 'Z' ))||(Name[i]>='0'&&Name[i]<='9')){
                if((Name[i]>='0'&&Name[i]<='9' )&& ii == 0)
                    ii = 1;
            } else{
                return "27+W";
            }
        }
        if(ii == 1) return "A";
        else return "35 + W";
    }

} // T220611