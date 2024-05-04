# Algorithm Library | C++ Magicians STL Algorithm

For all those who aspire to excel in competitive programming, only having a knowledge about containers of STL is of less use till one is not aware what all STL has to offer.   
STL has an ocean of algorithms, for all < algorithm > library functions : Refer [**here**](https://www.geeksforgeeks.org/algorithms-library-c-stl/).  
Some of the most used algorithms on vectors and most useful one’s in Competitive Programming are mentioned as follows :

**Non-Manipulating Algorithms**

1.  [**sort**](https://www.geeksforgeeks.org/sort-c-stl/)**(first\_iterator, last\_iterator)** – To sort the given vector.
2.  **sort(first\_iterator, last\_iterator, greater<int>())** – To sort the given container/vector in descending order
3.  **reverse(first\_iterator, last\_iterator)** – To reverse a vector. ( if ascending -> descending  OR  if descending -> ascending)
4.  **\*max\_element (first\_iterator, last\_iterator)** – To find the maximum element of a vector.
5.  **\*min\_element (first\_iterator, last\_iterator)** – To find the minimum element of a vector.
6.  **accumulate(first\_iterator, last\_iterator, initial value of sum)** – Does the summation of vector elements

CPP
---

`#include <algorithm>`

`#include <iostream>`

`#include <vector>`

`#include <numeric> //For accumulate operation`

`using` `namespace` `std;`

`int` `main()`

`{`

    `int` `arr[] = {10, 20, 5, 23 ,42 , 15};`

    `int` `n =` `sizeof``(arr)/``sizeof``(arr[0]);`

    `vector<``int``> vect(arr, arr+n);`

    `cout <<` `"Vector is: "``;`

    `for` `(``int` `i=0; i<n; i++)`

        `cout << vect[i] <<` `" "``;`

    `sort(vect.begin(), vect.end());`

    `cout <<` `"\nVector after sorting is: "``;`

    `for` `(``int` `i=0; i<n; i++)`

       `cout << vect[i] <<` `" "``;`

      `sort(vect.begin(),vect.end(), greater<``int``>());`

    `cout <<` `"\nVector after sorting in Descending order is: "``;`

    `for` `(``int` `i=0; i<n; i++)`

       `cout << vect[i] <<` `" "``;`

    `reverse(vect.begin(), vect.end());`

    `cout <<` `"\nVector after reversing is: "``;`

    `for` `(``int` `i=0; i<n; i++)`

        `cout << vect[i] <<` `" "``;`

    `cout <<` `"\nMaximum element of vector is: "``;`

    `cout << *max_element(vect.begin(), vect.end());`

    `cout <<` `"\nMinimum element of vector is: "``;`

    `cout << *min_element(vect.begin(), vect.end());`

    `cout <<` `"\nThe summation of vector elements is: "``;`

    `cout << accumulate(vect.begin(), vect.end(), 0);`

    `return` `0;`

`}`

**Output**

```
Vector is: 10 20 5 23 42 15 
Vector after sorting is: 5 10 15 20 23 42 
Vector after sorting in Descending order is: 42 23 20 15 10 5 
Vector after reversing is: 5 10 15 20 23 42 
Maximum element of vector is: 42
Minimum element of vector is: 5
The summation of vector elements is: 115
```


       **6.count(first\_iterator, last\_iterator,x)** – To count the occurrences of x in vector.

       **7. find(first\_iterator, last\_iterator, x)** – Returns an iterator to the first occurrence of x in vector and points to last address of vector ((name\_of\_vector).end()) if element is not present in vector.  
 

CPP
---

`#include <algorithm>`

`#include <iostream>`

`#include <vector>`

`using` `namespace` `std;`

`int` `main()`

`{`

    `int` `arr[] = {10, 20, 5, 23 ,42, 20, 15};`

    `int` `n =` `sizeof``(arr)/``sizeof``(arr[0]);`

    `vector<``int``> vect(arr, arr+n);`

    `cout <<` `"Occurrences of 20 in vector : "``;`

    `cout << count(vect.begin(), vect.end(), 20);`

    `find(vect.begin(), vect.end(),5) != vect.end()?`

                         `cout <<` `"\nElement found"``:`

                     `cout <<` `"\nElement not found"``;`

    `return` `0;`

`}`

**Output**

```
Occurrences of 20 in vector : 2
Element found
```


       **8.** [**binary\_search**](https://www.geeksforgeeks.org/binary-search-algorithms-the-c-standard-template-library-stl/)**(first\_iterator, last\_iterator, x)** – Tests whether x exists in sorted vector or not.

       **9. lower\_bound(first\_iterator, last\_iterator, x)** – returns an iterator pointing to the first element in the range \[first,last) which         has a value not less than ‘x’.

       **10. upper\_bound(first\_iterator, last\_iterator, x)** – returns an iterator pointing to the first element in the range \[first,last)                  which has a value greater than ‘x’. 

C++
---

`#include <algorithm>`

`#include <iostream>`

`#include <vector>`

`using` `namespace` `std;`

`int` `main()`

`{`

    `int` `arr[] = {5, 10, 15, 20, 20, 23, 42, 45};`

    `int` `n =` `sizeof``(arr)/``sizeof``(arr[0]);`

    `vector<``int``> vect(arr, arr+n);`

    `sort(vect.begin(), vect.end());`

    `auto` `q = lower_bound(vect.begin(), vect.end(), 20);`

    `auto` `p = upper_bound(vect.begin(), vect.end(), 20);`

    `cout <<` `"The lower bound is at position: "``;`

    `cout << q-vect.begin() << endl;`

    `cout <<` `"The upper bound is at position: "``;`

    `cout << p-vect.begin() << endl;`

    `return` `0;`

`}`

**Output**

```
The lower bound is at position: 3
The upper bound is at position: 5

```


**Some Manipulating Algorithms**

1.  **arr.erase(position to be deleted)** – This erases selected element in vector and shifts and resizes the vector elements accordingly.
2.  **arr.erase(unique(arr.begin(),arr.end()),arr.end())** – This erases the duplicate occurrences in sorted vector in a single line.

C++
---

`#include <algorithm>`

`#include <bits/stdc++.h>`

`#include <iostream>`

`#include <vector>`

`using` `namespace` `std;`

`int` `main()`

`{`

    `int` `arr[] = { 5, 10, 15, 20, 20, 23, 42, 45 };`

    `int` `n =` `sizeof``(arr) /` `sizeof``(arr[0]);`

    `vector<``int``> vect(arr, arr + n);`

    `cout <<` `"Given Vector is:\n"``;`

    `for` `(``int` `i = 0; i < n; i++)`

        `cout << vect[i] <<` `" "``;`

    `vect.erase(find(vect.begin(),vect.end(),10));`

    `cout <<` `"\nVector after erasing element:\n"``;`

    `for` `(``int` `i = 0; i < vect.size(); i++)`

        `cout << vect[i] <<` `" "``;`

    `vect.erase(unique(vect.begin(), vect.end()),`

               `vect.end());`

    `cout <<` `"\nVector after removing duplicates:\n"``;`

    `for` `(``int` `i = 0; i < vect.size(); i++)`

        `cout << vect[i] <<` `" "``;`

    `return` `0;`

`}`

**Output**

```
Given Vector is:
5 10 15 20 20 23 42 45 
Vector after erasing element:
5 15 20 20 23 42 45 
Vector after removing duplicates:
5 15 20 23 42 45 
```


       **3. next\_permutation(first\_iterator, last\_iterator)** – This modified the vector to its next permutation.

       **4. prev\_permutation(first\_iterator, last\_iterator)** – This modified the vector to its previous permutation. 

CPP
---

`#include <algorithm>`

`#include <iostream>`

`#include <vector>`

`using` `namespace` `std;`

`int` `main()`

`{`

    `int` `arr[] = {5, 10, 15, 20, 20, 23, 42, 45};`

    `int` `n =` `sizeof``(arr)/``sizeof``(arr[0]);`

    `vector<``int``> vect(arr, arr+n);`

    `cout <<` `"Given Vector is:\n"``;`

    `for` `(``int` `i=0; i<n; i++)`

        `cout << vect[i] <<` `" "``;`

    `next_permutation(vect.begin(), vect.end());`

    `cout <<` `"\nVector after performing next permutation:\n"``;`

    `for` `(``int` `i=0; i<n; i++)`

        `cout << vect[i] <<` `" "``;`

    `prev_permutation(vect.begin(), vect.end());`

    `cout <<` `"\nVector after performing prev permutation:\n"``;`

    `for` `(``int` `i=0; i<n; i++)`

        `cout << vect[i] <<` `" "``;`

    `return` `0;`

`}`

**Output**

```
Given Vector is:
5 10 15 20 20 23 42 45 
Vector after performing next permutation:
5 10 15 20 20 23 45 42 
Vector after performing prev permutation:
5 10 15 20 20 23 42 45 
```


         **5. distance(first\_iterator,desired\_position)** – It returns the distance of desired position from the first iterator.This function               is very useful while finding the index. 

CPP
---

`#include <algorithm>`

`#include <iostream>`

`#include <vector>`

`using` `namespace` `std;`

`int` `main()`

`{`

    `int` `arr[] = {5, 10, 15, 20, 20, 23, 42, 45};`

    `int` `n =` `sizeof``(arr)/``sizeof``(arr[0]);`

    `vector<``int``> vect(arr, arr+n);`

    `cout <<` `"Distance between first to max element: "``;`

    `cout << distance(vect.begin(),`

                     `max_element(vect.begin(), vect.end()));`

    `return` `0;`

`}`

**Output**

```
Distance between first to max element: 7
```


More – [STL Articles](https://www.geeksforgeeks.org/tag/stl/)