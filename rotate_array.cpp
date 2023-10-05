  #include<iostream> // this is a preprocessor directive, iostream contains the declarations of the basic standard input-output library in C++, and is usually included in all C++ programs.
  #include<string> // this is a preprocessor directive, string contains the declarations of the basic standard string library in C++, and is usually included in all C++ programs.
  using namespace std; // this means that we can use names for objects and variables from the standard library like cout, cin etc without the prefix std::  (std::cout, std::cin)       

int main()
{
  int n, d;
 cout<<"Enter the size of the array and the size of the rotation"<<endl;  
 cin >> n >> d;
 int arr[n];
 int rot_arr[n];
 cout<< "Enter the array elements";
 for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  for(int i=0;i<n;i++)
  {
    rot_arr[(i+d)%n]=arr[i];
  }
  for(int i=0;i<n;i++)
  {
    cout<<rot_arr[i]<<" ";
  }
}