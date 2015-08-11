/*************************************************************************
    > File Name: 12.cpp
    > Author: lewin
    > Mail: lilinhan1303@gmail.com
    > Company:  Xiyou Linux Group
    > Created Time: 2015年08月11日 星期二 21时02分22秒
 ************************************************************************/

#include<iostream>
#include<string>
#include<cstdlib>
#include<cerrno>
#include<map>

class Solution {
public:
    std::string intToRoman(int num) {
        std::string result;
        std::map<int , std::string> keyvalue = {{1000,"M"},{900,"CM"},{500,"D"},{400,"CD"},{100,"C"},{90,"XC"},{50,"L"},{40,"XL"},{10,"X"},{9,"IX"},{5,"V"},{4,"IV"},{1,"I"}};

        for( auto it = keyvalue.rbegin() ; it != keyvalue.rend() ; it++ )  {
            if( num >= it->first )  {
                while( num >= it->first )  {
                    num -= it->first;
                    result += it->second;
                }
            }
        }
        return result;
    }
};

int main( int argc , char * argv[] )  {
    Solution s;
    std::string str = s.intToRoman(4);
    std::cout << str << std::endl;
    return EXIT_SUCCESS;
}

