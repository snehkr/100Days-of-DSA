## 📅 TRACK DAYS: 08 of 30

## `✅ Day 08 : Sorting - Part 03`

</br>

## 📑 Contents :

- Data Structures and Algorithms

  - `Sorting : Part 03`

    - Details Study :
      - Comparison Sorting
        - Merge Sort
        - Quick Sort
        - Heap Sort

</br>

### Comparison Sorting :-

- **Definition :** Comparison-based sorting algorithms compare elements of the data to determine their order.

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

</br></br>

<h4 align="center">
  © 30 DAYS OF DSA [ 2024-25 ] </br>
  ALL RIGHTS RESERVED
</h4>

<p align="center">
  HAPPY LEARNING !!</br>
  DEVELOPED WITH ❤️ BY SNEH KR 
</p>
