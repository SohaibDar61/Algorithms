#include <stdio.h>


#define MAX_SIZE_ARRAY   (7)
typedef unsigned int (uint32);
typedef unsigned char (uint8);
typedef signed char   (sint8);



//========================PROTOTYPE Section=========================//

void Recursive_Bubble_SORT(uint32 *Ptr_arr, uint32 Size_arr);
void Print_MY_ARRAY(uint32 *Ptr_arr, uint32 Size_arr);
void SWAP_TWO_NUMBERS(uint32 *Ptr_Num1, uint32 *Ptr_Num2);


//========================GLOBAL Section==========================//
uint32 MY_DATA[MAX_SIZE_ARRAY] = {8, 22, 7, 9, 31, 5, 13};





//main
int main()
{
    //sint8 flag =0;
    
    Print_MY_ARRAY(MY_DATA, MAX_SIZE_ARRAY);

    Recursive_Bubble_SORT(MY_DATA, MAX_SIZE_ARRAY);

    Print_MY_ARRAY(MY_DATA, MAX_SIZE_ARRAY);
}




/**
 * @brief (Recursive_Bubble_SORT) sort the array using Recursion Method 
 * 
 * @param Ptr_arr pointer to an array
 * @param Size_arr number of size array
 * @return NONE
 */
void Recursive_Bubble_SORT(uint32 *Ptr_arr, uint32 Size_arr)
{
    uint32 iterator_index = 0;

    if((Ptr_arr == NULL) || (Size_arr <= 1)) 
        return;
    
    else{
        for(iterator_index = 0; iterator_index < Size_arr-1; iterator_index++){
            if(Ptr_arr[iterator_index] > Ptr_arr[iterator_index + 1]){
                SWAP_TWO_NUMBERS((&Ptr_arr[iterator_index]), (&Ptr_arr[iterator_index+1]));
            }
        }
        Recursive_Bubble_SORT(Ptr_arr, Size_arr - 1);
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