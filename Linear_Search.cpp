#include<bits/stdc++.h>
using namespace std;

int search(int A[],int item,int index,int n)
{
    if(index==n)
    return -1;
    else if(A[index]==item)
    return index; 
    return search(A,item,index+1,n);   
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
int i=search(A,item,0,n-1);
cout<<"element found at "<<i+1;
    return 0;
}

