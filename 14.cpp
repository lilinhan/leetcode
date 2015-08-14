/*************************************************************************
    > File Name: 14.cpp
    > Author: lewin
    > Mail: lilinhan1303@gmail.com
    > Company:  Xiyou Linux Group
    > Created Time: 2015年08月14日 星期五 23时15分49秒
 ************************************************************************/

#include<iostream>
#include<string>
#include<cstdlib>
#include<cerrno>
#include<vector>

class Solution {
public:
    std::string longestCommonPrefix(std::vector<std::string>& strs) {
        if(strs.empty())  {return "";}
        if(1 == strs.size())  {return strs[0];}
        std::string res;
        int pos = 0;
        for( pos = 0 ; pos < strs[0].size() ; pos++ ) {
            for( int i = 1 ; i < strs.size() ; i++ )  {
                if(strs[i].size() == pos || strs[i][pos] != strs[0][pos])
                    return res;
            }
            res.push_back(strs[0][pos]);
        }
        return res;
    }
};

int main( int argc , char * argv[] )  {
    std::vector<std::string> s = {"a","b"};
    Solution a;
    std::string str = a.longestCommonPrefix(s);
    std::cout << str << std::endl;
    return EXIT_SUCCESS;
}

