class Solution { 
private: 
    
    bool check_palimdrome(string s){
        int i = 0; 
        int j = s.length() - 1;

        while(i < j){
            if(s[i] != s[j]){
                return false;
            } 
            i++;
            j--;
        } 
        return true;
    }

public:
    bool validPalindrome(string s) { 

        if(check_palimdrome(s) == true){
            return true;
        }
        else{
            int i = 0;
            int j = s.length() - 1;

            while(i < j){
                if(s[i] == s[j]){
                    i++;
                    j--;
                }
                else{
                    // delete char at ith index
                    string temp1 = s;
                    temp1.erase(i,1); 

                    // delete char at jth index
                    string temp2 = s; 
                    temp2.erase(j,1); 

                    if(check_palimdrome(temp1) || check_palimdrome(temp2)){
                        return true;
                    }

                    return false;
                }
            }
        }

        return false;
    }
};