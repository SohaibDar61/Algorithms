#include <stdio.h>

#define MAX_SIZE_ARRAY (10)
#define NOT_FOUND (-1)

typedef signed int (sint32);
typedef unsigned int (uint32);


//================PTOTOTYPE Section===============================//
sint32 Binary_Search(sint32 *Ptr_arr, uint32 S_index, uint32 E_index, uint32 Data);


//================GLOBAL Section===============================//
sint32 MY_DATA[MAX_SIZE_ARRAY] = {11, 22, 33, 44, 55, 66, 77, 88, 99, 100};

int main()
{
    sint32 ret = 0;
    ret = Binary_Search(MY_DATA, 0, MAX_SIZE_ARRAY - 1, 44);
    if(NOT_FOUND == ret)
    {
        printf("The element is Not Found in an Array \n");
    }
    else
    {
        printf("Index of the element = [%i]\nThe position is %i\n", ret, (ret+1));
    }
}




sint32 Binary_Search(sint32 *Ptr_arr, uint32 S_index, uint32 E_index, uint32 Data)
{
    uint32 M_index = 0;
    while(S_index <= E_index)
    {
        M_index = S_index + ((E_index - S_index) /2);
        if(Data == Ptr_arr[M_index])
        {
            return M_index;
        }
        else if (Data > Ptr_arr[M_index])
        {
            return (Binary_Search(Ptr_arr,  M_index+1, E_index, Data));
        }
        else{
            return (Binary_Search(Ptr_arr,  S_index, M_index - 1, Data));
        }
    }
    return NOT_FOUND;
}


