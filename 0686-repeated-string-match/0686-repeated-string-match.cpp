class Solution {
public:
    int repeatedStringMatch(string a, string b) {
        int count = 1;
        string temp = a;

        while (temp.length() < b.length()) {
            temp += a;
            count++;
        }

        if (temp.find(b) != -1) {
            return count;
        }

        temp += a;
        if (temp.find(b) != -1) {
            return count + 1;
        }

        return -1;
    }
};