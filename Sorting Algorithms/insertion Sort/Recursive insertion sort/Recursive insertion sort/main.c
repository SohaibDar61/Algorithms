/**
 * @file   main.c
 * @author Sohaib Dar
 * @brief  Recursive_Insertion_SORT_Algorithms
 * @version 0.1
 * @date 2022-05-16
 */
//================================================================//
#include <stdio.h>


//================================================================//
#define MAX_SIZE_ARRAY   (7)
typedef unsigned int (uint32);
typedef signed int   (sint32);
typedef unsigned char (uint8);
typedef signed char   (sint8);



//========================PROTOTYPE Section=========================//
void Recursive_Insertion_SORT(uint32 *Ptr_arr, uint32 Size_arr);
void Print_MY_ARRAY(uint32 *Ptr_arr, uint32 Size_arr);
void SWAP_TWO_NUMBERS(uint32 *Ptr_Num1, uint32 *Ptr_Num2);


//========================GLOBAL Section==========================//
uint32 MY_DATA[MAX_SIZE_ARRAY] = {8,66,22,10,1,3,17};






//main
int main()
{
    Print_MY_ARRAY(MY_DATA, MAX_SIZE_ARRAY);

    Recursive_Insertion_SORT(MY_DATA, MAX_SIZE_ARRAY);

    Print_MY_ARRAY(MY_DATA, MAX_SIZE_ARRAY);

}





/**
 * @brief (Recursive_Insertion_SORT) sort the array using Recursion Method
 * 
 * @param Ptr_arr pointer to an array
 * @param Size_arr number of size array
 * @return NONE
 */
void Recursive_Insertion_SORT(uint32 *Ptr_arr, uint32 Size_arr)
{
    uint32 Last_Item = 0;
    sint32 Compared_Item_Index = 0;

    if((Ptr_arr == NULL) || (Size_arr <= 1)) return;
    
    else{

        Recursive_Insertion_SORT(Ptr_arr, Size_arr - 1);
        Last_Item = Ptr_arr[Size_arr - 1];
        Compared_Item_Index = Size_arr - 2;
        
        while((Last_Item < Ptr_arr[Compared_Item_Index])&& (Compared_Item_Index >= 0)){
            Ptr_arr[Compared_Item_Index + 1] = Ptr_arr[Compared_Item_Index];
            Compared_Item_Index--;
        }
        Ptr_arr[Compared_Item_Index + 1] = Last_Item;
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