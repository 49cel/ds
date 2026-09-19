# sorting algorithms 

- - -

### bubble sort

- the goal here is to rearrange an array so that it goes from smallest to largest elements, i.e for example [5, 3, 4, 1] becomes [1, 3, 4, 5] 
- the positions start from 0, so an array with `n` elements has valid positions from `0` to `n-1`, if `j` is a position then `j+1` will be the right-hand neighbour
- the logic is simple, look at two neighbours, if the left one is bigger then they are in the wrong order, so swap them

### selection sort

- the idea here is to look through the unsorted part, pick the smallest value and then put it at the front of the part, then repeat on whatever remains
- start by assuming the first unsorted position is the smallest, then scan the rest and update your guess whenever you see something smaller. remember the position of the smallest value so far, not the value itself

### insertion sort

- 
