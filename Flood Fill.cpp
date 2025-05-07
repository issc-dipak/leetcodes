class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int n = image.size();
        int m = image[0].size();
        int originalColor = image[sr][sc];

        if (originalColor == color) return image;

        queue<pair<int, int>> q;
        q.push({sr, sc});
        image[sr][sc] = color;

        int dx[] = {1, -1, 0, 0};
        int dy[] = {0, 0, 1, -1};

        while (!q.empty()) {
            auto [x, y] = q.front();
            q.pop();

            for (int i = 0; i < 4; ++i) {
                int newx = x + dx[i];
                int newy = y + dy[i];

            if (newx >= 0 && newx < n && newy >= 0 && newy < m && image[newx][newy] ==            originalColor) {
                    image[newx][newy] = color;
                    q.push({newx, newy});
                }
            }
        }

        return image;
    }
};
