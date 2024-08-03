#include <bits/stdc++.h>
using namespace std;

int main() {
    int total = 0, entry;
    deque<int> last;

    while (true) {
        cout << "Enter expense: ";
        cin >> entry;
        if (entry == 0) break;

        total += entry;
        last.push_front(entry);
        if (last.size() > 3) last.pop_back();

        cout << "Total: " << total << ", Last entries: ";
        for (int e : last) cout << e << " ";
        cout << endl;
    }
}