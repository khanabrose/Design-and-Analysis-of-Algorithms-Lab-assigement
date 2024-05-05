/*   Problem 5: We know that prime numbers are positive integers that have exactly two distinct 
positive divisors. Similarly, we’ll call a positive integer t Т-prime, if t has exactly three distinct 
positive divisors. You are given an array of n positive integers. For each of them determine 
whether it is Т-prime or not.   */
#include <iostream>
#include <cmath>
using namespace std;
bool isprime (int num) {
if (num < 2)
return false;
for (int i=2; i*i<= num; i++) {

if (num % i == 0)

{

return false;
}
}

return true;

}

int main() {

int numbers[]={4, 5, 9, 12, 25};

int n =sizeof(numbers)/sizeof (numbers[0]);

for (int i=0;i<n;i++)
{
     if (isprime (numbers[i]))
     {           
      cout<<"Prime :"<<numbers[i]<<endl;
      }
      else
      {

cout<<" Not Prime  :" <<numbers[i]<<endl;
} }
return 0;
}
