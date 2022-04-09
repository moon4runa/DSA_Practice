def dfs(grid, row, col):
        if row < 0 or col < 0 or row >= len(grid) or col >= len(grid[0]) or grid[row][col] == '0':
            return 
        grid[row][col] = '0'
        dfs(grid, row+1, col)
        dfs(grid, row-1, col)
        dfs(grid, row, col+1)
        dfs(grid, row, col-1)

class Solution:
    def numIslands(self, grid: List[List[str]]) -> int:
        if not grid:
            return 0 
        count = 0
        for row in range(len(grid)):
            for col in range(len(grid[0])):
                if grid[row][col] == '1':
                    dfs(grid, row, col)
                    count += 1
        return count 

   