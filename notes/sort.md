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

- think of this as splitting an array into two zones 
    for example: if we have an array [3, 5, 2, 4]
    
    let [3] be the left zone and [5, 2, 4] be the right zone
    
    every round we take the first number of the right zone and put it in the correct place in the left zone, the left zone grows by one each round
- let's see an example using the same array [3, 5, 2, 4]:

    round 1:

    ```
    array: 3 5 2 4
    compare with 3: is 3 bigger than 5? no -> stop
    key goes right after position 0, which is position 1 (where it already was)
    array: 3 5 2 4          left zone is now 3 5
    ```

    round 2:

    ```
    array: 3 5 2 4
    compare with 5 (j=1): is 5 bigger than 2? yes -> copy 5 one step right
    array: 3 5 5 4          (the old 2 is gone from the array, but it is saved in key)
    compare with 3 (j=0): is 3 bigger than 2? yes -> copy 3 one step right
    array: 3 3 5 4
    j is now -1, nothing left to look at -> stop
    key goes at position j+1 = 0
    array: 2 3 5 4          left zone is now 2 3 5
    ```

    round 3: 

    ```
    array: 2 3 5 4
    compare with 5 (j=2): is 5 bigger than 4? yes -> copy 5 one step right
    array: 2 3 5 5
    compare with 3 (j=1): is 3 bigger than 4? no -> stop
    key goes at position j+1 = 2
    array: 2 3 4 5          done
    ```

### merge sort

- 

