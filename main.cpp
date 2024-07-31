//brute force 

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> st;
        int index = 0;
        for(int i=0;i<nums.size();i++){
            st.insert(nums[i]);
        }
        for(auto it:st){
            nums[index] = it;
            index++;
        }
        return index;
    }
};


//optimized solution

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i = 0;
        for(int j = 1;j<nums.size();j++){
            if(nums[j]!=nums[i]){
                nums[i+1]=nums[j];
                i++;
            }
        }
        return i+1;
    }
};
