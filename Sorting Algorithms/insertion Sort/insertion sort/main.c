/**
 * @file   main.c
 * @author Sohaib Dar
 * @brief  Selection_Sort_Algorithms
 * @version 0.1
 * @date 2022-05-16
 */

#include <stdio.h>


#define MAX_SIZE_ARRAY   (7)
typedef unsigned int (uint32);
typedef signed int   (sint32);
typedef unsigned char (uint8);
typedef signed char   (sint8);



//========================PROTOTYPE Section=========================//
void Insertion_SORT(uint32 *Ptr_arr, uint32 Size_arr);
void Print_MY_ARRAY(uint32 *Ptr_arr, uint32 Size_arr);
void SWAP_TWO_NUMBERS(uint32 *Ptr_Num1, uint32 *Ptr_Num2);


//========================GLOBAL Section==========================//
uint32 MY_DATA[MAX_SIZE_ARRAY] = {8, 10, 7, 4, 21, 5, 2};

//uint32 MY_DATA[MAX_SIZE_ARRAY] = {21, 5};





//main
int main()
{
    Print_MY_ARRAY(MY_DATA, MAX_SIZE_ARRAY);

    Insertion_SORT(MY_DATA, MAX_SIZE_ARRAY);

    Print_MY_ARRAY(MY_DATA, MAX_SIZE_ARRAY);

}





/**
 * @brief (Insertion_sort) sort the array 
 * 
 * @param Ptr_arr pointer to an array
 * @param Size_arr number of size array
 * @return NONE
 */
void Insertion_SORT(uint32 *Ptr_arr, uint32 Size_arr)
{
    uint32 IS_Iteration = 0;
    uint32 Inserted_Item = 0;
    sint32 Compared_Item_Index = 0;

    if((Ptr_arr == NULL) || (Size_arr <= 1)) return;
    
    else{
        for(IS_Iteration = 1; IS_Iteration <= Size_arr; IS_Iteration++){
        Inserted_Item = Ptr_arr[IS_Iteration];
        Compared_Item_Index = IS_Iteration - 1;

        while((Inserted_Item < Ptr_arr[Compared_Item_Index])&& (Compared_Item_Index >= 0)){
            Ptr_arr[Compared_Item_Index + 1] = Ptr_arr[Compared_Item_Index];
            Compared_Item_Index--;
        }
        Ptr_arr[Compared_Item_Index + 1] = Inserted_Item;
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