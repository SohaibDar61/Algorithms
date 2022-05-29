/**
 * @file   main.c
 * @author Sohaib Dar
 * @brief  QUICK_SORT_Algorithms
 * @version 0.1
 * @date 2022-05-16
 */


//================================================================//
#include <stdio.h>

//================================================================//
#define MAX_SIZE_ARRAY   (7)
typedef unsigned int (uint32);
typedef unsigned char (uint8);
typedef signed char   (sint8);



//========================PROTOTYPE Section=========================//
void QUICK_SORT(uint32 *Ptr_arr, uint32 start, uint32 end);
void QUICK_SORT_Optimized(uint32 *Ptr_arr, uint32 start, uint32 end);

int partition(uint32 *ptr_arr, uint32 start, uint32 end);
void Print_MY_ARRAY(uint32 *Ptr_arr, uint32 Size_arr);
void SWAP_TWO_NUMBERS(uint32 *Ptr_Num1, uint32 *Ptr_Num2);



//========================GLOBAL Section==========================//
uint32 MY_DATA[MAX_SIZE_ARRAY] = {8, 10, 57, 7, 4, 21, 5};
//uint32 MY_DATA[MAX_SIZE_ARRAY] = {1, 2, 3, 4, 5, 6,7};





//main
int main()
{
    Print_MY_ARRAY(MY_DATA, MAX_SIZE_ARRAY);
    printf("====================================================\n");
    
    QUICK_SORT_Optimized(MY_DATA,0,MAX_SIZE_ARRAY-1);
    printf("====================================================\n");
    Print_MY_ARRAY(MY_DATA, MAX_SIZE_ARRAY);

}





/**
 * @brief (partition) picks an element as pivot and partitions 
 *                    the given array around the picked pivot. 
 * 
 * @param Ptr_arr pointer to an array
 * @param start low  --> Starting index
 * @param end high  --> Ending index
 * @return void None
 */
int partition(uint32 *ptr_arr, uint32 start, uint32 end)
{
    uint32 pIndex = start;
    uint32 pivot = ptr_arr[end];
    uint32 i;
    for(i = start; i < end; i++)
    {
        if(ptr_arr[i] < pivot)
        {
            SWAP_TWO_NUMBERS(&ptr_arr[i], &ptr_arr[pIndex]);
            pIndex++;
        }
    }
    SWAP_TWO_NUMBERS(&ptr_arr[end], &ptr_arr[pIndex]);
    return pIndex;
}





/**
 * @brief (QUICK SORT) sort the array 
 * 
 * @param Ptr_arr pointer to an array
 * @param start --> Starting index
 * @param end  --> Ending index
 * @return void None
 */
void QUICK_SORT(uint32 *Ptr_arr, uint32 start, uint32 end)
{
    if(start < end)
    {
        int pIndex = partition(Ptr_arr, start, end);
        QUICK_SORT(Ptr_arr, start, pIndex-1);
        QUICK_SORT(Ptr_arr, pIndex+1, end);
    }

}





/**
 * @brief (QUICK SORT) sort the array using quick sort and optimize the solution 
 * 
 * @param Ptr_arr pointer to an array
 * @param start low  --> Starting index
 * @param end high  --> Ending index
 * @return void None
 */
void QUICK_SORT_Optimized(uint32 *Ptr_arr, uint32 start, uint32 end)
{
    if(Ptr_arr == NULL) return;

    else{
     while (start < end)
    {
        uint32 PIndex = partition(Ptr_arr, start, end);
        
        if (PIndex - start < end - PIndex)
        {
            QUICK_SORT_Optimized(Ptr_arr, start, PIndex - 1);
            start = PIndex + 1;
        }
        else
        {
            QUICK_SORT_Optimized(Ptr_arr, PIndex + 1, end);
            end = PIndex - 1;
        }
    }
    }

}



/**
 * @brief swap values of two numbers
 * 
 * @param Ptr_arr pointer to the first given number
 * @param Ptr_Num2 pointer to the second given number
 * @return NONE
 */
void SWAP_TWO_NUMBERS(uint32 *Ptr_Num1, uint32 *Ptr_Num2)
{
    uint32 temp = 0;
    temp      = *Ptr_Num1;
    *Ptr_Num1 = *Ptr_Num2;
    *Ptr_Num2 = temp;
}


/**
 * @brief Print the elemnents of array
 * 
 * @param Ptr_arr pointer to an array
 * @param Size_arr number of size array
 * @return NONE
 */
void Print_MY_ARRAY(uint32 *Ptr_arr, uint32 Size_arr)
{
    uint32 counter = 0;
    for(counter = 0; counter < Size_arr; counter++)
    {
        printf("%i \t",Ptr_arr[counter]);
    }
    printf("\n");
}