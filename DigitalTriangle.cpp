/*************************************************************************
    > File Name: DigitalTriangle.cpp
    > Author: lewin
    > Mail: lilinhan1303@gmail.com
    > Company:  Xiyou Linux Group
    > Created Time: Thu 12 Nov 2015 16:12:49 CST
 ************************************************************************/

#include<iostream>
#include<string>
#include<cstdlib>
#include<cerrno>
#include<fstream>
#include<stdlib.h>

class Solution {
    public:
        int resolvearry[100][100];
        int floors;
        std::string filename;
        int max;

        Solution() {
            filename = "data.text";
        }
        ~Solution() {}

        void read_data_from_file(); //read data
        void algrorithm();  // Get max
};

void Solution::read_data_from_file() {
    int temp[1000]= {0}, i = 0, pos = 1;
    std::string c;

    std::fstream f("data.text");
    while(f >> c) {
        temp[i] = atoi(c.c_str());
        ++i;
    }
    for(int i = 0 ; i < temp[0] ; ++i)  {
        for(int j = 0; j < i+1; ++ j)  {
            resolvearry[i][j] = temp[pos];
            ++pos;
        }
    }
    floors = temp[0];
    for(int i = 0; i < temp[0]; ++i) {
        for(int j = 0; j < i+1 ; ++j) {
            std::cout << resolvearry[i][j] << "  ";
        }
        std::cout << std::endl;
    }
        std::cout << std::endl;
}

void Solution::algrorithm() {
    for(int i = floors-1; i > 0; --i) {
        for(int j = 0; j < i+1; ++j) {
            if(resolvearry[i][j]+resolvearry[i-1][j] < resolvearry[i][j+1]+resolvearry[i-1][j]) {
                resolvearry[i-1][j] = resolvearry[i][j+1]+resolvearry[i-1][j];
            }else{
                resolvearry[i-1][j] = resolvearry[i][j]+resolvearry[i-1][j];
            }
        }
    }

    for(int i = 0; i < floors; ++i) {
        for(int j = 0; j < i+1; ++j) {
            std::cout << resolvearry[i][j] << "  ";
        }
        std::cout << std::endl;
    }

    std::cout << "\nMax = "<< resolvearry[0][0] << std::endl;
}

int main( int argc , char * argv[] )  {
    Solution s;
    s.read_data_from_file();
    s.algrorithm();
    return EXIT_SUCCESS;
}

