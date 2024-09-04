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