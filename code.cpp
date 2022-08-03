#include <iostream>
using namespace std;

int findMin(int[],int);
int findMax(int[],int);
int main()
{
    const int size = 10;
    int number[10] = {21,25,89,83,67,81,52,100,147,10};
    cout<<"Max number in the array is: "<<findMax(number,size)<<endl;
    cout<<"Min number in the array is: "<<findMin(number,size)<<endl;
    return 0;
}
int findMin(int array[],int size)
{
    int min = 0;
    min = array[0];
    for (int i = 0; i < size; i++)
    {
        if (min > array[i])
        {
            min = array[i];
        }
    }
return min;
    
}
int findMax(int array[],int size)
{
    int max = 0;
    max = array[0];
    for (int i = 0; i < size; i++)
    {
        if (max < array[i])
        {
            max = array[i];
        }
    }
return max;
    
}
