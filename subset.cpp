/*Problem 7: There is a subset A of n positive integers and a value sum. Find whether or not 
there exists any subset of the given set, the sum of whose elements is equal to the given value 
of sum.*/
#include <stdio.h>
#include <stdbool.h>
bool isSubsetSum(int set[], int n, int sum)
{
    if (sum == 0)
        return true;
    if (n == 0)
        return false;
    if (set[n - 1] > sum)
        return isSubsetSum(set, n - 1, sum);
    return isSubsetSum(set, n - 1, sum) || isSubsetSum(set, n - 1, sum - set[n - 1]);
}
int main()
{
    int set[100], n, sum;
    printf("Enter the number of elements in the set: ");
    scanf("%d", &n);
    
    printf("Enter the elements of the set: ");
    for(int i = 0; i < n; ++i)
        scanf("%d", &set[i]);

    printf("Enter the target sum: ");
    scanf("%d", &sum);

    if (isSubsetSum(set, n, sum) == true)
        printf("Found a subset with given sum\n");
    else
        printf("No subset with given sum\n");
        
    return 0;
}
