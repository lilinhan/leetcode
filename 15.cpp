/**************************************************************************
> File Name: 15.cpp
> Author: lewin
> Mail: lilinhan1303@gmail.com
> Company:  Xiyou Linux Group
> Created Time: 2015年08月17日 星期一 19时49分57秒
************************************************************************/

#include<iostream>
#include<string>
#include<cstdlib>
#include<cerrno>
#include<vector>
#include<set>
#include<algorithm>

class Solution {
    public:
        std::vector<std::vector<int>> threeSum(std::vector<int>& nums) {
            std::vector<std::vector<int>> res;
            std::vector<int>  temp;
            if(nums.size() <  3 )  {
                return res;
            }

            std::sort(nums.begin() , nums.end());
            for(auto it = nums.begin() ; it != nums.end() ; it++)  {
                if(*it > 0) {
                    break;
                }
                if( it==nums.begin()+1 && *it == *(it-1))  {
                    continue;
                }
                auto i = it+1 , j = nums.end() - 1;
                while( i < j ) {
                    if((*it + *i + *j) < 0)  {
                        i++;
                    }else if((*it + *i + *j) > 0 )  {
                        j--;
                    }else {
                        temp.push_back(*it);
                        temp.push_back(*i);
                        temp.push_back(*j);

                        res.push_back(temp);
                        temp.clear();
                        j--;
                        i++;
                        /*while( i < j && (*i) == *(i-1)) {
                            i++;
                        }
                        while( i < j && (*j) == *(j+1))  {
                            j--;
                        }*/
                    }
                }
            }
            return res;
        }
};

int main( int argc , char * argv[] )  {
    Solution s;
    std::vector<int>  num = {7,-1,14,-12,-8,7,2,-15,8,8,-8,-14,-4,-5,7,9,11,-4,-15,-6,1,-14,4,3,10,-5,2,1,6,11,2,-2,-5,-7,-6,2,-15,11,-6,8,-4,2,1,-1,4,-6,-15,1,5,-15,10,14,9,-8,-6,4,-6,11,12,-15,7,-1,-9,9,-1,0,-4,-1,-12,-2,14,-9,7,0,-3,-4,1,-2,12,14,-10,0,5,14,-1,14,3,8,10,-8,8,-5,-2,6,-11,12,13,-7,-12,8,6,-13,14,-2,-5,-11,1,3,-6};
    std::vector<std::vector<int>> result = s.threeSum(num);

    for(auto it = result.begin() ; it != result.end() ; ++it)  {
        for(auto itt = (*it).begin() ; itt != (*it).end() ; ++itt )  {
            std::cout << *itt << "  ";
        }
        std::cout << std::endl;
    }

    return EXIT_SUCCESS;
}

