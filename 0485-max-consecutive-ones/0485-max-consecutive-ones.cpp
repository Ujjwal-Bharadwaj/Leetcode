class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int c=0;
        int max_c=0;

        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                c++;
            }else{
                c=0;
            }
            max_c=max(max_c,c);
        }
        return max_c;
        
    }
};