#include <iostream>

int main() 
{
int N;
std::cout << " Enter the value of N : ";
std::cin >> N;

int sum =0;
for(int i = 1; i<=N; ++i)
{
    sum +=i;
}
std::cout << " Sum of the series " << sum << std::endl;

return 0;
}