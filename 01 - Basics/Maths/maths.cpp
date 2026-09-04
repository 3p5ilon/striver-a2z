#include <bits/stdc++.h>
using namespace std;

int countDigits(int n) {
  int count = 0;
  while (n > 0) {
    // int lastNum = n % 10;
    n /= 10;
    count++;
  }
  return count;
}

int reverseNumber(int n) {
  long long rev = 0;
  while (n != 0) {
    int digit = n % 10;
    rev = rev * 10 + digit;
    n /= 10;
  }
  if (rev > INT_MAX || rev < INT_MIN)
    return 0;
  return rev;
}

bool isPalindrome(int n) {
  if (n < 0 || (n != 0 && n % 10 == 0))
    return false;
  int rev = 0;
  while (n > rev) {
    int digit = n % 10;
    rev = rev * 10 + digit;
    n /= 10;
  }
  return n == rev || n == rev / 10;
}

int GCDofNum(int n1, int n2) {
  // Brute force is O(min(n1, n2)); using Euclidean algorithm: O(log n).

  // for (int i = min(n1, n2); i >= 1; i--) {
  //   if (n1 % i == 0 && n2 % i == 0) {
  //     return i;
  //     break;
  //   }
  // }

  while (n1 > 0 && n2 > 0) {
    if (n1 > n2)
      n1 = n1 % n2;
    else
      n2 = n2 % n1;
  }
  if (n1 == 0)
    return n2;
  else
    return n1;
}

bool isArmstrong(int n) {
  int sum = 0;
  int tmp = n;
  int digit = 0;
  while (tmp > 0) {
    digit++;
    tmp /= 10;
  }

  tmp = n;
  while (tmp > 0) {
    int lastNum = tmp % 10;
    int pow = 1;
    for (int i = 0; i < digit; i++) {
      pow *= lastNum;
    }
    sum += pow;
    tmp /= 10;
  }
  return n == sum;
}

void printAllDivisor(int n) {
  // Not using set even it is sorted, as set insert is O(log n),
  // while vector push_back is O(1) amortized.
  vector<int> v;
  for (int i = 1; i * i <= n; i++) {
    if (n % i == 0) {
      v.push_back(i);
      if (n / i != i)
        v.push_back(n / i);
    }
  }
  sort(v.begin(), v.end());
  for (auto it : v) {
    cout << it << " ";
  }
}

bool primeNumber(int n) {
  int count = 0;
  for (int i = 1; i * i <= n; i++) {
    if (n % i == 0) {
      count++;
      if (n / i != i)
        count++;
    }
  }
  return count == 2;
}

int main() {
  int n;
  cin >> n;
  // cout << countDigits(n);
  // cout << reverseNumber(n);
  // cout << isPalindrome(n);
  // cout << GCDofNum(n1, n2);
  // cout << isArmstrong(n);
  // printAllDivisor(n);
  // cout << primeNumber(n);
}
