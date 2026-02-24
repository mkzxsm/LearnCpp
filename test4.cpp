#include <iostream>
using namespace std;

int MaxIndex(int* arr, int start, int end)
{
    int maxIndex = start;
    for (int i = start; i < end; i++)
    {
        if (arr[i] > arr[maxIndex])
        {
            maxIndex = arr[i];
        }
    }
    return maxIndex;
}

int main()
{
    int n;
    cin >> n;
    int* arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int maxInd1 = MaxIndex(arr, 0, n/2);
    int maxVal1 = arr[maxInd1];
    int count1 = 0;
    for (int i = 0; i < n/2; i++)
    {
        if (arr[i]==maxVal1)
        {
            count1++;
        }
    }
    int maxInd2 = MaxIndex(arr, n/2, n);
    int maxVal2 = arr[maxInd2];
    int count2 = 0;
    for (int i = n/2; i < n; i++)
    {
        if (arr[i]==maxVal2)
        {
            count2++;
        }
    }
    cout << "Max Val 1 = " << maxVal1 << endl;
    cout << "Count 1 = " << count1 << endl;
    cout << "Max Val 2 = " << maxVal2 << endl;
    cout << "Count 2 = " << count2 << endl;

    return 0;
}