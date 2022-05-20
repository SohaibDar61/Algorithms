#include <stdio.h>

typedef unsigned int (uint32);
//==============================MACROS Section=====================================//
#define MAX_SIZE_ARRAY (10)
#define ELEMENT_NOT_FOUND (-1)
//==============================PROTOTYPE Section==================================//
uint32 Linear_Search(uint32 *Ptr_Arr, uint32 Arr_size, uint32 Data);



int main()
{
    uint32 arr[MAX_SIZE_ARRAY] = {10,44,88,77,52,36,12,90,37,100};
    uint32 result = 0;
    result = Linear_Search(arr, MAX_SIZE_ARRAY, 33);
    if(ELEMENT_NOT_FOUND == result)
    {
        printf("The required Data is not Found!! \n");
    }
    else
    {
       printf("The required Data is Found in index [%i] \n", result); 
    }
}


uint32 Linear_Search(uint32 *Ptr_Arr, uint32 Arr_size, uint32 Data)
{
    uint32 Left_index = 0;
    uint32 Right_index = Arr_size - 1;
    for(Left_index = 0; Left_index < Right_index;)
    {
        if(Data == Ptr_Arr[Left_index])
        {
            return Left_index;
        }
        else { /* Nothing */ }
        if(Data == Ptr_Arr[Right_index])
        {
            return Right_index;
        }
        else { /* Nothing */ }
         Left_index++;
         Right_index--;
    }
    return ELEMENT_NOT_FOUND;
}