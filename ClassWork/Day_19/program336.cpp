#include<iostream>
using namespace std;

int Summation(int Arr[],int iLength)
{
    int iCnt = 0, iSum = 0;
    
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        iSum = iSum + Arr[iCnt];
    }

    return iSum;
    
}

float Average(int Arr[], int iLength)
{
    int iCnt = 0, iSum = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        iSum = iSum + Arr[iCnt];
    }
    
    return ((float)iSum / (float)iLength);
} 

int main()
{
    int *ptr = NULL;
    int iSize = 0, iCnt = 0, iRet = 0;
    float fRet = 0.0f;

    cout<<"Enter number of elements: \n";
    cin>>iSize;

    //Step 1: Allocate the memory
    ptr = new int[iSize];   //internally calls malloc ->ptr = (int *)malloc(sizeof(int)*iSize);

    //Step 2: Use the Memeory

     cout<<"Enter the Elements: \n";

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        cin>>ptr[iCnt];
    }


    cout<<"Elements of the array are : \n";

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        cout<<ptr[iCnt]<<endl;
    }

    iRet = Summation(ptr, iSize);
    cout<<"Summation is : "<<iRet<<endl;

    fRet = Average(ptr, iSize);
    cout<<"Average is : "<<fRet<<endl;

    //Step 3: Free the memory
    delete []ptr;

    return EXIT_SUCCESS;
}