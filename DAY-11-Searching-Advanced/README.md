## 📅 TRACK DAYS: 11 of 30

## `✅ Day 11 : Searching - Advanced`

</br>

## 📑 Contents :

- Data Structures and Algorithms
  - `Searching : Advanced`
    - Interpolation Search
    - Ternary Search

</br>

### 🔍 Searching Advanced :-

#### 1️⃣ Interpolation search :-

- **Definition :**

  - Interpolation Search is an algorithm for searching for a specific key in a sorted array.

  - It uses the position formula to narrow down the search space dynamically.

- **Time Complexity :**

  - `Worst-case time complexity:` O(n) (when the elements are not uniformly distributed and lead to a poor position formula)
  - `Best-case time complexity:` O(1)
  - `Average-case time complexity:` O(log log n) (when elements are uniformly distributed)

- **Algorithm Steps :**

  1. `Initialize:`

     - Set low to 0 (the beginning of the array).
     - Set high to n-1 (the end of the array).

  2. `Search Position Calculation:`

     - Calculate the probable position using the interpolation formula:

       ```cpp
        pos = low + ((key - arr[low]) \* (high - low) / (arr[high] - arr[low]))
       ```

  3. `Comparison:`

     - Compare the key with the element at the calculated position:
     - If arr[pos] is equal to the key, return pos (key found).
     - If arr[pos] is less than the key, set `low = pos + 1`.
     - If arr[pos] is greater than the key, set `high = pos - 1`.

  4. `Repeat:`

     - Repeat steps 2-3 until low is less than or equal to high and the key is within the range of `arr[low]` and `arr[high]`.

  5. `Key Not Found:`

     - If the loop ends and the key is not found, return -1.

- **Syntax :**

  ```cpp
    int interpolationSearch(int arr[], int n, int key) {
        int low = 0, high = n - 1;

        while (low <= high && key >= arr[low] && key <= arr[high]) {
            int pos = low + ((key - arr[low]) * (high - low) / (arr[high] - arr[low]));

            if (arr[pos] == key)
                return pos;
            else if (arr[pos] < key)
                low = pos + 1;
            else
                high = pos - 1;
        }

        return -1; // Key not found
    }

  ```

- **Code :**

  ```cpp
    #include <iostream>

    int main() {
        int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
        int n = sizeof(arr) / sizeof(arr[0]);
        int key = 6;

        int result = interpolationSearch(arr, n, key);

        if (result != -1)
            std::cout << "Element found at index " << result << std::endl;
        else
            std::cout << "Element not found" << std::endl;

        return 0;
    }

  ```

#### 2️⃣ Ternary search :-

- **Definition :**

  - Ternary Search is an algorithm that efficiently finds the position of a specific value in a sorted array by dividing the array into three parts.

- **Time Complexity :**

  - `Worst-case time complexity:` O(log3 n)
  - `Best-case time complexity:` O(1)
  - `Average-case time complexity:` O(log3 n)

- **Algorithm Steps :**

  1. `Initialize:`

     - Set low to 0 (the beginning of the array).
     - Set high to n-1 (the end of the array).

  2. `Search Positions Calculation:`

     - Calculate two midpoints, mid1 and mid2:

       ```cpp
        mid1 = low + (high - low) / 3 mid2 = high - (high - low) / 3
       ```

  3. `Comparison:`

     - Compare the key with the elements at mid1 and mid2:
     - If arr[mid1] is equal to the key, return mid1 (key found).
     - If arr[mid2] is equal to the key, return mid2 (key found).
     - If the key is less than arr[mid1], search in the first third by setting `high = mid1 - 1`.
     - If the key is greater than arr[mid2], search in the last third by setting `low = mid2 + 1`.
     - If the key is between arr[mid1] and arr[mid2], search in the middle third by setting `low = mid1 + 1` and `high = mid2 - 1`.

  4. `Repeat:`

     - Repeat steps 2-3 until low is less than or equal to high.

  5. `Key Not Found:`

     - If the loop ends and the key is not found, return -1.

- **Syntax :**

  ```cpp
    int ternarySearch(int arr[], int low, int high, int key) {
        if (low <= high) {
            int mid1 = low + (high - low) / 3;
            int mid2 = high - (high - low) / 3;

            if (arr[mid1] == key)
                return mid1;
            if (arr[mid2] == key)
                return mid2;

            if (key < arr[mid1])
                return ternarySearch(arr, low, mid1 - 1, key);
            else if (key > arr[mid2])
                return ternarySearch(arr, mid2 + 1, high, key);
            else
                return ternarySearch(arr, mid1 + 1, mid2 - 1, key);
        }

        return -1; // Key not found
    }

  ```

- **Code :**

  ```cpp
    #include <iostream>

    int main() {
        int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
        int n = sizeof(arr) / sizeof(arr[0]);
        int key = 6;

        int result = ternarySearch(arr, 0, n - 1, key);

        if (result != -1)
            std::cout << "Element found at index " << result << std::endl;
        else
            std::cout << "Element not found" << std::endl;

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
