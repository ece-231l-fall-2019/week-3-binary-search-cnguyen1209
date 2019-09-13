## Assignment 3

### Linear Search and Binary Search

A linear search is a method for finding an element within a list. It sequentially checks each element of the list until a match is found or the whole list has been searched.

Advantage of linear search:

- Very simplicity

- It can operate sort and unsort array

Disadvantage of linear search:

- Time taken to search elements keep increasing as the number of elements are increased.


Binary search is a search algorithm that finds the position of a target value within a sorted array.
Binary search compares the target value to the middle element of the array.
If they are not equal, the half in which the target cannot lie is eliminated and the search continues on the remaining half, again taking the middle element to compare to the target value, and repeating this until the target value is found.

Advantage of binary search:

- Search is done to either half of the given list

- Perform ordering comparisons

Disadvantage of binary search:

- Require sorted list

- Overkill for very small numbers of elements


### Difference in execution time of linear vs. binary searches:

#### The code is run with debugging symbols -g

| Algorithm | Time (seconds) |
| --------- | -------------- |
| Linear Search (no pointers) | 1.58432s |
| Linear Search (pointers) | 1.24938s |
| Binary Search (no pointers) | 0.000352835s |
| Binary Search (pointers) | 0.00025769s |
#### The code is run with optimizations

| Algorithm | Time (seconds) |
| --------- | -------------- |
| Linear Search (no pointers) | 0.947122s |
| Linear Search (pointers) | 0.698641s |
| Binary Search (no pointers) | 0.00027816s |
| Binary Search (pointers) | 0.0002238876s |

#### Conclusion

Comparing between Linear Search and Binary Search, Binary Search always works faster because the Search is done to either half of the given list.
Generally, functions that use pointers will always be faster.
Because when using the cursor, the function does not have to make a copy of each parameter and when it needs to change, it only needs to change the value stored at the address.
Besides, The code which is run with optimizations is faster thatn the code is run with debugging symbols -g.
The optimizations rearrange and execute the program in a more logical way with the computer, which makes the algorithm faster to handle.
