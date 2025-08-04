#include <iostream>
#include <string>

using namespace std;

int main() {
  string str;
  cout << "Enter a string: ";
  cin >> str;

  // Initialize an array to store the frequencies of each character
  int freq[26] = {0};

  // Iterate over the string and increment the frequency of each character
  for (char c : str) {
    freq[c - 'a']++;
  }

  // Print the frequencies of each character
  for (int i = 0; i < 26; i++) {
    if (freq[i] > 0) {
      cout << char(i + 'a') << ": " << freq[i] << endl;
    }
  }

  return 0;
}
