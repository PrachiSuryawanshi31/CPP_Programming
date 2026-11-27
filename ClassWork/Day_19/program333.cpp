#include<iostream>
using namespace std;

int main()
{
    int *ptr = NULL;
    int iSize = 0;

    cout<<"Enter number of elements: \n";
    cin>>iSize;

    //Step 1: Allocate the memory
    ptr = new int[iSize];   //internally calls malloc ->ptr = (int *)malloc(sizeof(int)*iSize);

    //Step 2: Use the Memeory

    //Step 3: Free the memory
    delete ptr;

    return EXIT_SUCCESS;
}