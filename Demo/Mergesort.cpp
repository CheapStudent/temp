#include <iostream>
using namespace std;
void merg(int arr[], int l, int r) {
  int mid = (l + r) / 2;
  int *temp = new int[r - l + 1];
  int i = l;
  int j = mid + 1;
  int k = 0;
  while (i <= mid && j <= r) {
    if (arr[i] >= arr[j]) {
      temp[k] = arr[j];
      k++;
      j++;
    } else {
      temp[k] = arr[i];
      i++;
      k++;
    }
  }
  while (i <= mid) {
    temp[k] = arr[i];
    i++;
    k++;
  }
  while (j <= r) {
    temp[k] = arr[j];
    k++;
    j++;
  }
  int m = 0;
  while (m < k) {
    arr[l + m] = temp[m];
    m++;
  }
  delete[] temp;
}
void mergeSort(int arr[], int l, int r) {
  if (l >= r)
    return;
  int mid = (l + r) / 2;
  mergeSort(arr, l, mid);
  mergeSort(arr, mid + 1, r);
  merg(arr, l, r);
}
int main (){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++){
        // int size = sizeof(arr)/sizeof(arr[0]);
    }
    int size = sizeof(arr)/sizeof(arr[0]);
    mergeSort(arr , 0 , size - 1 );
    for (int i = 0; i < size; i++){
        cout<< arr[i] <<" "; 
    }
    return 0;

}
// #include <iostream>
// using namespace std;

// void merge(int arr[], int st, int mid, int end) {
//     int n1 = mid - st + 1;
//     int n2 = end - mid;

//     int* leftArr = new int[n1];
//     int* rightArr = new int[n2];

//     for (int i = 0; i < n1; ++i)
//         leftArr[i] = arr[st + i];
//     for (int j = 0; j < n2; ++j)
//         rightArr[j] = arr[mid + 1 + j];

//     int i = 0, j = 0, k = st;

//     while (i < n1 && j < n2) {
//         if (leftArr[i] <= rightArr[j]) {
//             arr[k] = leftArr[i];
//             ++i;
//         } else {
//             arr[k] = rightArr[j];
//             ++j;
//         }
//         ++k;
//     }

//     while (i < n1) {
//         arr[k] = leftArr[i];
//         ++i;
//         ++k;
//     }

//     while (j < n2) {
//         arr[k] = rightArr[j];
//         ++j;
//         ++k;
//     }

//     delete[] leftArr;
//     delete[] rightArr;
// }

// void mergeSort(int arr[], int st, int end) {
//     if (st < end) {
//         int mid = st + (end - st) / 2;

//         mergeSort(arr, st, mid);
//         mergeSort(arr, mid + 1, end);

//         merge(arr, st, mid, end);
//     }
// }

// int main() {
//     int arr[] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
//     int arrSize = sizeof(arr) / sizeof(arr[0]);

//     mergeSort(arr, 0, arrSize - 1);

//     cout << "Sorted array: ";
//     for (int i = 0; i < arrSize; ++i) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     return 0;
// }
