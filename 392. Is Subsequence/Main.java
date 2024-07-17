// https://leetcode.com/problems/is-subsequence/description/
class Solution {
    public boolean isSubsequence(String s, String t) {
        int pos=0;
        if(s.isEmpty()) return true;
        for(int x=0; x<t.length(); x++)
        {
            if(s.charAt(pos) == t.charAt(x)) pos++;
            if(pos == s.length()) return true;
        }
        return false;
    }
}