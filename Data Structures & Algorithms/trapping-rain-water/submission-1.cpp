class Solution {
public:
    int trap(vector<int>& height) {
        int l = 0;
        int r = height.size()-1;
        int mL = 0;
        int mR = 0;
        int ans = 0;
        while(l<r){
            if(mL < height[l]){
                mL = height[l];
            }
            ans+=mL - height[l];

            if(mR<height[r]){
                mR = height[r];
            }
            ans+=mR-height[r];

            if(height[l]<height[r]){
                l++;
            }else{
                r--;
            }
        }
        return ans;
    }
};
