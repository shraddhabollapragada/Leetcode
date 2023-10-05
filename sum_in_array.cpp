#include<iostream>
#include<string>
using namespace std;

void findSum(int arr[], int N, int S)
{
    for(int i=0;i<N;i++)
    {
        cout<<i<<"th round"<<endl;
        int sum=0;
        for(int j=i; j<N+i;j++)
        {
            sum += arr[j%N];
            cout<<sum<<endl;
        if (sum == S)
        {
            cout<<"The sum is found between indices "<<i+1<<" and "<<j%N<<endl;
            break;
        }
        }
    }
}

int main()
{
    int N,S;
    cout<<"Enter the size of the array and sum"<<endl;
    cin >> N >> S;
    int array[N];
    cout<<"Enter the array elements"<<endl;
    for(int i=0;i<N;i++)
    {
        cin>>array[i];
    }
    cout<<"calling find sum"<< endl;
    findSum(array,N,S);
    return 0;

}