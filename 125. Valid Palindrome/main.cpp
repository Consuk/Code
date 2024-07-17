/*
https://leetcode.com/problems/valid-palindrome/description/
*/
class Solution {
public:
    bool isPalindrome(string s) {
        if(s.empty())
        {
            return true;
        }
        int right=s.size()-1, left=0;
        while(left<=right)
        {
            s[left] = tolower(s[left]);
            s[right] = tolower(s[right]); 
            if(((s[left]>='a' && s[left]<='z') || (s[left]>='0' && s[left]<='9')) && 
            ((s[right]>='a' && s   [right]<='z') || (s[right]>='0' && s[right]<='9')))
            {
                cout << s[left] << " " << s[right] <<endl;
                //ambas son letras
                if(s[left]!=s[right])
                {
                    return false;
                }
                left++;
                right--;
            }else if(!((s[left]>='a' && s[left]<='z') || (s[left]>='0' && s[left]<='9')))
            {
                left++;
            }else
            {
                right--;
            }
        }
        return true;
    }
};



/*for(int x=0; x<s.size(); x++)
        { 
            s[x] = tolower(s[x]);

            if(s[x]>=97 && s[x]<=122 && s[(s.size()-1) - x]>='a' && s[(s.size()-1) - x]<='z')
            {  
                int z = (s.size()-1) - x; 
                s[z] = tolower(s[z]);
                cout << x << " " << z << endl;
                cout << s[x] << " " << s[z] << endl;
                if(s[x]!=s[z])
                {
                    cout << "entra" << endl;
                    return false;
                }
                cont++;
            }
        }*/
/*

 for(int z=s.size()-1; z>0; z--)
            {
                if(s[x]>='A' || s[x]<='Z' || s[x]>='a' || s[x]<='z')
                {
                    if(s[z]>='A' || s[z]<='Z' || s[z]>='a' || s[z]<='z')
                    {
                        //es palindromo
                        if(s[x]==s[z])
                        {

                        }

                    }
                }
            }

*/