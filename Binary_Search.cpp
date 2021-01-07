#include <bits/stdc++.h>
using namespace std;

int binary(int A[], int item, int l, int u)
{
    if (l <= u)
    {
        int mid = (l + u) / 2;
        if (A[mid] == item)
            return mid;
        else if (A[mid] < item)
        {
            l = mid + 1;
        }
        else
        {
            u = mid - 1;
        }
    }
    else
    {
        return -1;
    }

    return binary(A, item, l, u);
}

int main()
{
    
    cout << "Enter the size of array\n";
    int n;
    cin >> n;
    int A[n ];
    cout << "Enter the elements of array\n";

    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    int item;
    cout << "Enter search element \n";
    cin >> item;
    int i = binary(A, item, 0, n-1);
    cout <<"element found at  "<< i+1;
    return 0;
}