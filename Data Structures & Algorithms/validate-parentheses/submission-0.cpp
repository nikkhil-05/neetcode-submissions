#include <string>
#include <stack>

class Solution {
public:
    bool isValid(std::string s) {
        std::stack<char> record;

        for (char ch : s) {
            if (ch == '[' || ch == '(' || ch == '{') {
                record.push(ch);
            } else {
                if (record.empty()) return false;

                if ((ch == ')' && record.top() == '(') ||
                    (ch == '}' && record.top() == '{') ||
                    (ch == ']' && record.top() == '[')) {
                    record.pop();
                } else {
                    return false;
                }
            }
        }

        return record.empty();
    }
};
