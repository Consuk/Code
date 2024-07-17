// https://leetcode.com/problems/valid-palindrome/description/
class Solution {
    public boolean isPalindrome(String s) {
        if(s.isEmpty()) return true;
        int r = s.length()-1, l = 0;
        s = s.toLowerCase();
        while(l<=r)
        {
            if( ( (s.charAt(l) >= 'a' && s.charAt(l) <= 'z') || ( s.charAt(l)>='0' && s.charAt(l)<='9' ) )  
            && ( (s.charAt(r) >= 'a' && s.charAt(r) <= 'z') || ( s.charAt(r)>='0' && s.charAt(r)<='9' ) ) )
            {
                if(s.charAt(l) != s.charAt(r)) return false;
                l++;
                r--;
            }else if(!( (s.charAt(l) >= 'a' && s.charAt(l) <= 'z') || ( s.charAt(l)>='0' && s.charAt(l)<='9' ) )  ) l++;
            else r--;
        }
        return true;
    }
}