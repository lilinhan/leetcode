/*************************************************************************
    > File Name: 11.cpp
    > Author: lewin
    > Mail: lilinhan1303@gmail.com
    > Company:  Xiyou Linux Group
    > Created Time: 2015年07月17日 星期五 19时39分58秒
 ************************************************************************/

#include<iostream>
#include<string>
#include<cstdlib>
#include<cerrno>
#include<vector>

#define Min(a,b) a>b?b:a

class Solution  {
    public :
        int maxArea(std::vector<int>& height)  {
            auto p = height.begin();
            auto q = height.end()-1;
            int maxarea = 0;
            while( p != q )  {
                int minheight = Min(*q , * p);
                if( maxarea <= minheight * (q - p)) {
                    maxarea = minheight * (q - p);
                }
                if( *p > *q )  {
                    q--;
                }else if( *p < *q )  {:q
                    p++;
                }else if(*p == *q) {

                    p++;
                }
            }
        return maxarea;
        }
};

int main( int argc , char * argv[] )  {
    std::vector<int> height = {1,1};
    Solution s;
    std::cout<<s.maxArea(height);
    return EXIT_SUCCESS;
}

