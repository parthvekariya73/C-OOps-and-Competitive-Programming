#include<iostream>
using namespace std;



int main()
{
    // pointer:
    int a = 4;
    int *ptr = &a;
    cout << "The Value of A is " << *ptr << endl; 



    // New keyword; Dynamic memory use
    int *p = new int(80);
    cout << "The Value of *p is " << *p << endl; 

    int *arr = new int[3];
    arr[0] = 10;
    *(arr+1) = 20;
    arr[2] = 30;

    cout << "The Value of arr[0] is " << arr[0] << endl; 
    cout << "The Value of arr[1] is " << arr[1] << endl; 
    cout << "The Value of arr[2] is " << arr[2] << endl; 



    // Delete Keyword :
    delete []arr;
    delete p;


    return 0;
}