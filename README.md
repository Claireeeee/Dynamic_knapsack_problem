# Dynamic_knapsack_problem

动态规划 背包宝石问题


//动态规划：状态和状态转移方程   子问题  递推  多项式时间复杂度   状态用于描述子问题的解   状态和状态转移方程（大问题如何依赖子问题求解？）   最终要求解的问题也是一个状态，可以从前面的状态转移到

//假设山洞里共有a,b,c,d ,e这5件宝物（不是5种宝物），它们的重量分别是2,2,6,5,4，它们的价值分别是6,3,5,4,6，现在给你个承重为10的背包, 怎么装背包，可以才能带走最多的财富。
//背包容积，宝石体积和价值，找价值最大化的装配方法

//规模线性减小的递归复杂度是指数级的，不能用。之前的最佳期望就是。可以通过循环存储数据后调用，避免递归。从底部开始搭建要用的数据数组，而不是直接从顶部调用
