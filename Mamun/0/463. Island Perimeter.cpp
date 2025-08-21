class Solution
{
public:
    int islandPerimeter(vector<vector<int>> &grid)
    {

        int len = 0;
        int dx[4] = {1, 0, -1, 0};
        int dy[4] = {0, -1, 0, 1};

        for (int i = 0; i < grid.size(); i++)
        {
            for (int j = 0; j < grid[i].size(); j++)
            {
                if (grid[i][j] == 1)
                {
                    for (int k = 0; k < 4; k++)
                    {
                        int x = i + dx[k];
                        int y = j + dy[k];

                        if (x < 0 || x == grid.size() || y < 0 ||
                            y == grid[i].size() || grid[x][y] == 0)
                        {
                            len++;
                        }
                    }
                }
            }
        }

        return len;
    }
};