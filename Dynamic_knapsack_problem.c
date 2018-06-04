//
//  main.c
//  Dynamic_knapsack_problem
//
//  Created by Claire on 2018/6/4.
//  Copyright © 2018年 Claire. All rights reserved.
//

//动态规划：状态和状态转移方程   子问题  递推  多项式时间复杂度   状态用于描述子问题的解   状态和状态转移方程（大问题如何依赖子问题求解？）   最终要求解的问题也是一个状态，可以从前面的状态转移到

//背包容积，宝石体积和价值，找价值最大化的装配方法

//可改进之处：1，可不可以在一开始加一个筛选，比如这里直接把体积大且平均价值小的宝石筛掉
//         2,可不可以把中间结果放数组里。重复计算过程的结果可以储存?       如果体积大小重合的多，重复计算过程就多，可以加一个判断,决定是否存储中间结果     3，这里的宝石不能重复拿


#include <stdio.h>
#include <stdlib.h>


typedef int (*dataarray)[2] ;                                         //二维数组存储数据
int totalvalue(dataarray data,int nowjewel,int leftroom,int number);   //递归函数

int main(void){
    int data[5][2]={2,6,2,3,6,5,5,4,4,6};
    printf("%d\n",totalvalue(data,0,10,5));
}

int totalvalue(dataarray data,int nowjewel,int leftroom,int number){
    int tovalue=0;
    if (leftroom-data[nowjewel][0]<0||nowjewel>=number) {
        return 0;
    }
    else{
        int a=totalvalue(data, nowjewel+1,leftroom,number);
        int b=totalvalue(data,nowjewel+1,leftroom-data[nowjewel][0],number)+data[nowjewel][1];
        tovalue=(a>b)?a:b;
        //printf("nowjewel:%d   a:%d   b:%d\n",nowjewel,a,b);;
        return tovalue;
    }
}
