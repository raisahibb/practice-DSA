class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {

        int left = 0;
        int ones = 0;

        string ans = "";

        for (int right = 0; right < s.size(); right++) {

            // current character ko window me add karo
            if (s[right] == '1')
                ones++;

            // agar k se zyada 1 ho gaye
            while (ones > k) {
                if (s[left] == '1')
                    ones--;

                left++;
            }

            // starting ke extra 0 hatao
            while (ones == k && s[left] == '0') {
                left++;
            }

            // exactly k ones mil gaye
            if (ones == k) {

                string curr = s.substr(left, right - left + 1);

                // pehli valid string
                if (ans == "") {
                    ans = curr;
                }

                // shorter string
                else if (curr.length() < ans.length()) {
                    ans = curr;
                }

                // same length -> lexicographically smaller
                else if (curr.length() == ans.length() && curr < ans) {
                    ans = curr;
                }
            }
        }

        return ans;
    }
};