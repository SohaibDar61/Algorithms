Time Complexity: O(N2)
Auxiliary Space: O(1)

Worst Case Analysis for Bubble Sort:
The worst-case condition for bubble sort occurs when elements of the array are arranged in decreasing order.
In the worst case, the total number of iterations or passes required to sort a given array is (n-1). 
where ‘n’ is a number of elements present in the array.

  At pass 1 :  Number of comparisons = (n-1)
                     Number of swaps = (n-1)

  At pass 2 :  Number of comparisons = (n-2)
                     Number of swaps = (n-2)

  At pass 3 :  Number of comparisons = (n-3)
                    Number of swaps = (n-3)
                              .
                              .
                              .
  At pass n-1 :  Number of comparisons = 1
                        Number of swaps = 1

Now , calculating total number of comparison required to sort the array
= (n-1) + (n-2) +  (n-3) + . . . 2 + 1
= (n-1)*(n-1+1)/2  { by using sum of N natural Number formula }
= n (n-1)/2    

For Worst case:

Total number of swaps = Total number of comparison
Total number of comparison (Worst case) = n(n-1)/2
Total number of swaps (Worst case) = n(n-1)/2

Worst and Average Case Time Complexity: O(N2). The worst case occurs when an array is reverse sorted.

Best Case Time Complexity: O(N). The best case occurs when an array is already sorted.
The bubble sort is at its best if the input data is sorted. i.e. If the input data is sorted in the same order as expected output. 
This can be achieved by using one boolean variable. 
The boolean variable is used to check whether the values are swapped at least once in the inner loop


Auxiliary Space: O(1)

What is the Boundary Case for Bubble sort? 
Bubble sort takes minimum time (Order of n) when elements are already sorted. 
Hence it is best to check if the array is already sorted or not beforehand, to avoid O(N2) time complexity.

Does sorting happens in place in Bubble sort?
Yes, Bubble sort performs swapping of adjacent pairs without use of any major data structure. 
Hence Bubble sort algorithm is an in-place algorithm.

Is Bubble sort algorithm stable?
Yes, bubble sort algorithm is stable.

Where is Bubble sort algorithm used?
Due to its simplicity, bubble sort is often used to introduce the concept of a sorting algorithm. 
In computer graphics, it is popular for its capability to detect a very small error (like a swap of 
just two elements) in almost-sorted arrays and fix it with just linear complexity (2n). 

For example, it is used in a polygon filling algorithm, where bounding lines are sorted by their x coordinate 
at a specific scan line (a line parallel to x-axis) and with incrementing y their order changes 
(two elements are swapped) only at intersections of two lines (Source: Wikipedia)





