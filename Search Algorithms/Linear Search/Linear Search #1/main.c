#include <stdio.h>

typedef unsigned int (uint32);

#define MAX_SIZE_ARRAY (10)
#define ERROR_INDEX (-1)


uint32 Linear_Search(uint32 *Ptr_Arr, uint32 Arr_size, uint32 Data);

int main()
{
    uint32 arr[MAX_SIZE_ARRAY] = {10,44,88,77,52,33,12,90,33,100};
    uint32 result = 0;
    result = Linear_Search(arr, MAX_SIZE_ARRAY, 100);
    if(ERROR_INDEX == result)
    {
        printf("The required Data is not exist! \n");
    }
    else
    {
       printf("The required Data is exist in index [%i] \n", result); 
    }
}


uint32 Linear_Search(uint32 *Ptr_Arr, uint32 Arr_size, uint32 Data)
{
    uint32 index = 0;
    for(index = 0; index < Arr_size; index++)
    {
        if(Data == Ptr_Arr[index])
        {
            return index;
        }
         else { /* Nothing */ }
    }
    return -1;
}