class Solution {
    public int mostWordsFound(String[] sentences) {
        int max_words = Integer.MIN_VALUE;
        for (String sentence : sentences) {
            int counted_words = sentence.split(" ").length;
            if (counted_words > max_words) {
                max_words = counted_words;
            }
        }
        return max_words;
    }
}