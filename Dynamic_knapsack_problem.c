//
//  main.c
//  Dynamic_knapsack_problem
//
//  Created by Claire on 2018/6/4.
//  Copyright © 2018年 Claire. All rights reserved.
//

//动态规划：状态和状态转移方程   子问题  递推  多项式时间复杂度   状态用于描述子问题的解   状态和状态转移方程（大问题如何依赖子问题求解？）   最终要求解的问题也是一个状态，可以从前面的状态转移到

//背包容积，宝石体积和价值，找价值最大化的装配方法

//规模线性减小的递归复杂度是指数级的，不能用。之前的最佳期望就是。可以通过循环存储数据后调用，避免递归。从底部开始搭建要用的数据数组，而不是直接从顶部调用

//用ij循环构建中间数据。因为每次需要的是小一层的i下不同的j下的最大值，所以j一定要遍历，而且原则上还要用i在二维数组中标记。实际使用中，需要的只是之前i下j下的最大值，可以考虑随着i的生长更新j下值，而不用i标记。从j的角度看，不同的i下，j是要往前调用的，如果从前往后更新，会在往前调用的时候出错，所以要从后往前更新



#include <stdio.h>
#include <stdlib.h>
#define NUMBER 5
#define VOLUME 10




int main(void){
    int data[5][2]={2,6,2,3,6,5,5,4,4,6};
    int maxvalue_under_j[VOLUME]={0,0,0,0,0,0,0,0,0,0};
    for(int i=0;i<NUMBER;i++){                                 //i放在这只是为了标示当前判断的宝石，参与存储的数组只以j为索引（标示）
        for(int j=VOLUME-1;j>=data[i][0];j--){                  //j从最大值开始遍历
            int a=maxvalue_under_j[j];
            int b=maxvalue_under_j[j-data[i][0]]+data[i][1];
            //printf("i: %d  :%d",a,b);
            maxvalue_under_j[j]=(a>b)?a:b;
        }
        
    }
    printf("%d\n",maxvalue_under_j[9]);
}

