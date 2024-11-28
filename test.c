#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int frog_jumping_steps(int n)
{
	if (n <= 2)
		return n;
	else
		return frog_jumping_steps(n - 1) + frog_jumping_steps(n - 2);
}

int main()
{
	int n = 0;
	//输入台阶数
	scanf("%d", &n);// 1<=n<=10
	//计算有几种跳法
	int m = frog_jumping_steps(n);
	//输出
	printf("对于%d阶台阶，有%d种跳法", n, m);
	return 0;
}




int frog_jumping_steps(int n)
{
    // 动态分配内存
    int* dp = (int*)malloc((n + 1) * sizeof(int));

    // 如果内存分配失败，返回错误
    if (dp == NULL) {
        printf("Memory allocation failed!\n");
        return -1;  // 错误标志
    }

    // 初始化基本情况
    dp[1] = 1;  // 跳1阶的方式只有一种
    if (n > 1) dp[2] = 2;  // 跳2阶的方式有两种

    // 计算从3到n的跳法数
    for (int i = 3; i <= n; i++) {
        dp[i] = dp[i - 1] + dp[i - 2];  // 当前台阶的跳法 = 上一台阶 + 上两台阶
    }

    // 获取结果
    int result = dp[n];

    // 释放动态分配的内存
    free(dp);

    return result;
}

int main()
{
    int n = 0;
    // 输入台阶数
    scanf("%d", &n);  // 1 <= n <= 10
    // 计算几种跳法
    int m = frog_jumping_steps( n);
    // 输出结果
    printf("%d\n", m);
    return 0;
}



int frog_jumping_steps(int n)
{
    if (n == 1) return 1;
    if (n == 2) return 2;

    int dp[n + 1];//c99标准使用变量数组
    dp[1] = 1;
    dp[2] = 2;

    for (int i = 3; i <= n; i++) {
        dp[i] = dp[i - 1] + dp[i - 2];
    }

    return dp[n];
}

int main()
{
    int n = 0;
    // 输入台阶数
    scanf("%d", &n); // 1 <= n <= 10
    // 计算几种跳法
    int m = frog_jumping_steps(n);
    // 输出结果
    printf("%d\n", m);
    return 0;
}
