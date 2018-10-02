class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for(int i=0;i<nums.size();i++){
            int re=target-nums[i];
            for(int j=i+1;j!=nums.size();j++){
                if(re==nums[j]){
                    vector<int> r(2);
                    r[0]=i;
                    r[1]=j;
                    return r;
                }
            }
        }
    }

};