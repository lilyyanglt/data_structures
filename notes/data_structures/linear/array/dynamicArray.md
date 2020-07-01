# Dynamic Array
- You might sometimes know this as vectors, lists or other names in other languages, but what this is essentially is just an array but can shrink and expand in size as required (not fixed sized)
- sequential container where memory is allocated in a contiguous block


## Using Static array for implementation
- How this works under the hood is that it's using static array as the backbone 
- add element method
  - it creates a brand new array that doubles the size of the original array, then copies the content from the old array into the new and returns the new array
  - it would need to check that the original array space is exhausted first


