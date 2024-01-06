## 📅 TRACK DAYS: 06 of 30

## `✅ Day 06 : Sorting - Part 01`

</br>

## 📑 Contents :

- Data Structures and Algorithms

  - `Sorting : Part 01`

    - Definition
    - Types of Sorting : Basics
      - Comparison Sorting
        - Bubble Sort
        - Selection Sort
        - Insertion Sort
        - Merge Sort
        - QuickSort
        - Heap Sort
      - Non-Comparison Sorting
        - Counting Sort
        - Radix Sort

  - `Sorting : Part 02`

    - Details Study :
      - Comparison Sorting
        - Bubble Sort
        - Selection Sort
        - Insertion Sort

  - `Sorting : Part 03`

    - Details Study :
      - Comparison Sorting
        - Merge Sort
        - Quick Sort
        - Heap Sort

  - `Sorting : Part 04`

    - Details Study :
      - Non-Comparison Sorting
        - Counting Sort
        - Radix Sort

</br>

### 🔗 Sorting : Definition

- Sorting is a process of arranging items systematically in a specific order, often according to some criteria.
- Sorting is a fundamental operation in computer science and is used in various applications, ranging from data processing to algorithmic problem-solving.

### 🔗 Sorting : Types and Basics

### Comparison Sorting :-

- **Definition :** Comparison-based sorting algorithms compare elements of the data to determine their order.

  #### 1️⃣ Bubble Sort :-

  - **Definition :**

    - Bubble Sort is a simple comparison-based sorting algorithm. It repeatedly steps through the list, compares adjacent elements, and swaps them if they are in the wrong order.
    - The pass through the list is repeated until the list is sorted.

  - **Time Complexity :**

    - `Worst-case time complexity:` O(n^2)
    - `Best-case time complexity:` O(n) (when the array is already sorted)
    - `Average-case time complexity:` O(n^2)

  - **Algorithm Steps :**

    - `1.` Compare each pair of adjacent elements in the array.
    - `2.` If the elements are in the wrong order, swap them.
    - `3.` Repeat steps 1 and 2 until no swaps are needed.

  - **Code :**

    ```cpp
    void bubbleSort(int arr[], int n) {
        for (int i = 0; i < n-1; ++i) {
            for (int j = 0; j < n-i-1; ++j) {
                if (arr[j] > arr[j+1]) {
                    // Swap
                    int temp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp;
                }
            }
        }
    }

    ```

  #### 2️⃣ Selection Sort :-

  - **Definition :**

    - Selection Sort is a simple comparison-based sorting algorithm.
    - It sorts an array by repeatedly finding the minimum element from the unsorted part and putting it at the beginning.

  - **Time Complexity :**

    - `Worst-case time complexity:` O(n^2)
    - `Best-case time complexity:` O(n^2)
    - `Average-case time complexity:` O(n^2)

  - **Algorithm Steps :**

    - `1.` Find the minimum element in the unsorted part of the array.
    - `2.` Swap it with the first element.
    - `3.` Repeat steps 1 and 2 for the remaining unsorted part.

  - **Code :**

    ```cpp
    void selectionSort(int arr[], int n) {
        for (int i = 0; i < n-1; ++i) {
            int min_index = i;
            for (int j = i+1; j < n; ++j) {
                if (arr[j] < arr[min_index]) {
                    min_index = j;
                }
            }
            // Swap
            int temp = arr[i];
            arr[i] = arr[min_index];
            arr[min_index] = temp;
        }
    }

    ```

  #### 3️⃣ Insertion Sort :-

  - **Definition :**

    - Insertion Sort is a simple comparison-based sorting algorithm.
    - It builds the sorted array one element at a time by repeatedly taking an element from the unsorted part and inserting it into its correct position.

  - **Time Complexity :**

    - `Worst-case time complexity:` O(n^2)
    - `Best-case time complexity:` O(n) (when the array is already sorted)
    - `Average-case time complexity:` O(n^2)

  - **Algorithm Steps :**

    - `1.` Start with the second element and compare it with the elements before it.
    - `2.` Insert the element into its correct position in the sorted part of the array.
    - `3.` Repeat steps 1 and 2 for the remaining elements.

  - **Code :**

    ```cpp
    void insertionSort(int arr[], int n) {
        for (int i = 1; i < n; ++i) {
            int key = arr[i];
            int j = i - 1;
            while (j >= 0 && arr[j] > key) {
                arr[j+1] = arr[j];
                --j;
            }
            arr[j+1] = key;
        }
    }

    ```

  #### 4️⃣ Merge Sort :-

  - **Definition :**

    - Merge Sort is a comparison-based sorting algorithm that divides the unsorted list into n sub-lists, each containing one element, and then repeatedly merges sub-lists to produce new sorted sub-lists until there is only one sub-list remaining.

  - **Time Complexity :**

    - `Worst-case time complexity:` O(n log n)
    - `Best-case time complexity:` O(n log n)
    - `Average-case time complexity:` O(n log n)

  - **Algorithm Steps :**

    - `1.` Divide the unsorted list into n sub-lists.
    - `2.` Recursively sort each sub-list.
    - `3.` Merge the sorted sub-lists to produce new sorted sub-lists until there is only one sub-list remaining.

  - **Code :**

    ```cpp
    void merge(int arr[], int left[], int leftSize, int right[], int rightSize) {
        // Merge two sorted arrays
        // Implementation not provided for brevity
    }

    void mergeSort(int arr[], int n) {
        if (n > 1) {
            int mid = n / 2;
            int* left = arr;
            int leftSize = mid;
            int* right = arr + mid;
            int rightSize = n - mid;

            mergeSort(left, leftSize);
            mergeSort(right, rightSize);

            merge(arr, left, leftSize, right, rightSize);
        }
    }

    ```

  #### 5️⃣ Quick Sort :-

  - **Definition :**

    - QuickSort is a comparison-based sorting algorithm that selects a "pivot" element from the array and partitions the other elements into two sub-arrays according to whether they are less than or greater than the pivot.

  - **Time Complexity :**

    - `Worst-case time complexity:` O(n^2) (rare, occurs when the pivot selection is unbalanced)
    - `Best-case time complexity:` O(n log n)
    - `Average-case time complexity:` O(n log n)

  - **Algorithm Steps :**

    - `1.` Select a pivot element from the array.
    - `2.` Partition the other elements into two sub-arrays based on whether they are less than or greater than the pivot.
    - `3.` Recursively sort the sub-arrays.

  - **Code :**

    ```cpp
    int partition(int arr[], int low, int high) {
        int pivot = arr[high];
        int i = low - 1;

        for (int j = low; j <= high-1; ++j) {
            if (arr[j] < pivot) {
                ++i;
                // Swap
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }

        // Swap
        int temp = arr[i+1];
        arr[i+1] = arr[high];
        arr[high] = temp;

        return i + 1;
    }

    void quickSort(int arr[], int low, int high) {
        if (low < high) {
            int pivotIndex = partition(arr, low, high);
            quickSort(arr, low, pivotIndex - 1);
            quickSort(arr, pivotIndex + 1, high);
        }
    }


    ```

  #### 6️⃣ Heap Sort :-

  - **Definition :**

    - Heap Sort is a comparison-based sorting algorithm that uses a binary heap data structure to build a heap and then repeatedly extracts the maximum element from it.
    - It has a time complexity of O(n log n) and is an in-place sorting algorithm.

  - **Time Complexity :**

    - `Worst-case time complexity:` O(n log n)
    - `Best-case time complexity:` O(n log n)
    - `Average-case time complexity:` O(n log n)

  - **Algorithm Steps :**

    - `1.` Build a max-heap from the array.
    - `2.` Swap the root (maximum element) with the last element in the heap.
    - `3.` Reduce the heap size by 1 and heapify the root.
    - `4.` Repeat steps 2-3 until the heap size is 1.

  - **Code :**

    ```cpp
    void heapify(int arr[], int n, int i) {
        int largest = i;
        int left = 2 * i + 1;
        int right = 2 * i + 2;

        if (left < n && arr[left] > arr[largest])
            largest = left;

        if (right < n && arr[right] > arr[largest])
            largest = right;

        if (largest != i) {
            swap(arr[i], arr[largest]);
            heapify(arr, n, largest);
        }
    }

    void heapSort(int arr[], int n) {
        // Build heap (rearrange array)
        for (int i = n / 2 - 1; i >= 0; i--)
            heapify(arr, n, i);

        // Extract elements from the heap one by one
        for (int i = n - 1; i > 0; i--) {
            swap(arr[0], arr[i]); // Move current root to end
            heapify(arr, i, 0);   // Max heapify the reduced heap
        }
    }

    ```

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
