## Using size_t

Using size_t for the loop variable i is a common practice when iterating over indices of containers like vectors. The reason is that size_t is an unsigned integer type, and it's specifically designed to represent sizes and indices of data structures.

Here's why using size_t is preferred:
---

- Compatibility and Range: 
Since size_t is unsigned, it ensures that the loop variable cannot become negative accidentally, which might lead to unexpected behavior in loop conditions.

- Matching Container Types: 
Many standard C++ container functions and member functions, such as std::vector::size(), return size_t values. Using size_t for the loop variable ensures consistency and compatibility with these types.

- Avoiding Compiler Warnings: 
Some compilers might generate warnings if you use an int for the loop variable when dealing with container sizes, as it could potentially lead to comparisons between signed and unsigned integers.

However, in practice, for relatively small vectors and simple loops, using int for the loop variable might not lead to issues. If you're confident that the loop will never iterate over negative indices and you won't encounter issues related to container sizes, using int might be acceptable.

In your case, where you're iterating over indices to access vector elements and you're not doing complex operations with the loop variable, using int should work fine. Just make sure to avoid negative values for i and be mindful of comparisons between int and size_t in your loop conditions.