/*======================================================
    > File Name: dp.cpp
    > Author: lewin
    > E-mail:  
    > Other :  
    > Created Time: 2015年11月19日 星期四 22时13分28秒
 =======================================================*/

#include<stdio.h>
#include<string.h>

char num[40];

int integer(int i,int j)
{
    int  n= num[i] - '0';
    for(i = i+1;i<j;i++)
        n = n*10+(num[i]-'0');
    return n;
}

int dp(int n,int k)
{
    int max = 0;
    int tmp = 0;
    int w;
    
    if(k == 1)
        return  integer(0,n);
    
    for(w = k-1;w <= n-1;w++)
    {
        tmp = dp(w,k-1) * integer(w,n);
        if(tmp > max)
        {
            max = tmp;
        }
    }
    return max;
}

int main()
{
    int   k=0;
    scanf("%s",num);
    scanf("%d",&k);
    printf("%d\n",dp(strlen(num),k));
    return 0;
}

