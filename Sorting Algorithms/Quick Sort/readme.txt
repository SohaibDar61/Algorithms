
>>Can we reduce the auxiliary space for function call stack? 

Ans=We can limit the auxiliary space to O(Log n). The idea is based on tail call elimination. 
As seen in the previous post, we can convert the code so that it makes one recursive call.
For example, 
in the below code, we have converted the above code to use 
a while loop and have reduced the number of recursive calls.

//===========================================//


void quickSort(int arr[], int low, int high)
{
    while (low < high)
    {
        /* pi is partitioning index, arr[p] is now
           at right place */
        int pi = partition(arr, low, high);
 
        // Separately sort elements before
        // partition and after partition
        quickSort(arr, low, pi - 1);
 
        low = pi+1;
    }
}

//==============================================//


Although we have reduced number of recursive calls, the above code can still 
use O(n) auxiliary space in worst case. In worst case, it is possible that array 
is divided in a way that the first part always has n-1 elements. 

For example, 
this may happen when last element is choses as pivot and array is sorted in increasing order. 

We can optimize the above code to make a recursive call only for the smaller part after partition. 

Further Optimization :  
//========================================//

void quickSort(int arr[], int low, int high)
{
    while (low < high)
    {
        /* pi is partitioning index, arr[p] is now
           at right place */
        int pi = partition(arr, low, high);
 
        // If left part is smaller, then recur for left
        // part and handle right part iteratively
        if (pi - low < high - pi)
        {
            quickSort(arr, low, pi - 1);
            low = pi + 1;
        }
 
        // Else recur for right part
        else
        {
            quickSort(arr, pi + 1, high);
            high = pi - 1;
        }
    }

//=============================================//

In the above code, if left part becomes smaller, then we make recursive call for left part. 
Else for the right part. In worst case (for space), when both parts are of equal sizes in 
all recursive calls, we use O(Log n) extra space. 




>>What is the average case run time complexity of Quick Sort?
Ans=The average case run time of quick sort is O(n logn) . 

This case happens when we dont exactly get evenly balanced partitions. 
We might get at worst a 3-to-1 split on either side of pivot element. 
The proof of this is quite mathematically rigorous and is out of scope of the discussion.

>>Is Quick Sort a stable algorithm?
Ans=Quick sort is not a stable algorithm because the swapping of elements is done 
according to pivot’s position (without considering their original positions). 
A sorting algorithm is said to be stable if it maintains the relative order of records in the case of equality of keys.

>>Is Quick Sort an inplace algorithm?
Ans=Quick sort is an inplace algorithm which means the numbers are all sorted within the original array itself.

>>What is Randomised Quick Sort? Why is it used?

Ans= it sometimes happens that by choosing the rightmost element at all times might result in the worst case scenario.
In such cases, choosing a random element as your pivot at each step will reduce the probability of triggering 
the worst case behavior. We will be more likely choosing pivots closer to the center of the array, 
and when this happens, the recursion branches more evenly and thus the algorithm terminates a lot faster.
The runtime complexity is expected to be O(n log n) as the selected random pivots are supposed 
to avoid the worst case behavior.


>>Why Quick Sort is better than Merge Sort?
Ans=Auxiliary Space : Quick sort is an in-place sorting algorithm whereas Merge sort uses extra space. 
In-place sorting means no additional storage space is used to perform sorting (except recursion stack). 
Merge sort requires a new temporary array to merge the sorted arrays thereby making Quick sort the better option.
Worst Cases : The worst case runtime of quick sort is O(n2) can be avoided by using randomized quicksort 
as explained in the previous point. Obtaining average case behavior by choosing random pivot element 
improves the performance and becomes as efficient as merge sort.
Cache Friendly: Quick Sort is also a cache friendly sorting algorithm as it has good locality of reference 
when used for arrays.


>>Which is faster quick sort or merge sort?
Ans=Quick sort is faster than the merge sort. Please refer the above question.

>>Where is quick sort used?
ANs=Quick sort is basically used to sort any list in fast and efficient manner. 
Since the algorithm is inplace, quick sort is used when we have restrictions in space availability too. 


#s