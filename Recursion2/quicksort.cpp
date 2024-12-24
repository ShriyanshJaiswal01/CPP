#include <iostream>
using namespace std;

int pivotindex(int arr[], int s, int e)
{
  int pivot = arr[s];
  int cnt = 0;
  for (int i = s + 1; i <= e; i++)
  {
    if (arr[i] <= pivot)
    {
      cnt++;
    }
  }
  int pi = s + cnt;
  swap(arr[pi], arr[s]);

  int i = s, j = e;

  while (i < pi && j > pi)
  {
    while (arr[i] <= pivot)
    {
      i++;
    }
    while (arr[j] >pivot)
    {
      j--;
    }
    if (i < pi && j > pi)
    {
      swap(arr[i++], arr[j--]);
    }
  }
  return pi;
}

void quicksort(int arr[], int s, int e)
{
  if (s >= e)
  {
    return;
  }
  int p = pivotindex(arr, s, e);
  quicksort(arr, s, p - 1);
  quicksort(arr, p + 1, e);
}

int main()
{
  int arr[7] = {7,8,4,9,10,2,3};
  int size = 7;
  quicksort(arr, 0, 6);
  for (int i = 0; i < 7; i++)
  {
    cout << arr[i] << " ";
  }
  return 0;
}