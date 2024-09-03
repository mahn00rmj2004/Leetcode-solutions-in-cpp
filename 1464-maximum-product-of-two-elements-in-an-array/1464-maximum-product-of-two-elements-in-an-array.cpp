class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int l1 = 0;
        int l2 = 0;
        for(int &number : nums) {
            if(number > l1) {
                l2 = l1;
                l1 = number;
            } else if(number > l2) {
                l2 = number;
            }
        }
        return (l1 - 1) * (l2 - 1);
    }
};
