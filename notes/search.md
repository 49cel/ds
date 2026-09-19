# searching algorithms

- - -

### linear search

- the idea here is simple, you check the elements one by one in order from the first. if the element equals the key, you stop and report its index, if you run out of elements and find no match, you report that it isn't present in the array

### binary search

- the idea here is simple, note that this requires the array to be sorted beforehand
- once it is sorted, you look at the middle element of the array
    1. if it is equal to the key, you're done
    2. if the key is smaller, the answer can only be in the left half of the array
    3. if they key is bigger, the answer can only be in the right half of the array
- repeat it until you've found the element you're looking for
