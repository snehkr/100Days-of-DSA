## 📅 TRACK DAYS: 09 of 30

## `✅ Day 09 : Sorting - Part 04`

</br>

## 📑 Contents :

- Data Structures and Algorithms

  - `Sorting : Part 03`

    - Details Study :
      - Non-Comparison Sorting
        - Counting Sort
        - Radix Sort

</br>

### Non-Comparison Sorting :-

- **Definition :** Non-comparison-based sorting algorithms exploit special properties of the data to sort efficiently.

#### 1️⃣ Counting Sort :-

- **Definition :**

  - Counting Sort is a non-comparison-based sorting algorithm that works well when the range of input values is not significantly larger than the number of elements to be sorted.

  - It counts the occurrences of each element and uses this information to place the elements in order.

- **Time Complexity :**

  - `Worst-case time complexity:` O(n + k), where n is the number of elements in the input array and k is the range of input values.
  - `Best-case time complexity:` O(n + k)
  - `Average-case time complexity:` O(n + k)

- **Algorithm Steps :**

  - `1.` Find the range of input values (minimum and maximum).
  - `2.` Create a count array to store the count of each distinct element.
  - `3.` Modify the count array to store the cumulative count.
  - `4.` Build the output array using the count array.
  - `5.` Place each element in its correct position in the output array and decrease its count in the count array.

- **Code :**

  ```cpp
  void countingSort(int arr[], int n) {
      // Find the range of input values
      int maxElement = *max_element(arr, arr + n);
      int minElement = *min_element(arr, arr + n);
      int range = maxElement - minElement + 1;

      // Create a count array and initialize it to 0
      int count[range] = {0};

      // Count occurrences of each element
      for (int i = 0; i < n; ++i)
          count[arr[i] - minElement]++;

      // Modify the count array to store cumulative count
      for (int i = 1; i < range; ++i)
          count[i] += count[i - 1];

      // Build the output array using the count array
      int output[n];
      for (int i = n - 1; i >= 0; --i) {
          output[count[arr[i] - minElement] - 1] = arr[i];
          count[arr[i] - minElement]--;
      }

      // Copy the output array to the original array
      for (int i = 0; i < n; ++i)
          arr[i] = output[i];
  }

  ```

#### 2️⃣ Radix Sort :-

- **Definition :**

  - Radix Sort is a non-comparison-based sorting algorithm that works by distributing elements into buckets according to their individual digits.
  - It processes the digits from the least significant to the most significant. Radix Sort can be applied to integers or strings of digits.

- **Time Complexity :**

  - `Worst-case time complexity:` O(k \* n), where k is the number of digits in the input integers, and n is the number of elements.
  - `Best-case time complexity:` O(k \* n)
  - `Average-case time complexity:` O(k \* n)

- **Algorithm Steps :**

  - `1.` Identify the maximum number of digits in the given set of numbers.
  - `2.` Starting from the least significant digit, use a stable sort (like counting sort) to sort the numbers.
  - `3.` Move to the next significant digit and repeat step 2 until all digits are processed.

- **Code :**

  ```cpp
  void countingSort(int arr[], int n, int exp) {
      const int RANGE = 10;
      int output[n];
      int count[RANGE] = {0};

      // Count occurrences of digits at the current place value
      for (int i = 0; i < n; i++)
          count[(arr[i] / exp) % RANGE]++;

      // Accumulate count to get the position of each element in the output array
      for (int i = 1; i < RANGE; i++)
          count[i] += count[i - 1];

      // Build the output array using the count array
      for (int i = n - 1; i >= 0; i--) {
          output[count[(arr[i] / exp) % RANGE] - 1] = arr[i];
          count[(arr[i] / exp) % RANGE]--;
      }

      // Copy the output array to the original array
      for (int i = 0; i < n; i++)
          arr[i] = output[i];
  }

  void radixSort(int arr[], int n) {
      int maxElement = *max_element(arr, arr + n);

      for (int exp = 1; maxElement / exp > 0; exp *= 10)
          countingSort(arr, n, exp);
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
