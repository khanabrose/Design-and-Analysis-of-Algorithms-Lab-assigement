/* Problem 1: You are given a primitive calculator that can perform the following three 
operations with the current number ??: multiply ?? by 2, multiply ?? by 3, or add 1 to ??. Your 
goal is given a positive integer ??, find the minimum number of operations needed to obtain the 
number ?? starting from the number 1    */
#include <stdio.h>
#include <limits.h>
int min(int a, int b) {
    return a < b ? a : b;
}
int minOperationsToObtainN(int n) {
    int dp[n + 1];
    dp[1] = 0; 
    for (int i = 2; i <= n; i++) {
        dp[i] = INT_MAX; 
        if (i % 2 == 0)
            dp[i] = min(dp[i], dp[i / 2] + 1);
        if (i % 3 == 0)
            dp[i] = min(dp[i], dp[i / 3] + 1);
        dp[i] = min(dp[i], dp[i - 1] + 1);
    }

    return dp[n]; 
}

int main() {
    int n;
    printf("Enter a positive integer n: ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("Please enter a positive integer.\n");
        return 1;
    }
    int result = minOperationsToObtainN(n);
    printf("Minimum number of operations needed to obtain %d: %d\n", n, result);
    return 0;
}
