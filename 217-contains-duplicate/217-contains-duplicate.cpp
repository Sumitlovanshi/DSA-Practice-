class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> st;
        for(int i:nums){
            if(st.find(i) != st.end()){
                return true;
            }
            else{
                st.insert(i);
            }
        }
        return false;
    }
};