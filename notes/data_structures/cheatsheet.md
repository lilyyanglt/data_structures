# Cheatsheet
- This is a cheatsheet for easy access of language differences in terms of the data structures that comes with the languages

| Data Structure | cpp | java | python | javascript |
| -------------- | --- | ---- | ------ | ---------- |
| Static Array | instantiation<br><pre>int nums = {1, 2, 3}</pre><br>Read O(1)</br><pre>int x = nums[0];</pre><br>Write O(1)<pre>nums[0] = 5;</pre><br>Search O(n)<pre>int value = 10; <br>for(int i : nums) {<br> if (value == i) {<br> std::cout << "found\n"; <br> }<br>}</pre><br>Append/Prepend/Insert (N/A)<li>Static array don't have these operations</li> | instantiation<br><pre>int[] nums = {1, 2, 3};</pre><br>Read O(1)</br><pre>int x = nums[0];</pre><br>Write O(1)<pre>nums[0] = 5;</pre><br>Search O(n)<pre>int value = 10; <br>for(int i : nums) {<br> if (value == i) {<br> System.out.println("found"); <br> }<br>}</pre><br>Append/Prepend/Insert (N/A)<li>Static array don't have these operations</li> | n/a - python array's are dynamic called List (which uses cpython for implementation under the hood| n/a - javascript arrays are also dynamic|
| Dyanmic Array | `#include <vector>` <li>List the common method and complexity here</li><li>[details here](usingVector.cpp)</li>| `import java.util.ArrayList` <br> <br>Instantiation<br><pre>ArrayList&lt;Integer&gt; numbers = new ArrayList&lt;Integer&gt;()</pre>|<li>list</li><li>set</li><li>tuple</li> | |
| Linked List | | | | | 
| T