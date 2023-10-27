class Solution {
public:
    bool isValid(string s) {
        return isvalid(0,s.size()-1,s);
        
    }
    private:
        bool isvalid(int i,int j,string& s){
            if (i==j+1) return true;
            if(s[i]==')' || s[i]==']' || s[i]=='}')return false;
            int k=findmatch(i,j,s);
            if (k==j+1)return false;
            if(isvalid(i+1,k-1,s)==false) return false;
            if(isvalid(k+1,j,s)==false) return false;
            return true;


        }
    private:
        int findmatch(int i,int j,string& s){
            int pending=0;
            int k=i+1;
            while(k<=j){
                if (s[k]==s[i])pending++;
                else if((s[i]=='(' && s[k]==')' )||( s[i]=='{' && s[k]=='}')||
                ( s[i]=='[' && s[k]==']')){
                    if(pending>0)pending--;
                    else return k;
                }
                k++;
            }
            return k;
        }
};