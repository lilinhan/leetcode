/*************************************************************************
    > File Name: 20.cpp
    > Author: lewin
    > Mail: lilinhan1303@gmail.com
    > Company:  Xiyou Linux Group
    > Created Time: 2015年09月11日 星期五 08时59分55秒
 ************************************************************************/

#include<iostream>
#include<string>
#include<cstdlib>
#include<cerrno>
#include<stack>

class Solution {
public:
    bool isValid(std::string s) {
        std::stack<char> Stack;
        if(s.size() % 2 == 1)  {
            return false;
        }
        for(char c : s)  {
            if(c == '(' || c == '[' || c == '{')  {
                Stack.push(c);
            }else {
                if(Stack.empty())  {
                    return false;
                }
                if( (c == ')' && Stack.top() == '(') || (c == '}' && Stack.top() == '{') || (c == ']' && Stack.top() == '[') )  {
                    Stack.pop();
                    continue;
                }
            }
        }
        return Stack.empty();
    }
};


int main( int argc , char * argv[] )  {
    Solution s;
    std::cout << s.isValid("){}")  << std::endl;
    return EXIT_SUCCESS;
}

