/*************************************************************************
    > File Name: editdistance.cpp
    > Author: lewin
    > Mail: lilinhan1303@gmail.com
    > Company:  Xiyou Linux Group
    > Created Time: Thu 29 Oct 2015 13:09:56 CST
 ************************************************************************/

#include<iostream>
#include<string>
#include<cstdlib>
#include<cerrno>
#include<string>

class Solution {
    public:
        int min(int a, int b) {
            return a < b ? a : b;
        }

        int minDistance(std::string &word1, std::string &word2){
            const int len1 = word1.length(), len2 = word2.length();
            std::cout << "st1 = "<<word1 << "; str2 = " << word2 << std::endl;
            int dis[len1+1][len2+1];
            for(int i = 0; i <= len2; i++)  dis[0][i] = i;
            for(int i = 0; i <= len1; i++)  dis[i][0] = i;

            for(int i = 1; i <= len1; i++)  {
                for(int j = 1; j <= len2; j++)  {
                    if(word1[i-1] == word2[j-1])  {
                        dis[i][j] = dis[i-1][j-1];
                    }else {
                        dis[i][j] = 1 + min(dis[i][j-1], min(dis[i-1][j], dis[i-1][j-1]));
                    }
                }
            }

            return dis[len1][len2];
        }
};

int main( int argc , char * argv[] )  {
    Solution s;
    std::string str1, str2;
    std::cout << "please input source string ang destine string :" << std::endl;
    std::cin >> str1 >> str2;
    int mindis = s.minDistance( str1, str2);
    std::cout << "Min Edit Distance = " << mindis << std::endl;
    return EXIT_SUCCESS;
}

