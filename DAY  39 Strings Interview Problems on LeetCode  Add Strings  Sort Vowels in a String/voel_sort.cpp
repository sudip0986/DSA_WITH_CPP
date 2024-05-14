#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    // Input string
    string s;
    cout << "Enter a string: ";
    cin >> s;

    // Vector to store vowels
    vector<char> temp;
    for (int i = 0; i < s.size(); i++) {
        // Check if character is a vowel (both lowercase and uppercase)
        if (s[i]== 'a' || s[i]== 'e' || s[i]=='o' || s[i]=='i' || s[i]=='u' || 
            s[i]=='A' || s[i]=='E' || s[i]== 'I' || s[i]== 'O' || s[i]== 'U' ) {
            temp.push_back(s[i]); // Store vowels
        }
    }

    // Sort vowels
    sort(temp.begin(), temp.end());

    // Replace vowels in original string with sorted vowels
    int count = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i]== 'a' || s[i]== 'e' || s[i]=='o' || s[i]=='i' || s[i]=='u' || 
            s[i]=='A' || s[i]=='E' || s[i]== 'I' || s[i]== 'O' || s[i]== 'U' ) {
            s[i] = temp[count]; // Replace vowel in s with sorted vowel from temp
            count++; // Move to the next vowel in temp
        }
    }

    // Print modified string
    cout << "Modified string: " << s << endl;
    
    // Print sorted vowels
    cout << "Sorted vowels: ";
    for(int i = 0; i < temp.size(); i++)
        cout << temp[i] << " ";
    
    return 0;
}
