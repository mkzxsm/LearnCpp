#include <iostream>
using namespace std;

int function(int x, int n)
{
    if (n <= 1)
    {
        return x;
    }
    else
    {
        return x + function(x, n - 1);
    }
}

int main()
{
    int sum = 0;
    int arr[] = {-6, 25, 4, -5, 15, -7, 8, 10};
    size_t size = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 5 == 0)
        {
            sum += arr[i];
        }
    }
}
