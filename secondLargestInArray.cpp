#include <iostream>
using namespace std;

int main()
{
    int arr[] = {5, 7, 4, 9, 8, 2};
    int i = 0;
    int ans = -1;
    int secondLargest = 0;
    int n = 6;

    while (i < n - 1)
    {
        int j = i + 1;
        if (arr[i] > arr[j])
        {
            if (arr[i] > ans)
            {
                secondLargest=arr[j];
                ans = arr[i];
            }
           
        }
        else
        {
            if (arr[j] > ans)
            {
                secondLargest=arr[i];
                ans = arr[j];
            }
           
        }
        i++;
    }
    cout << "The second larges is : " << secondLargest << endl;
    cout << "The largest is : " << ans;
}