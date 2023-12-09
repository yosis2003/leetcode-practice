class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> answer;
        bool found = false;
        for (int i = 0; i <= nums.size()-1; i++){
            for(int j = 0; j <= nums.size()-1; j++){
                if (nums[j] + nums[i] == target && i != j){
                    answer.push_back(j);
                    answer.push_back(i);
                    return(answer);
                }
            }
        }
        cout << nums.size() << endl;
        return(answer);
    }
};
