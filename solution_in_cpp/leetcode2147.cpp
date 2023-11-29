class Solution {
public:
    int numberOfWays(string corridor) {
        long long int count=0,answer=1;
        int first=0,second=0;
       for(int i=0;i<corridor.size();i++){
           if(corridor[i]=='S')first++;
           //if(first>2)break;
       }
       if(first&1 || first==0)return 0;
        for(int i=0;i<corridor.size();i++){
            if(corridor[i]=='S')second++;
            if(second==2){
                i++;
                count=1;
                while(corridor[i]!='S' && i<corridor.size()){
                    count++;
                    i++;
                }
                second=1;
            if(i<corridor.size())
            answer=(answer*count)%1000000007;
            }
        }
        return answer;
    }
};
class Solution2 {
public:
    int numberOfWays(string corridor) {
        int S = 0;
        long long ways = 1, nextWays=1;
        for(char c : corridor) if(c=='S') S++;
        if(S&1 || S==0) return 0;
        S=0;
        for(int i = 0; i<corridor.size(); i++) {
            if(corridor[i]=='S' && S<2) S++;
            if(S==2) {
                i++;
                while(i<corridor.size() && corridor[i]!='S') {
                    nextWays++;
                    i++;
                }
                S=1;
                if(i<corridor.size()) ways = (ways*nextWays)%(long long)(pow(10, 9) + 7);
                nextWays=1;
            }
        }
        return ways;
    }
};
class Solution3 {
public:
    int numberOfWays(string corridor) {
        int chairs = 0;
        long long result = 1;

        for (int i = 0; i < corridor.size(); i++) {
            if (corridor[i] == 'S') {
                chairs++;

                while (++i < corridor.size() && corridor[i] != 'S');
                if (i < corridor.size() && corridor[i] == 'S') {
                    chairs++;
                }

                int divisions = 1;
                while (++i < corridor.size() && corridor[i] != 'S') {
                    divisions++;
                }

                if (divisions > 1 && i < corridor.size()) {
                    result = (result * divisions) % 1000000007;
                }
                i--;
            }
        }

        return (chairs != 0 && chairs % 2 == 0) ? static_cast<int>(result) : 0;
    
    }
};