#include <bits/stdc++.h>
using namespace std;

void selectionSort(int n, int arr[]) {
  for (int i = 0; i < n - 1; i++) {
    int min = i;
    for (int j = i + 1; j < n; j++) {
      if (arr[min] > arr[j]) {
        min = j;
      }
    }
    int temp;
    temp = arr[i];
    arr[i] = arr[min];
    arr[min] = temp;
    // swap(arr[i], arr[min]);
  }
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
}

void bubbleSort(int n, int arr[]) {
  int didSwap = 0;
  for (int i = 0; i < n - 1; i++) {
    for (int j = 0; j < n - i - 1; j++) {
      if (arr[j] > arr[j + 1]) {
        swap(arr[j], arr[j + 1]);
        didSwap = 1;
      }
    }
    if (didSwap == 0) {
      break;
    }
  }
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
}

void insertionSort(int n, int arr[]) {
  for (int i = 0; i < n; i++) {
    int j = i;
    while (j > 0 && arr[j] < arr[j - 1]) {
      swap(arr[j], arr[j - 1]);
      j--;
    }
  }
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
}

int main() {
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  // selectionSort(n, arr);
  // bubbleSort(n, arr);
  insertionSort(n, arr);
}
