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