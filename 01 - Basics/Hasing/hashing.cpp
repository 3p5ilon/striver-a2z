#include <bits/stdc++.h>
using namespace std;

// Brute force: O(n) per query
int countOccurrences(int n, int arr[], int num) {
  int count = 0;
  for (int i = 0; i < n; i++) {
    if (arr[i] == num) {
      count++;
    }
  }
  return count;
}

// using hashing
void countOccurrencesHash(int m, int hash[]) {
  while (m--) {
    int num;
    cin >> num;
    cout << hash[num] << endl;
  }
}

// count lowercase alphabets; hash[256] can be used for all ASCII char
void countAlphabet(int m, int hash[]) {
  while (m--) {
    char ch;
    cin >> ch;
    cout << hash[ch - 'a'] << endl;
  }
}

// count num using map
void countUsingMap(int m, unordered_map<int, int> &mp) {
  while (m--) {
    int num;
    cin >> num;
    cout << mp[num] << endl;
  }
}

// Count frequencies of array elements
void countFrequencies(vector<int> &v) {
  unordered_map<int, int> mp;
  for (auto it : v) {
    mp[it]++;
  }
  for (auto it : mp) {
    cout << it.first << " " << it.second << endl;
  }
}

int main() {
  // int n;
  // cin >> n;
  // int arr[n], num;
  // for (int i = 0; i < n; i++) {
  //   cin >> arr[i];
  // }
  // cin >> num;
  // cout << countOccurrences(n, arr, num);

  // int n;
  // cin >> n;
  // int arr[n], m;
  // int hash[15] = {0};
  // for (int i = 0; i < n; i++) {
  //   cin >> arr[i];
  //   hash[arr[i]]++;
  // }
  // cin >> m;
  // countOccurrencesHash(m, hash);

  // string s;
  // int m, hash[26] = {0};
  // cin >> s >> m;
  // for (int i = 0; i < s.size(); i++) {
  //   hash[s[i] - 'a']++;
  // }
  // countAlphabet(m, hash);

  // int n, m;
  // cin >> n;
  // int arr[n];
  // for (int i = 0; i < n; i++) {
  //   cin >> arr[i];
  // }
  // cin >> m;
  // unordered_map<int, int> mp;
  // for (int i = 0; i < n; i++) {
  //   mp[arr[i]]++;
  // }
  // countUsingMap(m, mp);

  vector<int> v;
  int n;
  while (cin >> n) {
    v.push_back(n);
  }
  countFrequencies(v);
}
