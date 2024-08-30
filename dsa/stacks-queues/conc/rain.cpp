class Solution {
public:
    int trap(vector<int>& h) {
        int n = h.size();
        int rain = 0;
        int lmax = 0, rmax = 0;
        int left = 0, right = n-1;

        while (left <= right) {
            if (h[left] < h[right]) {
                if (lmax > h[left]) {
                    rain += lmax - h[left];
                }
                else lmax = h[left];
                left++;
            }
            else {
                if (rmax > h[right]) {
                    rain += rmax - h[right];
                }
                else rmax = h[right];
                right--;
            }
        }       
        return rain;
    }
};