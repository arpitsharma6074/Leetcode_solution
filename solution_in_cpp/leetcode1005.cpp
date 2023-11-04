class Solution {
public:
    int largestSumAfterKNegations(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        vector<int>positive;
        vector<int>negative;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<0){
                negative.push_back(nums[i]);
            }
            else{
                positive.push_back(nums[i]);
            }
        }
        if(positive.size()==nums.size() && positive[0]==0){
            return sum2(positive);
        }
        else if(positive.size()==nums.size() && positive[0]!=0){
            if(k%2==0){
                return sum2(positive);
            }
            else{
                
                return sum2(positive) -(2* positive[0]);
            }
        }
        else {
            if(k>negative.size()){
                int dif=k-negative.size();
                for(int i=0;i<negative.size();i++){
                    negative[i]=negative[i]*-1;
                }
                if(dif%2==0){
                    return (sum2(positive)+sum2(negative));
                }
                else{
                    if(positive.size()==0)
                    return (sum2(negative)+sum2(positive))-2*negative[negative.size()-1];               else
                return (sum2(negative)+sum2(positive))-min(2*positive[0],2*negative[negative.size()-1]);
                }
            }
            else{
                for(int i=0;i<k;i++){
                    negative[i]=negative[i]*-1;
                
                }
                return (sum2(negative)+sum2(positive));
            }
        }
    }
private:
    int sum2(vector<int>& arr){
        int sum1=0;
        for( int i=0;i<arr.size();i++){
            sum1+=arr[i];
        }
    return sum1;
    }
};