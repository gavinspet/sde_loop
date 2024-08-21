#include <bits/stdc++.h>

using namespace std;

int main()
{

    int arr[] = {1, 2, 3, 9, -1, 3, 2, 21, -9, 0, 0};

    int n = sizeof(arr) / sizeof(int);

    int mini, maxa;
    mini = maxa = arr[0];
    for (int i = 1; i < n; i++)
    {
        mini = min(mini, arr[i]);
        maxa = max(maxa, arr[i]);
    }

    cout << "max element is: " << maxa << endl;
    cout << "min element is: " << mini << endl;
}