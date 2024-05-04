# C++ STL Cheat Sheet
The C++ STL Cheat Sheet provides short and concise notes on Standard Template Library (STL) in C++. Designed for programmers that want to quickly go through key STL concepts, the STL cheatsheet covers the concepts such as vectors and other containers, iterators, functors, etc., with their syntax and example.

![CPP-STL-Cheatsheet](https://media.geeksforgeeks.org/wp-content/uploads/20230619115010/CPP-STL-Cheatsheet.webp)

What is Standard Template Library(STL)?
---------------------------------------

The [****C++ Standard Template Library (STL)****](https://www.geeksforgeeks.org/the-c-standard-template-library-stl/) is a collection of generic class and function templates to provide some commonly used data structures and algorithms. It contains optimized and error-free code for useful containers such as vector, list, stack, queue, etc. It is a part of the standard library of C++ and

Components of STL
-----------------

C++ STL provides various components to make programming easier and more efficient. These components can be divided into four categories:

1.  ****Containers****
2.  ****Iterators****
3.  ****Algorithms****
4.  ****Functors****

STL Containers
--------------

The [STL containers](https://www.geeksforgeeks.org/containers-cpp-stl/) are the template classes to implement useful data structures such as dynamic arrays, hashmaps, linked lists, trees, etc. These containers allow programmers to store and manipulate data.

****The STL containers can also be divided into 4 parts which are:****

1.  Sequential Containers
2.  Container Adapters
3.  Associative Containers
4.  Unordered Containers

****1\. Sequential Containers****

> The sequential containers implement the data structures with sequential access. These include:
> 
> *   Vector
> *   List
> *   Deque
> *   Array
> *   Forward List

****2\. Container Adapters****

> The container adapters implement data structures like queues, stacks, etc by providing different interfaces for sequential containers. These include:
> 
> *   Stack
> *   Queue
> *   Priority Queue

****3\. Associative Containers****

> The associative containers are used to store ordered data that can be quickly searched using their key value. These include:
> 
> *   Set
> *   Multiset
> *   Map
> *   Multimap

****4\. Unordered Containers****

> The unordered containers are similar to associative containers except that they don’t store sorted data but still provide quick search time using key-value pairs. They are:
> 
> *   Unordered Set
> *   Unordered Multiset
> *   Unordered Map
> *   Unordered Multimap

Each container is defined inside its respective header file with the same name.

### 1.1 – STL Vector

The [vector](https://www.geeksforgeeks.org/vector-in-cpp-stl/) container provides a dynamic array. It is defined as ****std::vector**** class template inside ****<vector>**** header file.

****Vector Declaration****

```
vector <data_type> vector_name;    // 1D Vector
vector < vector<data_type> > vector_name;    // 2D Vector

```


****std::vector Member Functions****



* S. No.: 1.
  * Function: begin()
  * Description: Returns an iterator to the first element.
  * Time Complexity: O(1)
* S. No.: 2.
  * Function: end()
  * Description: Returns an iterator to the theoretical element after the last element.
  * Time Complexity: O(1)
* S. No.: 3.
  * Function: size()
  * Description: Returns the number of elements present.
  * Time Complexity: O(1)
* S. No.: 4.
  * Function: empty()
  * Description: Returns true if the vector is empty, false otherwise.
  * Time Complexity: O(1)
* S. No.: 5.
  * Function: at()
  * Description: Return the element at a particular position.
  * Time Complexity: O(1)
* S. No.: 6.
  * Function: assign()
  * Description: Assign a new value to the vector elements.
  * Time Complexity: O(n)
* S. No.: 7.
  * Function: push_back()
  * Description: Adds an element to the back of the vector.
  * Time Complexity: O(1)
* S. No.: 8.
  * Function: pop_back()
  * Description: Removes an element from the end.
  * Time Complexity: O(1)
* S. No.: 9.
  * Function: insert()
  * Description: Insert an element at the specified position.
  * Time Complexity: O(n)
* S. No.: 10.
  * Function: erase()
  * Description: Delete the elements at a specified position or range.
  * Time Complexity: O(n)
* S. No.: 11.
  * Function: clear()
  * Description: Removes all elements.
  * Time Complexity: O(n)


****Example:****

C++
---

`#include <iostream>`

`#include <vector>`

`using` `namespace` `std;`

`int` `main()`

`{`

    `vector<``int``> v1 = { 1, 2, 3, 4, 5 };`

    `vector<vector<``int``> > v2(3, vector<``int``>(3, 5));`

    `v1.push_back(6);`

    `cout <<` `"v1: "``;`

    `for` `(``int` `i = 0; i < v1.size(); i++) {`

        `cout << v1[i] <<` `" "``;`

    `}`

    `cout << endl;`

    `v1.erase(v1.begin() + 4);`

    `cout <<` `"v1: "``;`

    `for` `(``auto` `i = v1.begin(); i != v1.end(); i++) {`

        `cout << *i <<` `" "``;`

    `}`

    `cout <<` `"v2:-"` `<< endl;`

    `for` `(``auto` `i : v2) {`

        `for` `(``auto` `j : i) {`

            `cout << j <<` `" "``;`

        `}`

        `cout << endl;`

    `}`

    `return` `0;`

`}`

**Output**

```
v1: 1 2 3 4 5 6 
v1: 1 2 3 4 6 v2:-
5 5 5 
5 5 5 
5 5 5 


```


### 1.2 – STL List

The [list](https://www.geeksforgeeks.org/list-cpp-stl/) container implements the doubly linked list data structure. It is defined as ****std::list**** inside ****<list>**** header file.

****List Declaration****

```
list <data_type> list_name;


```


****std::List Member Functions****



* S. No. : 1.
  * Function: begin()
  * Description: Return the iterator to the first element.
  * Time Complexity: O(1)
* S. No. : 2.
  * Function: end()
  * Description: Returns an iterator to the theoretical element after the last element.
  * Time Complexity: O(1)
* S. No. : 3.
  * Function: size()
  * Description: Returns the number of elements in the list.
  * Time Complexity: O(1)
* S. No. : 4.
  * Function: push_back()
  * Description: Adds one element at the end of the list.
  * Time Complexity: O(1)
* S. No. : 5.
  * Function: pop_back()
  * Description: Removes a single element from the end.
  * Time Complexity: O(1)
* S. No. : 6.
  * Function: push_front()
  * Description: Adds a single element to the front of the list.
  * Time Complexity: O(1)
* S. No. : 7.
  * Function: pop_front()
  * Description: Removes a single element from the front.
  * Time Complexity: O(1)
* S. No. : 8.
  * Function: insert()
  * Description: Inserts an element at the specified position.
  * Time Complexity: O(n)
* S. No. : 9.
  * Function: erase()
  * Description: Deletes the element at the given position.
  * Time Complexity: O(n)
* S. No. : 10.
  * Function: remove()
  * Description: Removes all the copies of the given elements from the list.
  * Time Complexity: O(n)


****Example****

C++
---

`#include <iostream>`

`#include <list>`

`#include <vector>`

`using` `namespace` `std;`

`int` `main()`

`{`

    `list<``int``> l1 = { 1, 5, 9, 1, 4, 6 };`

    `vector<``char``> v = {` `'G'``,` `'e'``,` `'e'``,` `'k'``,` `'s'` `};`

    `list<``int``> l2(v.begin(), v.end());`

    `cout <<` `"First element if l1: "` `<< l1.front() << endl;`

    `l1.insert(l1.begin(), 5);`

    `l1.erase(l1.begin());`

    `cout <<` `"l1: "``;`

    `for` `(``auto` `i = l1.begin(); i != l1.end(); i++) {`

        `cout << *i <<` `" "``;`

    `}`

    `cout << endl;`

    `cout <<` `"l2: "``;`

    `for` `(``auto` `i : l2) {`

        `cout <<` `char``(i);`

    `}`

    `cout << endl;`

    `return` `0;`

`}`

**Output**

```
First element if l1: 1
l1: 1 5 9 1 4 6 
l2: Geeks


```


### 1.3 – STL Deque

The [deque](https://www.geeksforgeeks.org/deque-cpp-stl/) implements the double-ended queue which follows the FIFO mode of operation but unlike the queue, the deque can grow and shrink from both ends. It is defined as ****std::deque**** inside the ****<deque>**** header file.

****Deque Declaration****

```
deque <data_type> dequeu_name;

```


****std::deque Member Functions****



* S. No.: 1.
  * Function: begin()
  * Description: Returns iterator to the first element.
  * Time Complexity: O(1)
* S. No.: 2.
  * Function: end()
  * Description: Returns an iterator to the theoretical element after the last element.
  * Time Complexity: O(1)
* S. No.: 3.
  * Function: at()
  * Description: Access specified element.
  * Time Complexity: O(1)
* S. No.: 4.
  * Function: [ ]
  * Description: Access element at the given index.
  * Time Complexity: O(1)
* S. No.: 5.
  * Function: front()
  * Description: Returns the first element.
  * Time Complexity: O(1)
* S. No.: 6.
  * Function: back()
  * Description: Returns the last element.
  * Time Complexity: O(1)
* S. No.: 7.
  * Function: size()
  * Description: Returns the number of elements.
  * Time Complexity: O(1)
* S. No.: 8.
  * Function: push_back()
  * Description: Add the elements at the end.
  * Time Complexity: O(1)
* S. No.: 9.
  * Function: pop_back()
  * Description: Removes the elements from the end.
  * Time Complexity: O(1)
* S. No.: 10.
  * Function: push_front()
  * Description: Add the elements at the front.
  * Time Complexity: O(1)
* S. No.: 11.
  * Function: pop_front()
  * Description: Removes the element from the front.
  * Time Complexity: O(1)


****Example****

C++
---

`#include <deque>`

`#include <iostream>`

`using` `namespace` `std;`

`int` `main()`

`{`

    `deque<``int``> d = { 1, 2, 3, 4, 5 };`

    `d.push_front(d.back());`

    `d.pop_back();`

    `d.push_front(d.back());`

    `d.pop_back();`

    `for` `(``auto` `i : d) {`

        `cout << i <<` `" "``;`

    `}`

    `return` `0;`

`}`

### 1.4 – STL Stack

The [stack](https://www.geeksforgeeks.org/stack-in-cpp-stl/) is a container adaptor that operates one LIFO principle. It is defined as ****std::stack**** in ****<stack>**** header file.

****Stack Declaration****

```
stack <data_type> stack_name;

```


****std::stack Member Functions****


|S. No.|Function|Description                                         |Time Complexity|
|------|--------|----------------------------------------------------|---------------|
|1.    |empty() |Returns true if the stack is empty, false otherwise.|O(1)           |
|2.    |size()  |Returns the number of elements in the stack.        |O(1)           |
|3.    |top()   |Returns the top element.                            |O(1)           |
|4.    |push(g) |Push one element in the stack.                      |O(1)           |
|5.    |pop()   |Removes one element from the stack.                 |O(1)           |


****Example****

C++
---

`#include <bits/stdc++.h>`

`using` `namespace` `std;`

`int` `main()`

`{`

    `stack<``int``> s;`

    `for` `(``int` `i = 1; i <= 5; i++) {`

        `s.push(i);`

    `}`

    `s.push(6);`

    `cout <<` `"s.top() = "` `<< s.top() << endl;`

    `cout <<` `"s: "``;`

    `while` `(!s.empty()) {`

        `cout << s.top() <<` `" "``;`

        `s.pop();`

    `}`

    `cout <<` `"Final Size: "` `<< s.size();`

    `return` `0;`

`}`

**Output**

```
s.top() = 6
s: 6 5 4 3 2 1 Final Size: 0


```


### 1.5 – STL Queue

The [queue](https://www.geeksforgeeks.org/queue-cpp-stl/) is a container adapter that uses the FIFO mode of operation where the most recently inserted element can be accessed at last. It is defined as the ****std::queue**** class template in the ****<stack>**** header file.

****Queue Declaration****

```
queue <data_type> queue_name;

```


****std::queue Member Functions****


|S. No.|Function|Description                                         |Time Complexity|
|------|--------|----------------------------------------------------|---------------|
|1.    |empty() |Returns true if the queue is empty, otherwise false.|O(1)           |
|2.    |size()  |Returns the number of items in the queue.           |O(1)           |
|3.    |front() |Returns the front element.                          |O(1)           |
|4.    |back()  |Returns the element at the end.                     |O(1)           |
|5.    |push()  |Add an item to the queue.                           |O(1)           |
|6.    |pop()   |Removes an item from the queue.                     |O(1)           |


****Example****

C++
---

`#include <iostream>`

`#include <queue>`

`using` `namespace` `std;`

`int` `main()`

`{`

    `queue<``int``> q;`

    `for` `(``int` `i = 1; i <= 5; i++) {`

        `q.push(i);`

    `}`

    `q.push(6);`

    `cout <<` `"q.front() = "` `<< q.front() << endl;`

    `cout <<` `"q.back() = "` `<< q.back() << endl;`

    `cout <<` `"q: "``;`

    `int` `size = q.size();`

    `for` `(``int` `i = 0; i < size; i++) {`

        `cout << q.front() <<` `" "``;`

        `q.pop();`

    `}`

    `return` `0;`

`}`

**Output**

```
q.front() = 1
q.back() = 6
q: 1 2 3 4 5 6 


```


### 1.6 – STL Set

The [set](https://www.geeksforgeeks.org/set-in-cpp-stl/) is an associative container that stores unique values in sorted order, either ascending or descending. It generally implements a red-black tree as an underlying data structure. It is defined as ****std::set**** class template inside ****<set>**** header file.

> ****Note:**** To store the multiple keys, we can use the [****multiset****](https://www.geeksforgeeks.org/multiset-in-cpp-stl/) container.

****Set Declaration****

```
set <data_type> set_name;

```


****std::set Member Functions****



* S. No.: 1.
  * Function: begin()
  * Description: Returns an iterator to the first element.
  * Time Complexity: O(1)
* S. No.: 2.
  * Function: end()
  * Description: Return an iterator to the last element.
  * Time Complexity: O(1)
* S. No.: 3.
  * Function: size()
  * Description: Returns the number of elements.
  * Time Complexity: O(1)
* S. No.: 4.
  * Function: empty()
  * Description: Checks if the container is empty.
  * Time Complexity: O(1)
* S. No.: 5.
  * Function: insert()
  * Description: Inserts a single element.
  * Time Complexity: O(logn)
* S. No.: 6.
  * Function: erase()
  * Description: Removes the given element.
  * Time Complexity: O(logn)
* S. No.: 7.
  * Function: clear()
  * Description: Removes all elements.
  * Time Complexity: O(n)
* S. No.: 8.
  * Function: find()
  * Description: Returns the pointer to the given element if present, otherwise, a pointer to the end.
  * Time Complexity: O(logn)


****Example****

C++
---

`#include <iostream>`

`#include <set>`

`#include <vector>`

`using` `namespace` `std;`

`int` `main()`

`{`

    `vector<``int``> v = { 1, 5, 3, 4, 2 };`

    `set<``int``> s(v.begin(), v.end());`

    `if` `(s.find(4) == s.end()) {`

        `cout <<` `"5 not found"` `<< endl;`

    `}`

    `else` `{`

        `cout <<` `"5 found"` `<< endl;`

    `}`

    `s.insert(9);`

    `cout <<` `"s: "``;`

    `for` `(set<``int``>::iterator i = s.begin(); i != s.end();`

         `i++) {`

        `cout << *i <<` `" "``;`

    `}`

    `cout << endl;`

    `return` `0;`

`}`

**Output**

```
5 found
s: 1 2 3 4 5 9 


```


### 1.7 – STL Map

[Maps](https://www.geeksforgeeks.org/map-associative-containers-the-c-standard-template-library-stl/) are associative containers used to store the key-value pairs where each key should be unique. It generally implements a red-black tree to store data in sorted order. It is defined as ****std::map**** inside the ****<map>**** header file.

> ****Note:**** To store the multiple keys, we can use the [****multimap****](https://www.geeksforgeeks.org/multimap-associative-containers-the-c-standard-template-library-stl/) container.

****Map Declaration****

```
map <key_type, value_type> map_name;

```


****std::map Member Functions****



* S. No.: 1.
  * Function: begin()
  * Description: Returns an iterator to the first element.
  * Time Complexity: O(1)
* S. No.: 2.
  * Function: end()
  * Description: Returns an iterator to the theoretical element that follows the last element
  * Time Complexity: O(1)
* S. No.: 3.
  * Function: size()
  * Description: Returns the number of elements in the map
  * Time Complexity: O(1)
* S. No.: 4.
  * Function: insert()
  * Description: Adds a new element to the map.
  * Time Complexity: O(logn)
* S. No.: 5.
  * Function: erase(iterator)
  * Description: Removes the element at the position pointed by the iterator.
  * Time Complexity: O(logn)
* S. No.: 6.
  * Function: erase(key)
  * Description: Removes the key and its value from the map.
  * Time Complexity: O(logn)
* S. No.: 7.
  * Function: clear()
  * Description: Removes all the elements from the map.
  * Time Complexity: O(n)


****Example****

C++
---

`#include <iostream>`

`#include <map>`

`using` `namespace` `std;`

`int` `main()`

`{`

    `map<``int``, string> m;`

    `m[1] =` `"ONE"``;`

    `m[2] =` `"TWO"``;`

    `m[3] =` `"THREE"``;`

    `cout <<` `"Size of map m: "` `<< m.size() << endl;`

    `m.insert({ 4,` `"FOUR"` `});`

    `m.erase(2);`

    `cout <<` `"Map:-"` `<< endl;`

    `for` `(``auto` `i : m) {`

        `cout <<` `"Key: "` `<< i.first <<` `'\t'``;`

        `cout <<` `"Value: "` `<< i.second << endl;`

    `}`

    `return` `0;`

`}`

**Output**

```
Size of map m: 3
Map:-
Key: 1    Value: ONE
Key: 3    Value: THREE
Key: 4    Value: FOUR


```


### 1.8 – STL Unordered\_set

The [unordered\_set](https://www.geeksforgeeks.org/unordered_set-in-cpp-stl/) is the version of the set container where the data is not sorted but we can still perform a quick search. It is due to the fact that these unordered\_sets are implemented using hash tables. It is defined as ****std::unordered\_set**** inside the ****<unordered\_set>**** header file.

> ****Note:**** To store the multiple keys, we can use the [****unordered\_multiset****](https://www.geeksforgeeks.org/unordered_multiset-and-its-uses/) container.

****unordered\_set Declaration****

```
unordered_set <data_type> set_name;

```


****std::unordered\_set Member Functions****



* S. No.: 1.
  * Functions: begin()
  * Description: Returns an iterator to the first element.
  * Time Complexity: O(1)
* S. No.: 2.
  * Functions: end()
  * Description: Returns an iterator to the theoretical element that follows the last element
  * Time Complexity: O(1)
* S. No.: 3.
  * Functions: size()
  * Description: Returns the number of elements.
  * Time Complexity: O(1)
* S. No.: 4.
  * Functions: empty()
  * Description: Returns true if the unordered_set is empty, otherwise false.
  * Time Complexity: O(1)
* S. No.: 5.
  * Functions: insert()
  * Description: Insert an item in the container.
  * Time Complexity: O(1)
* S. No.: 6.
  * Functions: erase()
  * Description: Removes an element from the container.
  * Time Complexity: O(1)
* S. No.: 7.
  * Functions: find()
  * Description: Returns the pointer to the given element if present, otherwise, a pointer to the end.
  * Time Complexity: O(1)


****Example****

C++
---

`#include <iostream>`

`#include <unordered_set>`

`using` `namespace` `std;`

`int` `main()`

`{`

    `unordered_set<``int``> us = { 1, 5, 2, 3, 4 };`

    `cout <<` `"Size of us: "` `<< us.size() << endl;`

    `us.insert(7);`

    `if` `(us.find(3) != us.end()) {`

        `cout <<` `"3 found!"` `<< endl;`

    `}`

    `else` `{`

        `cout <<` `"3 not found"` `<< endl;`

    `}`

    `cout <<` `"us: "``;`

    `for` `(``auto` `i = us.begin(); i != us.end(); i++) {`

        `cout << *i <<` `" "``;`

    `}`

    `cout << endl;`

    `return` `0;`

`}`

**Output**

```
Size of us: 5
3 found!
us: 7 4 1 5 2 3 


```


### 1.9 – STL Unordered\_map

[Unordered\_maps](https://www.geeksforgeeks.org/unordered_map-in-cpp-stl/) are stores the data in the form of key-value pairs. They implement the hash table so there is no particular order in which the data is stored. They are defined as ****std::unordered\_map**** class template inside ****<unordered\_map>**** header file.

> ****Note:**** To store the multiple keys, we can use the [****unordered\_multimap****](https://www.geeksforgeeks.org/unordered_multimap-and-its-application/) container.

****unordered\_map Declaration****

```
unordered_map <key_type, value_type> map_name;

```


****std::unordered\_map Member Functions****



* S. No.: 1.
  * Function: begin()
  * Description: Returns an iterator to the first element.
  * Time Complexity: O(1)
* S. No.: 2.
  * Function: end()
  * Description: Returns an iterator to the theoretical element that follows the last element
  * Time Complexity: O(1)
* S. No.: 3.
  * Function: size()
  * Description: Returns the number of elements.
  * Time Complexity: O(1)
* S. No.: 4.
  * Function: empty()
  * Description: Returns true if the unordered_set is empty, otherwise false.
  * Time Complexity: O(1)
* S. No.: 5.
  * Function: find()
  * Description: Returns the pointer to the given element if present, otherwise, a pointer to the end.
  * Time Complexity: O(1)
* S. No.: 6.
  * Function: bucket()
  * Description: Returns the bucket number where the data is stored.
  * Time Complexity: O(1)
* S. No.: 7.
  * Function: insert()
  * Description: Insert an item in the container.
  * Time Complexity: O(1)
* S. No.: 8.
  * Function: erase()
  * Description: Removes an element from the container.
  * Time Complexity: O(1)


****Example****

C++
---

`#include <iostream>`

`#include <unordered_map>`

`using` `namespace` `std;`

`int` `main()`

`{`

    `unordered_map<``int``, string> umap;`

    `umap[1] =` `"ONE"``;`

    `umap[2] =` `"TWO"``;`

    `umap[3] =` `"THREE"``;`

    `umap.insert({ 4,` `"FOUR"` `});`

    `if` `(umap.find(12) != umap.end()) {`

        `cout <<` `"Key 12 Found!"` `<< endl;`

    `}`

    `else` `{`

        `cout <<` `"Key 12 Not Found!"` `<< endl;`

    `}`

    `cout <<` `"umap:--"` `<< endl;`

    `for` `(``auto` `i = umap.begin(); i != umap.end(); i++) {`

        `cout <<` `"Key:"` `<< i->first`

             `<<` `"\tValue: "` `<< i->second << endl;`

    `}`

    `return` `0;`

`}`

**Output**

```
Key 12 Not Found!
umap:--
Key:4    Value: FOUR
Key:3    Value: THREE
Key:2    Value: TWO
Key:1    Value: ONE


```


STL Iterators
-------------

[Iterators](https://www.geeksforgeeks.org/introduction-iterators-c/) are the objects used to iterate through the STL containers. They can be seen as pointers that are used to traverse and manipulate the data inside containers.

*   Iterators are defined inside the ****<iterator> header file.****
*   Each container has its own iterators.

Iterators can be classified into 5 types which are:

![](https://media.geeksforgeeks.org/wp-content/uploads/C_Iterator.jpg)

STL Iterators

### 1\. Input Iterator

> [Input Iterators](https://www.geeksforgeeks.org/input-iterators-in-cpp/) are used for single-pass input operations.
> 
> *   They can only be used for accessing (read operations) not assigning.
> *   They cannot be decremented.
> *   An element can only be accessed once.
> *   They have limited capability and come lowest in the iterator hierarchy.
> 
> istream\_iterator is an example of the input iterator.

### 2\. Output Iterator

> [Output Iterators](https://www.geeksforgeeks.org/output-iterators-cpp/) are used for single-pass output operations.
> 
> *   They can only be used for assigning purposes (write operations).
> *   An element can only be accessed once.
> *   They cannot be decremented.
> *   They come lowest in the hierarchy along with the Input Iterators.
> 
> ostream\_iterator is an example of the output iterator.

### 3\. Forward Iterator

> [Forward iterators](https://www.geeksforgeeks.org/forward-iterators-in-cpp/) contain features of both input and output iterators along with:
> 
> *   It can be used for both read and write operations.
> *   It cannot be decremented as it can move only in a single direction.
> *   It can only move sequentially i.e., one step at a time.
> *   It is in the upper hierarchy compared to both input and output iterators.
> 
> forward\_list::iterator are examples of the forward iterators.

### 4\. Bi-Directional Iterator

> The [bi-directional iterators](https://www.geeksforgeeks.org/bidirectional-iterators-in-cpp/) have all the features of forward iterators along with:
> 
> *   They can move in both forward and backward directions.
> *   They can be used for both read and write operations.
> 
> map::iterator, set::iterator, multiset::iterator, and multimap::iterators are some examples of input iterator.

### 5\. Random Access Iterator

> [Random access iterators](https://www.geeksforgeeks.org/random-access-iterators-in-cpp/) are the most powerful iterators.
> 
> *   They contain features of all the other iterators.
> *   They can move in both forward and backward directions.
> *   Read and write operations can be performed.
> *   Can move to any point in the container i.e. random access.
> 
> vector::iterator and array::iterator are some examples.

![](https://media.geeksforgeeks.org/wp-content/uploads/C_Iterator_Support.jpg)

STL Algorithms
--------------

[Algorithms](https://www.geeksforgeeks.org/c-magicians-stl-algorithms/) are set of generic and optimal implementations of some useful algorithms to make programming easier and more efficient.

*   These algorithms work with STL containers and iterators.
*   Algorithms are defined inside the <algorithm> header file.
*   C++ STL contains around 114 Algorithms which are listed in the article – [Algorithm Library in C++ STL](https://www.geeksforgeeks.org/algorithms-library-c-stl/)

****Some of the commonly used algorithms are:****

### 1\. Sort

The [std::sort](https://www.geeksforgeeks.org/sort-c-stl/) algorithm is used to sort data in any given order.

****Syntax of std::sort****

```
sort (beginIterator, endIterator);
sort (beginIterator, endIterator, comparator);    // for custom comparator


```


> ****Note:**** Iterators must be ****RandomAccessIterators****.

****Example****

C++
---

`#include <bits/stdc++.h>`

`using` `namespace` `std;`

`int` `main()`

`{`

    `int` `arr[] = { 1, 5, 8, 9, 6, 7, 3, 4, 2, 0 };`

    `int` `n =` `sizeof``(arr) /` `sizeof``(arr[0]);`

    `sort(arr, arr + n);`

    `cout <<` `"\nArray after sorting using "`

            `"default sort is : \n"``;`

    `for` `(``int` `i = 0; i < n; ++i)`

        `cout << arr[i] <<` `" "``;`

    `return` `0;`

`}`

**Output**

```
Array after sorting using default sort is : 
0 1 2 3 4 5 6 7 8 9 


```


### 2\. Copy

The [std::copy](https://www.geeksforgeeks.org/different-methods-copy-c-stl-stdcopy-copy_n-copy_if-copy_backward/) method efficiently copies a range of elements to another container using its iterators.

****Syntax of std::copy****

```
copy (beginIterator, endIterator, destIterator);


```


> ****Note:**** Iterators can be of ****InputIterator, OutputIterator or ForwardIterator.****

****Example****

C++
---

`#include <algorithm>`

`#include <iostream>`

`#include <iterator>`

`#include <sstream>`

`#include <vector>`

`using` `namespace` `std;`

`int` `main()`

`{`

    `vector<``int``> v = { 1, 2, 3, 4, 5 };`

    `copy(v.begin(), v.end(),`

         `ostream_iterator<``int``>(cout,` `" "``));`

    `return` `0;`

`}`

### 3\. Max Element

The [std::max\_element](https://www.geeksforgeeks.org/max_element-in-cpp/) implements an efficient algorithm to find the maximum element in the container. To find minimum element, use std::min\_element.

****Syntax of std::max\_element****

```
max_element (firstIterator, lastIterator);


```


> ****Note:**** The iterators can be of type ****ForwardIterators.****

****Example****

C++
---

`#include <algorithm>`

`#include <iostream>`

`#include <iterator>`

`#include <vector>`

`using` `namespace` `std;`

`int` `main()`

`{`

    `vector<``int``> v = { 10, 88, 2, 9, 45, 82, 546, 42, 221 };`

    `auto` `max = max_element(begin(v), end(v));`

    `cout <<` `"Maximum Element: "` `<< *max <<` `"\n"``;`

    `return` `0;`

`}`

**Output**

```
Maximum Element: 546


```


### 4\. Find

The [std::find f](https://www.geeksforgeeks.org/std-find-in-cpp/)unction is used to find the element in the given range.

****Syntax of std::find****

```
find (firstIterator, lastIterator, value);


```


> ****Note:**** The iterators can be of the type _****InputIterator, ForwardIterator.****_

****Example****

C++
---

`#include <algorithm>`

`#include <iostream>`

`#include <vector>`

`using` `namespace` `std;`

`int` `main()`

`{`

    `vector<``int``> v`

        `= { 1, 8, 97, 3, 654, 132, 65, 4, 321, 5, 45 };`

    `auto` `itr = find(v.begin(), v.end(), 5);`

    `if` `(itr != v.end()) {`

        `cout << *itr <<` `" is found!"` `<< endl;`

    `}`

    `else` `{`

        `cout <<` `"5 is not found!"` `<< endl;`

    `}`

    `return` `0;`

`}`

### 5\. For Each

The [std::for\_each](https://www.geeksforgeeks.org/for_each-loop-c/) algorithm applies the specified instruction to each of the elements in the given range.

****Syntax of std::for\_each****

```
for_each (firstIterator, lastIterator, unaryFunction);


```


> ****Note:**** The iterators can be of the type _****ForwardIterator, InputIterator.****_

****Example****

C++
---

`#include <algorithm>`

`#include <iostream>`

`#include <iterator>`

`#include <vector>`

`using` `namespace` `std;`

`int` `main()`

`{`

    `vector<``int``> v = { 1, 2, 3, 4, 5 };`

    `for_each(v.begin(), v.end(), [](``int``& i){`

      `i = i + 1;`

    `});`

    `copy(v.begin(), v.end(), ostream_iterator<``int``>(cout,` `" "``));`

    `return` `0;`

`}`

STL Function Objects (Functors)
-------------------------------

The Function Objects, also known as [Functors](https://www.geeksforgeeks.org/functors-in-cpp/), are the objects that behave like a function. It is due to the overloading of the ****( ) parenthesis operator.**** The functors are defined inside the ****<functional>**** header file.

STL provides some predefined functors such as:

1.  equal\_to
2.  not\_equal\_to
3.  greater
4.  less
5.  plus
6.  minus

### Example

C++
---

`#include <functional>`

`#include <iostream>`

`using` `namespace` `std;`

`int` `main()`

`{`

    `equal_to<``int``> eq;`

    `not_equal_to<``int``> neq;`

    `greater<``int``> gt;`

    `less<``int``> ls;`

    `plus<``int``> p;`

    `minus<``int``> m;`

    `cout <<` `"Functors and their return value\n"``;`

    `cout << boolalpha;`

    `cout <<` `"equal_to, (10,20): "` `<< eq(10, 20) << endl;`

    `cout <<` `"greater, (10,20): "` `<< gt(10, 20) << endl;`

    `cout <<` `"less, (10,20): "` `<< ls(10, 20) << endl;`

    `cout <<` `"plus, (10,20): "` `<< p(10, 20) << endl;`

    `cout <<` `"minus(10,20): "` `<< m(10, 20) << endl;`

    `return` `0;`

`}`

**Output**

```
Functors and their return value
equal_to, (10,20): false
greater, (10,20): false
less, (10,20): true
plus, (10,20): 30
minus(10,20): -10


```