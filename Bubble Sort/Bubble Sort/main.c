/**
 * @file   main.c
 * @author Sohaib Dar
 * @brief  Bubble_SORT_Algorithms
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
sint8 Bubble_SORT(uint32 *Ptr_arr, uint32 Size_arr);
void Print_MY_ARRAY(uint32 *Ptr_arr, uint32 Size_arr);
void SWAP_TWO_NUMBERS(uint32 *Ptr_Num1, uint32 *Ptr_Num2);
void Bubble_SORT_Test(uint32 *Ptr_arr, uint32 Size_arr);


//========================GLOBAL Section==========================//
//uint32 MY_DATA[MAX_SIZE_ARRAY] = {8, 10, 7, 4, 21, 5, 2};
uint32 MY_DATA[MAX_SIZE_ARRAY] = {1, 2, 3, 4, 5, 6,7};





//main
int main()
{
    sint8 flag =0;
    
    Print_MY_ARRAY(MY_DATA, MAX_SIZE_ARRAY);
    printf("====================================================\n");
    flag = Bubble_SORT(MY_DATA, MAX_SIZE_ARRAY);
    if(flag == -1) printf("the Array is already sorted \n");
    if(flag ==  0) printf("Error of the inputs parameters\n");
    if(flag ==  1) printf("The Array is sorted  using Bubble sort \n"); 
    printf("====================================================\n");
    Print_MY_ARRAY(MY_DATA, MAX_SIZE_ARRAY);

}







/**
 * @brief (Bubble sort) sort the array 
 * 
 * @param Ptr_arr pointer to an array
 * @param Size_arr number of elements array
 * @return sint8 return value
 */
sint8 Bubble_SORT(uint32 *Ptr_arr, uint32 Size_arr)
{
    uint32 iterator_index = 0;
    uint32 iterator_adjacent = 0;
    uint8 flag_swap = 0;
    sint8 ret_state = 1;

    if((Ptr_arr == NULL) || (Size_arr <= 1)) 
        ret_state = 0;
    else{
        for(iterator_index = 0; iterator_index < MAX_SIZE_ARRAY -1; iterator_index++){   
            for( iterator_adjacent = 0; iterator_adjacent < MAX_SIZE_ARRAY - iterator_index - 1; iterator_adjacent++){
                if(Ptr_arr[iterator_adjacent] > Ptr_arr[iterator_adjacent + 1]){
                    SWAP_TWO_NUMBERS((&Ptr_arr[iterator_adjacent]), (&Ptr_arr[iterator_adjacent + 1]));
                    flag_swap = 1; 
                }
        }
        if(flag_swap == 0) { ret_state = -1; break; }
    }
  }
  return ret_state;
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