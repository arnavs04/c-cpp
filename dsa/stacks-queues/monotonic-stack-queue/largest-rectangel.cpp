class Solution {
public:
    vector<int> findNSE(vector<int>& arr, int n) {
        stack<int> st;
        vector<int> nse(n, n);

        for (int i = n - 1; i >= 0; i--) {
            while (!st.empty() && arr[st.top()] >= arr[i]) {
                st.pop();
            }
            if (!st.empty()) nse[i] = st.top();
            st.push(i);
        }
        return nse;
    }

    vector<int> findPSE(vector<int>& arr, int n) {
        stack<int> st;
        vector<int> pse(n, -1);

        for (int i = 0; i < n; i++) {
            while (!st.empty() && arr[st.top()] >= arr[i]) {
                st.pop();
            }
            if (!st.empty())
                pse[i] = st.top();
            st.push(i);
        }
        return pse;
    }

    // int largestRectangleArea(vector<int>& heights) {
    //     int max_area = 0;
    //     int n = heights.size();

    //     vector<int> nse = findNSE(heights, n);
    //     vector<int> pse = findPSE(heights, n);

    //     for (int i = 0; i < n; i++) {
    //         max_area = max(max_area, (nse[i] - pse[i] - 1) * heights[i]);
    //     }
    //     return max_area;
    // }

    int largestRectangleArea(vector<int>& heights) {
        stack<int> st;
        int max_area = 0, n = heights.size();
        for (int i = 0; i <= n; i++) {
            while (!st.empty() && (i == n || heights[st.top()] >= heights[i])) {
                int h = heights[st.top()];
                st.pop();
                int w = st.empty() ? i : i - st.top() - 1;
                max_area = max(max_area, h * w);
            }
            st.push(i);
        }
        return max_area;
    }
};