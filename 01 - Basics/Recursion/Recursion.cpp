#include <bits/stdc++.h>
using namespace std;

// Name n times
void name(int n) {
  if (n == 0)
    return;
  cout << "epsilon" << '\n';

  name(n - 1);
}

// 1 to n
void oneToN(int n, int m) {
  if (m > n)
    return;
  cout << m << '\n';
  oneToN(n, m + 1);
}

// n to 1
void nToOne(int n) {
  if (n <= 0)
    return;
  cout << n << '\n';
  nToOne(n - 1);
}

// one to n (Back Tracking)
void oneToNbyBackTrack(int n) {
  if (n <= 0)
    return;
  oneToNbyBackTrack(n - 1);
  cout << n << '\n';
}

// n to 1 (Back Tracking)
void nTo1ByBackTrack(int n, int m) {
  if (m > n)
    return;
  nTo1ByBackTrack(n, m + 1);
  cout << m << '\n';
}

// Sum of n (Paramaterized)
int sumOfN(int n, int sum) {
  if (n < 1)
    return sum;
  return sumOfN(n - 1, sum + n);
}

// Sum of n (Functional)
int sumofN(int n) {
  if (n == 0)
    return 0;
  return n + sumofN(n - 1);
}

// factorial of n (Paramaterized)
int Factorial(int n, int fact) {
  if (n < 1) {
    return fact;
  }
  return Factorial(n - 1, fact * n);
}

// factorial of n (Functional)
int factorial(int n) {
  if (n < 1)
    return 1;
  return n * factorial(n - 1);
}

// Reverse an array
void reverse(int i, int arr[], int n) {
  if (i >= n / 2)
    return;
  swap(arr[i], arr[n - i - 1]);
  reverse(i + 1, arr, n);
}

// Is palindrome or not
bool isPalindrome(string &s, int i) {
  if (i >= s.size() / 2)
    return true;
  if (s[i] != s[s.size() - i - 1])
    return false;
  return isPalindrome(s, i + 1);
}

// Is palindrome (leetcode)
bool ispalindrome(string s, int i) {
  if (i >= s.size() / 2)
    return true;
  if (s[i] != s[s.size() - i - 1])
    return false;
  return ispalindrome(s, i + 1);
}

// Fibonacci number
int fibonacci(int n) {
  if (n <= 1)
    return n;
  return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
  int n;
  cin >> n;

  // name(n);
  // oneToN(n, 1);
  // nToOne(n);
  // nTo1ByBackTrack(n, 1);
  // oneToNbyBackTrack(n);
  // cout << sumOfN(n, 0);
  // cout << sumofN(n);
  // cout << factorial(n);
  // cout << Factorial(n, 1);

  // int arr[n];
  // for (int i = 0; i < n; i++) cin >> arr[i];
  // reverse(0, arr, n);
  // for (int i = 0; i < n; i++) cout << arr[i] << " ";

  // string s, p;
  // getline(cin, s);
  // for (int i = 0; i < s.size(); i++) {
  //   if ((int)s[i] >= 97 && (int)s[i] <= 122)
  //     p.push_back(s[i]);
  //
  //   if ((int)s[i] >= 65 && (int)s[i] <= 90)
  //     p.push_back(s[i] + 32);
  // }
  // cout << ispalindrome(p, 0);

  cout << fibonacci(n);
}
