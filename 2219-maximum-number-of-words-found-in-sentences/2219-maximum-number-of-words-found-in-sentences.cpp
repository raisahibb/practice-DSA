class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int max_words = INT_MIN;
        for(string sentence : sentences)
        {
            int words = 1;
            for(int i = 0; i < sentence.length(); i++)
            {
                if(sentence[i] == ' ')
                {
                    words++;
                }
            }
            max_words = max(max_words, words);
        }
        return max_words;
    }
};