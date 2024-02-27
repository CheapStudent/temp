#include <iostream>
#include <string>

using namespace std;

bool isSubstringPresent(const string& substring, const string& s2) {
    return (s2.find(substring) != string::npos) || (s2.find(string(substring.rbegin(), substring.rend())) != string::npos);
}

string divideString(const string& s1, const string& s2) {
    string result;
    string remaining = s1;

    while (!remaining.empty()) {
        bool found = false;

        for (int i = remaining.size(); i > 0; --i) {
            string substring = remaining.substr(0, i);

            if (isSubstringPresent(substring, s2) || isSubstringPresent(string(substring.rbegin(), substring.rend()), s2)) {
                result += substring + '|';
                remaining.erase(0, i);
                found = true;
                break;
            }
        }

        if (!found) {
            return "Impossible";
        }
    }

    // Remove the trailing '|'
    result.pop_back();

    return result;
}

int main() {
    // Example
    string s1 = "vanaja";
    string s2 = "rvanpnaja";

    // Call the function and display the result
    string result = divideString(s1, s2);

    cout << "Result: " << result << endl;

    return 0;
}
