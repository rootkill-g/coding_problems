#include <bits/stdc++.h>
#define MAX 100

void merge(short int a[], short int low, short int mid, short int high) {
  short int i, j, k, temp[MAX];

  k = low, j = mid + 1, i = low;

  while (i <= mid && j <= high) {
    if (a[i] >= a[j])
      temp[k++] = a[j++];
    else
      temp[k++] = a[i++];
  }

  while (i <= mid)
    temp[k++] = a[i++];

  while (j <= high)
    temp[k++] = a[j++];

  for (i = low; i <= high; i++)
    a[i] = temp[i];
}

void merge_sort(short int a[], short int low, short int high) {
  short int mid;

  if (low < high) {
    mid = (low + high) / 2;
    merge_sort(a, low, mid);
    merge_sort(a, mid + 1, high);
    merge(a, low, mid, high);
  }
}

int main() {
  std::ios_base::sync_with_stdio(0);
  std::cin.tie(0);
  std::cout.tie(0);

  short int t = 0, i = 0, j = 0;
  std::cin >> t;
  while (t--) {
    short int n = 0, c = 0, max = SHRT_MIN;
    std::cin >> n;
    short int arri[MAX], dept[MAX];

    for (i = 0; i < n; i++)
      std::cin >> arri[i];
    for (i = 0; i < n; i++)
      std::cin >> dept[i];

    merge_sort(arri, 0, n - 1);
    merge_sort(dept, 0, n - 1);

    for (i = 0, j = 0; i < n && j < n;) {
      if (dept[j] > arri[i]) {
        c++;

        if (c > max)
          max = c;

        i++;
      } else if (dept[j] == arri[i]) {
        i++;
        j++;
      } else {
        c--;
        j++;
      }
    }

    std::cout << max << '\n';
  }
}
