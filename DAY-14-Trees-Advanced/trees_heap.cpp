#include <iostream>
#include <vector>

using namespace std;

class MaxHeap
{
private:
  vector<int> heap;

  // Get the index of the parent of a node
  int parent(int i)
  {
    return (i - 1) / 2;
  }

  // Get the index of the left child of a node
  int leftChild(int i)
  {
    return 2 * i + 1;
  }

  // Get the index of the right child of a node
  int rightChild(int i)
  {
    return 2 * i + 2;
  }

  // Heapify a subtree rooted with node i
  void heapify(int i)
  {
    int maxIndex = i;
    int left = leftChild(i);
    int right = rightChild(i);

    if (left < heap.size() && heap[left] > heap[maxIndex])
    {
      maxIndex = left;
    }

    if (right < heap.size() && heap[right] > heap[maxIndex])
    {
      maxIndex = right;
    }

    if (i != maxIndex)
    {
      swap(heap[i], heap[maxIndex]);
      heapify(maxIndex);
    }
  }

public:
  // Insert a key into the max heap
  void insert(int key)
  {
    heap.push_back(key);
    int i = heap.size() - 1;

    while (i > 0 && heap[parent(i)] < heap[i])
    {
      swap(heap[i], heap[parent(i)]);
      i = parent(i);
    }
  }

  // Extract the maximum element from the max heap
  int extractMax()
  {
    if (heap.empty())
    {
      cerr << "Heap is empty\n";
      return -1;
    }

    int root = heap[0];
    heap[0] = heap.back();
    heap.pop_back();
    heapify(0);

    return root;
  }

  // Print the elements of the max heap
  void printHeap()
  {
    for (int i = 0; i < heap.size(); ++i)
    {
      cout << heap[i] << " ";
    }
    cout << "\n";
  }
};

int main()
{
  // Sample usage of max heap
  MaxHeap maxHeap;
  maxHeap.insert(4);
  maxHeap.insert(10);
  maxHeap.insert(8);
  maxHeap.insert(5);
  maxHeap.insert(1);

  maxHeap.printHeap();

  cout << "Max element extracted: " << maxHeap.extractMax() << "\n";
  maxHeap.printHeap();

  return 0;
}
