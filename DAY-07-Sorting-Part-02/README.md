## 📅 TRACK DAYS: 07 of 30

## `✅ Day 07 : Sorting - Part 02`

</br>

## 📑 Contents :

- Data Structures and Algorithms

  - `Sorting : Part 02`

    - Details Study :
      - Comparison Sorting
        - Bubble Sort
        - Selection Sort
        - Insertion Sort

</br>

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

</br></br>

<h4 align="center">
  © 30 DAYS OF DSA [ 2024-25 ] </br>
  ALL RIGHTS RESERVED
</h4>

<p align="center">
  HAPPY LEARNING !!</br>
  DEVELOPED WITH ❤️ BY SNEH KR 
</p>
