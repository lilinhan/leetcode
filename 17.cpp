/*************************************************************************
    > File Name: 17.cpp
    > Author: lewin
    > Mail: lilinhan1303@gmail.com
    > Company:  Xiyou Linux Group
    > Created Time: 2015年08月30日 星期日 21时25分39秒
 ************************************************************************/

#include<iostream>
#include<string>
#include<cstdlib>
#include<cerrno>
#include<map>
#include<vector>

class Solution {
public:
    std::vector<std::string> letterCombinations(std::string digits) {
        std::map<char , std::string> map = {{'2',"abc"},{'3',"def"},{'4',"ghi"},{'5',"jkl"},{'6',"mno"},{'7',"pqrs"},{'8',"tuv"},{'9',"wxyz"}};
        std::vector<std::string> res;

        auto it1 = map.find(digits[0]);
        auto it2 = map.find(digits[1]);

        for(int i = 0 ; i < ())
        return res;
    }
};

int main( int argc , char * argv[] )  {
    Solution s;
    return EXIT_SUCCESS;
}

