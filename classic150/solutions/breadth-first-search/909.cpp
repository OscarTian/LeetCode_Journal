class Solution {
public:
    int snakesAndLadders(vector<vector<int>>& board) {
        int n = board.size();
        queue<int> q;
        vector<bool> visited(n * n + 1, false);
        q.push(1);
        visited[1] = true;
        int steps = 0;
        while (!q.empty()) {
            int size = q.size();
            for (int i = 0; i < size; ++i) {
                int curr = q.front(); q.pop();
                if (curr == n * n) return steps;
                for (int step = 1; step <= 6; ++step) {
                    int next = curr + step;
                    if (next > n * n) break;
                    int idx = next - 1;
                    int r = idx / n;
                    int row = n - 1 - r;
                    int col;
                    if (r % 2 == 0) {
                        col = idx % n;
                    } else {
                        col = n - 1 - (idx % n);
                    }
                    int dest = next;
                    if (board[row][col] != -1) {
                        dest = board[row][col];
                    }
                    if (!visited[dest]) {
                        visited[dest] = true;
                        q.push(dest);
                    }
                }
            }
            ++steps;
        }
        return -1;
    }
};
