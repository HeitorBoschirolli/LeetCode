class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int number = 0;
        for (vector<int>::iterator it = nums.begin(); it != nums.end(); it++) {
            number ^= *it;
        }
        
        return number;
    }
};