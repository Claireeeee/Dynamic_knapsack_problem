# Dynamic_knapsack_problem
动态规划 背包宝石问题


//动态规划：状态和状态转移方程   子问题  递推  多项式时间复杂度   状态用于描述子问题的解   状态和状态转移方程（大问题如何依赖子问题求解？）   最终要求解的问题也是一个状态，可以从前面的状态转移到

//背包容积，宝石体积和价值，找价值最大化的装配方法

//可改进之处：1，可不可以在一开始加一个筛选，比如这里直接把体积大且平均价值小的宝石筛掉
           2,可不可以把中间结果放数组里。重复计算过程的结果可以储存?       如果体积大小重合的多，重复计算过程就多，可以加一个判断,决定是否存储中间结果     
           3，这里的宝石不能重复拿
