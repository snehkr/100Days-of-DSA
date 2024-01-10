## 📅 TRACK DAYS: 10 of 30

## `✅ Day 10 : Searching - Basics`

</br>

## 📑 Contents :

- Data Structures and Algorithms
  - `Searching : Basics`
    - Non-Comparison Sorting
      - Counting Sort
      - Radix Sort

</br>

### 🔍 Searching :-

- **Definition :**

  - Searching refers to the process of finding a particular element in a collection of elements, such as an array or a list.
  - There are various searching algorithms, each with its own approach and efficiency.
  - The two main types of searching are :
    - Linear search
    - Binary search.

#### 1️⃣ Linear search :-

- **Definition :**

  - Linear search is a simple searching algorithm that sequentially checks each element of the data structure until a match is found or the entire collection has been searched.

- **Time Complexity :**

  - `Worst-case time complexity:` O(n) - Linear time complexity.
  - `Best-case time complexity:` O(1) - Constant time complexity (when the target element is found at the beginning of the collection).
  - `Average-case time complexity:` O(n) - Linear time complexity.

- **Algorithm Steps :**

  1. `Start from the beginning:`
     - Begin with the first element in the collection.
  2. `Compare:`
     - Compare the current element with the target element.
  3. `Match found?`
     - If the current element is equal to the target element, the search is successful, and the index of the current element is returned.
  4. `Move to the next element:`
     - If the current element is not equal to the target element, move to the next element in the collection.
  5. `Repeat:`
     - Repeat steps 2-4 until either the target element is found, and its index is returned, or the entire collection has been searched without finding the target element, in which case -1 is returned.

- **Syntax :**

  ```cpp
    int linearSearch(int arr[], int n, int target) {
        for (int i = 0; i < n; i++) {
            if (arr[i] == target) {
                return i; // Element found at index i
            }
        }
        return -1; // Element not found
    }

  ```

- **Code :**

  ```cpp
    int main() {
        int arr[] = {2, 5, 8, 12, 16, 23, 38, 42};
        int n = sizeof(arr) / sizeof(arr[0]);
        int target = 16;
        int result = linearSearch(arr, n, target);
        if (result != -1) {
            cout << "Element found at index " << result << endl;
        } else {
            cout << "Element not found" << endl;
        }
        return 0;
    }

  ```

#### 2️⃣ Binary search :-

- **Definition :**

  - Binary search is an efficient searching algorithm that works on sorted collections by repeatedly dividing the search interval in half.

- **Time Complexity :**

  - `Worst-case time complexity:` O(log n) - Logarithmic time complexity (efficient).
  - `Best-case time complexity:` O(1) - Constant time complexity (when the target element is found at the midpoint on the first try).
  - `Average-case time complexity:` O(log n) - Logarithmic time complexity.

- **Algorithm Steps :**

  1. `Initialize low and high:`
     - Set the initial values of low and high to the first and last indices of the collection, respectively.
  2. `Midpoint calculation:`
     - Calculate the midpoint index (mid) as (low + high) / 2.
  3. `Compare with the target:`
     - Compare the element at the midpoint (arr[mid]) with the target element.
  4. `Match found?`
     - If the element at the midpoint is equal to the target, the search is successful, and the index (mid) is returned.
  5. `Adjust low and high:`
     - If the element at the midpoint is less than the target, set low = mid + 1.
     - If the element at the midpoint is greater than the target, set high = mid - 1.
  6. `Repeat:`
     - Repeat steps 2-5 until either the target element is found, and its index is returned, or low becomes greater than high, indicating that the target element is not in the collection.

- **Syntax :**

  ```cpp
    int binarySearch(int arr[], int low, int high, int target) {
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (arr[mid] == target) {
                return mid; // Element found at index mid
            } else if (arr[mid] < target) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        return -1; // Element not found
    }

  ```

- **Code :**

  ```cpp
    int main() {
        int arr[] = {2, 5, 8, 12, 16, 23, 38, 42};
        int n = sizeof(arr) / sizeof(arr[0]);
        int target = 16;
        int result = binarySearch(arr, 0, n - 1, target);
        if (result != -1) {
            cout << "Element found at index " << result << endl;
        } else {
            cout << "Element not found" << endl;
        }
        return 0;
    }

  ```

</br></br>

<h4 align="center">
  © 30 DAYS OF DSA [ 2024-25 ] </br>
  ALL RIGHTS RESERVED
</h4>

<p align="center">
  HAPPY LEARNING !!</br>
  DEVELOPED WITH ❤️ BY SNEH KR 
</p>
