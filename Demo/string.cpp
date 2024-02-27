def divide_string(s1, s2):
    result = []
    s1_set = set(s1)

    while s1:
        found = False
        for i in range(len(s1), 0, -1):
            substring = s1[:i]
            if substring in s2 or substring[::-1] in s2:
                result.append(substring)
                s1 = s1[i:]
                found = True
                break

        if not found:
            # If no substring is found, it's impossible to satisfy the conditions
            return "Impossible"

    return '|'.join(result)

# Example 1
s1_1 = "VaisHnavI"
s2_1 = "VIvekanandaJasHnavi"
result_1 = divide_string(s1_1, s2_1)
print(result_1)

# Example 2
s1_2 = "sudHanShu"
s2_2 = "qniwprvAvnaHSsH"
result_2 = divide_string(s1_2, s2_2)
print(result_2)

/*
#include <iostream>
#include <unordered_map>
#incl

// Function to find the minimum number of substrings in S1 such that all substrings
// are present in S2 and maximizing the length of each substring
string findSubstrings(const string& s1, const string& s2) {
    int n1 = s1.size();
    int n2 = s2.size();
    int i = n1;
    char temp[] = {0};
    int k = 0;
    while ( i >= 0){
        int j = n2;
        int count = 0;
        while (j >= 0){
            if (s1[i] == s2[j]){
                temp[k] = s2[j];
                i--;
                j--;
                k++;
                count++;
            }
        }
    }
    
    unordered_map<char, int> s2Count; // Count of each character in S2

    for (char ch : S2) {
        s2Count[ch]++;
    }
    string result;
    int i = 0;
    while (i < S1.size()) {
        int j = i;
        unordered_map<char, int> s1Count; // Count of each character in the current substring

        // Try to extend the current substring as much as possible
        while (j < S1.size() && (s1Count[S1[j]] < s2Count[S1[j]] || s2Count[S1[j]] == 0)) {
            s1Count[S1[j]]++;
            j++;
        }

        // Add the current substring to the result
        result += S1.substr(i, j - i);

        // Update the count of characters in S2
        for (int k = i; k < j; k++) {
            s2Count[S1[k]]--;
        }

        i = j;
    }

    return result;
}

int main() {
    string S1, S2;

    // Input strings
    cout << "Enter string S1: ";
    cin >> S1;
    cout << "Enter string S2: ";
    cin >> S2;

    // Find and display the result
    string result = findSubstrings(S1, S2);
    cout << "Result: " << result << endl;
*/
    return 0;
}
