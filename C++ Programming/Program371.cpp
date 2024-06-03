#include<iostream>
using namespace std;

int main()
{
    int Size = 0, iCnt = 0;
    int *ptr = NULL;

    // Step 1 : 
    cout<<"Enter number of elements : "<<"\n";
    cin>>Size;

    // Step 2 : 
    ptr = new int[Size];

    // Step 3 : 
    cout<<"Enter the elements : "<<"\n";
    for(iCnt = 0; iCnt < Size; iCnt++)
    {
        cin>>ptr[iCnt];
    }

    // Step : 4
    // Function call

    cout<<"Elements of the array are : \n";
    for(iCnt = 0; iCnt < Size; iCnt++)
    {
        cout<<ptr[iCnt]<<"\t";
    }

    cout<<"\n";
    
    // Step 5
    delete []ptr;

    return 0;
}