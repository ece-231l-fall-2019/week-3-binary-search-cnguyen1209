## Assignment 3

### Linear Search and Binary Search

A linear search is a method for finding an element within a list. It sequentially checks each element of the list until a match is found or the whole list has been searched.
Advantage of linear search:

- very simplicity

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

---------------------------------------------------

| Search Method | Values Found | Time (in seconds) |

| ------------- | ------------ | ----------------- |

|Linear Search (no pointers) | 237 | 1.58432s |

|Linear Search (with pointers) | 237 | 1.24938s |

|Binary Search (no pointers) | 237 | 0.000352835s |

|Binary Search (with pointers) | 237 | 0.00025769s |

---------------------------------------------------

#### The code is run with optimizations

| Search Method | Values Found | Time (in seconds) |

| ------------- | ------------ | ----------------- |

|Linear Search (no pointers) | 237 | 0.947122s |

|Linear Search (with pointers) | 237 | 0.698641s |

|Binary Search (no pointers) | 237 | 0.00027816s |

|Binary Search (with pointers) | 237 | 0.0002238876s |


