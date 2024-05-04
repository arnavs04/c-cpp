# Hashing in Data Structure 

**Check [Striver's Notes](https://takeuforward.org/hashing/hashing-maps-time-complexity-collisions-division-rule-of-hashing-strivers-a2z-dsa-course/) to learn how to use practically**


****Hashing**** is a fundamental data structure that efficiently stores and retrieves data in a way that allows for quick access. It involves mapping data to a specific index in a hash table using a ****hash function**** that enables fast retrieval of information based on its key. This method is commonly used in databases, ****c****aching systems, and various programming applications to optimize search and retrieval operations.

![](https://media.geeksforgeeks.org/wp-content/uploads/20200609180838/HashingDataStructure-min.png)

Data Structures – Hashing

Table of Content

*   [What is Hashing in Data Structure?](#what-is-hashing-in-data-structure)
*   [Hash Table in Data Structure](#hash-table-in-data-structure)
*   [Hash Function](#hash-function)
*   [What is a Hash Collision?](#what-is-a-hash-collision)
*   [Collision Resolution Techniques](#collision-resolution-techniques)
*   [Applications of Hashing](#applications-of-hashing)
*   [Basics of Hashing in Data Structure](#basics-of-hashing-in-data-structure)
*   [Easy Problem on Hashing](#easy-problem-on-hashing)
*   [Medium Problem on Hashing](#medium-problem-on-hashing)
*   [Hard Problem on Hashing](#hard-problem-on-hashing)

What is Hashing in Data Structure?
----------------------------------

****Hashing**** is a technique used in data structures to store and retrieve data efficiently. It involves using a ****hash function**** to map data items to a fixed-size array which is called a ****hash table****.

****How it works:****

1.  ****Hash Function:**** You provide your data items into the hash function.
2.  ****Hash Code:**** The hash function crunches the data and give a unique hash code.
3.  ****Hash Table:**** The hash code then points you to a specific location within the hash table.

Hash Table in Data Structure
----------------------------

A ****hash table**** is also known as a hash map. It is a data structure that stores ****key-value pairs****. It uses a ****hash function**** to map ****keys**** to a fixed-size array, called a ****hash table****. This allows in faster ****search****, ****insertion****, and ****deletion**** operations.

Hash Function
-------------

The ****hash function**** is a function that takes a ****key**** and returns an ****index**** into the ****hash table****. The goal of a hash function is to distribute keys evenly across the hash table, minimizing collisions (when two keys map to the same index).

Common hash functions include:

*   ****Division Method:**** Key % Hash Table Size
*   ****Multiplication Method:**** (Key \* Constant) % Hash Table Size
*   ****Universal Hashing:**** A family of hash functions designed to minimize collisions

What is a Hash Collision?
-------------------------

A hash collision occurs when two different keys map to the same index in a hash table. This can happen even with a good hash function, especially if the hash table is full or the keys are similar.

****Causes of Hash Collisions:****

*   ****Poor Hash Function:**** A hash function that does not distribute keys evenly across the hash table can lead to more collisions.
*   ****High Load Factor:**** A high load factor (ratio of keys to hash table size) increases the probability of collisions.
*   ****Similar Keys:**** Keys that are similar in value or structure are more likely to collide.

Collision Resolution Techniques
-------------------------------

There are two types of collision resolution techniques:

1.  ****Open Addressing:****
    *   ****Linear Probing:**** Search for an empty slot sequentially
    *   ****Quadratic Probing:**** Search for an empty slot using a quadratic function
2.  ****Closed Addressing:****
    *   ****Chaining:**** Store colliding keys in a linked list or binary search tree at each index
    *   ****Cuckoo Hashing:**** Use multiple hash functions to distribute keys

Applications of Hashing
-----------------------

Hash tables are used in a wide variety of applications, including:

*   ****Databases:**** Storing and retrieving data based on unique keys
*   ****Caching:**** Storing frequently accessed data for faster retrieval
*   ****Symbol Tables:**** Mapping identifiers to their values in programming languages
*   ****Network Routing:**** Determining the best path for data packets

****Basics of Hashing in Data Structure****
-------------------------------------------

*   [Introduction to Hashing – Data Structure and Algorithm Tutorials](https://www.geeksforgeeks.org/introduction-to-hashing-data-structure-and-algorithm-tutorials/)
*   [What is Hashing?](https://www.geeksforgeeks.org/what-is-hashing/)
*   [Index Mapping (or Trivial Hashing)](https://www.geeksforgeeks.org/index-mapping-or-trivial-hashing-with-negatives-allowed/)
*   [Separate Chaining for Collision Handling](https://www.geeksforgeeks.org/hashing-set-2-separate-chaining/)
*   [Open Addressing for Collision Handling](https://www.geeksforgeeks.org/hashing-set-3-open-addressing/)
*   [Double Hashing](https://www.geeksforgeeks.org/double-hashing/)
*   [Load Factor and Rehashing](https://www.geeksforgeeks.org/load-factor-and-rehashing/)

****Easy Problem on Hashing****
-------------------------------

*   [Find whether an array is subset of another array](https://www.geeksforgeeks.org/find-whether-an-array-is-subset-of-another-array-set-1/)
*   [Union and Intersection of two linked lists](https://www.geeksforgeeks.org/union-intersection-two-linked-lists-set-3-hashing/)
*   [Given an array A\[\] and a number x, check for pair in A\[\] with sum as x](https://www.geeksforgeeks.org/write-a-c-program-that-given-a-set-a-of-n-numbers-and-another-number-x-determines-whether-or-not-there-exist-two-elements-in-s-whose-sum-is-exactly-x/)
*   [Maximum distance between two occurrences of same element in array](https://www.geeksforgeeks.org/maximum-distance-two-occurrences-element-array/)
*   [Count maximum points on same line](https://www.geeksforgeeks.org/count-maximum-points-on-same-line/)
*   [Most frequent element in an array](https://www.geeksforgeeks.org/frequent-element-array/)
*   [Find the only repetitive element between 1 to n-1](https://www.geeksforgeeks.org/find-repetitive-element-1-n-1/)
*   [How to check if two given sets are disjoint?](https://www.geeksforgeeks.org/check-two-given-sets-disjoint/)
*   [Non-overlapping sum of two sets](https://www.geeksforgeeks.org/overlapping-sum-two-array/)
*   [Check if two arrays are equal or not](https://www.geeksforgeeks.org/check-if-two-arrays-are-equal-or-not/)
*   [Find missing elements of a range](https://www.geeksforgeeks.org/find-missing-elements-of-a-range/)
*   [Minimum number of subsets with distinct elements](https://www.geeksforgeeks.org/minimum-number-subsets-distinct-elements/)
*   [Remove minimum number of elements such that no common element exist in both array](https://www.geeksforgeeks.org/remove-minimum-number-elements-no-common-element-exist-array/)
*   [Find pairs with given sum such that elements of pair are in different rows](https://www.geeksforgeeks.org/find-pairs-given-sum-elements-pair-different-rows/)
*   [Count pairs with given sum](https://www.geeksforgeeks.org/count-pairs-with-given-sum/)
*   [Count quadruples from four sorted arrays whose sum is equal to a given value x](https://www.geeksforgeeks.org/count-quadruples-four-sorted-arrays-whose-sum-equal-given-value-x/)
*   [Sort elements by frequency](https://www.geeksforgeeks.org/sort-elements-frequency-set-4-efficient-approach-using-hash/)
*   [Find all pairs (a, b) in an array such that a % b = k](https://www.geeksforgeeks.org/find-pairs-b-array-b-k/)
*   [Group words with same set of characters](https://www.geeksforgeeks.org/print-words-together-set-characters/)
*   [k-th distinct (or non-repeating) element in an array.](https://www.geeksforgeeks.org/k-th-distinct-or-non-repeating-element-in-an-array/)

****Medium Problem on Hashing****
---------------------------------

*   [Find Itinerary from a given list of tickets](https://www.geeksforgeeks.org/find-itinerary-from-a-given-list-of-tickets/)
*   [Find number of Employees Under every Employee](https://www.geeksforgeeks.org/find-number-of-employees-under-every-manager/)
*   [Longest subarray with sum divisible by k](https://www.geeksforgeeks.org/longest-subarray-sum-divisible-k/)
*   [Find the largest subarray with 0 sum](https://www.geeksforgeeks.org/find-the-largest-subarray-with-0-sum/)
*   [Longest Increasing consecutive subsequence](https://www.geeksforgeeks.org/longest-increasing-consecutive-subsequence/)
*   [Count distinct elements in every window of size k](https://www.geeksforgeeks.org/count-distinct-elements-in-every-window-of-size-k/)
*   [Design a data structure that supports insert, delete, search and getRandom in constant time](https://www.geeksforgeeks.org/design-a-data-structure-that-supports-insert-delete-search-and-getrandom-in-constant-time/)
*   [Find subarray with given sum | Set 2 (Handles Negative Numbers)](https://www.geeksforgeeks.org/find-subarray-with-given-sum-in-array-of-integers/)
*   [Implementing our Own Hash Table with Separate Chaining in Java](https://www.geeksforgeeks.org/implementing-our-own-hash-table-with-separate-chaining-in-java/)
*   [Implementing own Hash Table with Open Addressing Linear Probing in C++](https://www.geeksforgeeks.org/implementing-hash-table-open-addressing-linear-probing-cpp/)
*   [Minimum insertions to form a palindrome with permutations allowed](https://www.geeksforgeeks.org/minimum-insertions-to-form-a-palindrome-with-permutations-allowed/)
*   [Maximum possible difference of two subsets of an array](https://www.geeksforgeeks.org/maximum-possible-difference-two-subsets-array/)
*   [Sorting using trivial hash function](https://www.geeksforgeeks.org/sorting-using-trivial-hash-function/)
*   [Smallest subarray with k distinct numbers](https://www.geeksforgeeks.org/smallest-subarray-k-distinct-numbers/)

****Hard Problem on Hashing****
-------------------------------

*   [Clone a Binary Tree with Random Pointers](https://www.geeksforgeeks.org/clone-binary-tree-random-pointers/)
*   [Largest subarray with equal number of 0s and 1s](https://www.geeksforgeeks.org/largest-subarray-with-equal-number-of-0s-and-1s/)
*   [All unique triplets that sum up to a given value](https://www.geeksforgeeks.org/unique-triplets-sum-given-value/)
*   [Palindrome Substring Queries](https://www.geeksforgeeks.org/palindrome-substring-queries/)
*   [Range Queries for Frequencies of array elements](https://www.geeksforgeeks.org/range-queries-for-frequencies-of-array-elements/)
*   [Elements to be added so that all elements of a range are present in array](https://www.geeksforgeeks.org/elements-to-be-added-so-that-all-elements-of-a-range-are-present-in-array/)
*   [Cuckoo Hashing – Worst case O(1) Lookup!](https://www.geeksforgeeks.org/cuckoo-hashing/)
*   [Count subarrays having total distinct elements same as original array](https://www.geeksforgeeks.org/count-subarrays-total-distinct-elements-original-array/)
*   [Maximum array from two given arrays keeping order same](https://www.geeksforgeeks.org/maximum-array-from-two-given-arrays-keeping-order-same/)
*   [Find Sum of all unique sub-array sum for a given array.](https://www.geeksforgeeks.org/find-sum-unique-sub-array-sum-given-array/)
*   [Recaman’s sequence](https://www.geeksforgeeks.org/recamans-sequence/)
*   [Length of longest strict bitonic subsequence](https://www.geeksforgeeks.org/length-longest-strict-bitonic-subsequence/)
*   [Find All Duplicate Subtrees](https://www.geeksforgeeks.org/find-duplicate-subtrees/)
*   [Find if there is a rectangle in binary matrix with corners as 1](https://www.geeksforgeeks.org/find-rectangle-binary-matrix-corners-1/)

****Quick Links :****

*   [‘Practice Problems’ on Hashing](https://practice.geeksforgeeks.org/topics/hashing/)
*   [Top 20 Hashing Technique based Interview Questions](https://www.geeksforgeeks.org/top-20-hashing-technique-based-interview-questions/)
*   [‘Quizzes’ on Hashing](https://www.geeksforgeeks.org/data-structure-gq/top-mcqs-on-hash-data-strcuture-with-answers/)
*   [‘Videos’ on Hashing](https://www.youtube.com/playlist?list=PLqM7alHXFySGwXaessYMemAnITqlZdZVE)

****Recommended:****

*   [****Learn Data Structure and Algorithms | DSA Tutorial****](https://www.geeksforgeeks.org/learn-data-structures-and-algorithms-dsa-tutorial?utm_source=Website&utm_medium=Landing+Page+Click&utm_campaign=DSA+Page+Tracker&utm_id=DSA-Page-Tracker&utm_term=DSA+Page+Promo&utm_content=Course+Page)