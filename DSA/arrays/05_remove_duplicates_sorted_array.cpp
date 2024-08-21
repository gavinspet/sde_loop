#include <bits/stdc++.h>

using namespace std;

void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

int removeDuplicates(int nums[], int n) {
        int j = 1;

        for (int i = 1; i < n; i++) {
            if (nums[i] != nums[i - 1]) {
                nums[j] = nums[i];
                j++;
            }
        }
        return j;
    }

int main()
{

    int arr[] = {1, 2, 3, 9, -1, 3, 2, 21, -9, 0, 0};
    int n = sizeof(arr) / sizeof(int);

    print(arr, n);
    int k = removeDuplicates(arr, n);
    print(arr, k);
}