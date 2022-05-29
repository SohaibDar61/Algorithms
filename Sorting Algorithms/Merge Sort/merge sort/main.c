/**
 * @file   main.c
 * @author Sohaib Dar
 * @brief  MERGE_SORT_Algorithms
 * @version 0.1
 * @date 2022-05-16
 */


//================================================================//
#include <stdio.h>

//================================================================//
#define MAX_SIZE_ARRAY   (6)
typedef unsigned int (uint32);
typedef unsigned char (uint8);
typedef signed char   (sint8);



//========================PROTOTYPE Section=========================//
void Merge(uint32 *Ptr_arr, uint32 Begin, uint32 Mid, uint32 end);
void Merge_Sort(uint32 *Ptr_arr, uint32 Begin, uint32 end);


void Print_MY_ARRAY(uint32 *Ptr_arr, uint32 Size_arr);
void SWAP_TWO_NUMBERS(uint32 *Ptr_Num1, uint32 *Ptr_Num2);



//========================GLOBAL Section==========================//
uint32 MY_DATA[MAX_SIZE_ARRAY] = {8, 10, 7, 4, 21, 5};
//uint32 MY_DATA[MAX_SIZE_ARRAY] = {1, 2, 3, 4, 5, 6,7};





//main
int main()
{
    Print_MY_ARRAY(MY_DATA, MAX_SIZE_ARRAY);
    printf("====================================================\n");
    Merge_Sort(MY_DATA, 0, MAX_SIZE_ARRAY-1);
    printf("====================================================\n");
    Print_MY_ARRAY(MY_DATA, MAX_SIZE_ARRAY);

}








/**
 * @brief (Merge) sort the array 
 * 
 * @param Ptr_arr pointer to an array
 * @param Begin low  --> Starting index
 * @param Mid  --> mid =  Begin + (end - Begin) / 2;
 * @param end high  --> Ending index
 * @return void None
 */
void Merge(uint32 *Ptr_arr, uint32 Begin, uint32 Mid, uint32 end)
{
    uint32 i, j, k;
    uint32 n1 = Mid - Begin + 1;
    uint32 n2 = end - Mid;
  
    /* create temp arrays */
    uint32 Left[n1], Right[n2];
  
    /* Copy data to temp arrays L[] and R[] */
    for (i = 0; i < n1; i++)
        Left[i] = Ptr_arr[Begin + i];
    for (j = 0; j < n2; j++)
        Right[j] = Ptr_arr[Mid + 1 + j];
  
    /* Merge the temp arrays back into arr[left..Right]*/
    i = 0; // Initial index of first subarray
    j = 0; // Initial index of second subarray
    k = Begin; // Initial index of merged subarray
    while (i < n1 && j < n2) {
        if (Left[i] <= Right[j]) {
            Ptr_arr[k] = Left[i];
            i++;
        }
        else {
            Ptr_arr[k] = Right[j];
            j++;
        }
        k++;
    }
  
    /* Copy the remaining elements of Left[], if there are any */
    while (i < n1) {
        Ptr_arr[k] = Left[i];
        i++;
        k++;
    }
  
    /* Copy the remaining elements of Right[], if there are any */
    while (j < n2) {
        Ptr_arr[k] = Right[j];
        j++;
        k++;
    }
}





/**
 * @brief (Merge_Sort) sort the array
 * 
 * @param Ptr_arr pointer to an array
 * @param Begin low  --> Starting index
 * @param end high  --> Ending index
 * @return void None
 */
void Merge_Sort(uint32 *Ptr_arr, uint32 Begin, uint32 end)
{
    if (Begin < end) {
        // Same as (l+r)/2, but avoids overflow for large l and h
        uint32 Mid = Begin + (end - Begin) / 2;
  
        // Sort first and second halves
        Merge_Sort(Ptr_arr, Begin, Mid);
        Merge_Sort(Ptr_arr, Mid + 1, end);
        Merge(Ptr_arr, Begin, Mid, end);
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