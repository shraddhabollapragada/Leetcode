#include<iostream>
#include<cstdio>
using namespace std;
void fillArray(int** arr, int mid_val, int val, int size)
{
    arr[mid_val][mid_val]=val;
    for(int i=mid_val;i<size/2+1;i++)
    {
        if(arr[mid_val][i]==-1)
        {
        arr[mid_val][i]=val;
        }
        if(arr[i][mid_val]==-1)
        {
        arr[i][mid_val]=val;
        }
    }
}

int main()
{
    int n=0; int size=0;
    int val=1;
    cout<<"Enter a number" <<endl;
    cin >> n ;
    size= 2*n-1;
    int** arr = new int*[size];
    for (int i = 0; i < size; i++) {
        arr[i] = new int[size];
    }

    // Initialize the array
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            arr[i][j] = -1;
        }
    }
    
    int mid_val= size/2;

    while((mid_val>=0))
    {
        fillArray(arr,mid_val,val,size);
        mid_val=mid_val-1;
        val=val+1;
    }
    
    //printing the array
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size;j++)
        {
            if(arr[i][j]==-1)
            {
                // cout<<"imhere"<<endl;
                arr[i][j]=arr[size-i-1][size-j-1];
            }
            if(arr[i][j]==-1)
            {
                // cout<<"imhere"<<endl;
                arr[i][j]=arr[i][size-j-1];
            }
             cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

}