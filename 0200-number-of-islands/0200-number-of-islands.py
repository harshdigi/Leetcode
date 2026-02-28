from typing import List

class Solution:
    def dfs(self, grid: List[List[str]], node, visited):
        r, c = node
        rows = len(grid)
        cols = len(grid[0]) if rows > 0 else 0

        # 1. Corrected boundary check (c >= cols) 
        # 2. Added check for water: Only traverse if it's '1'
        if r < 0 or r >= rows or c < 0 or c >= cols or grid[r][c] == '0' or node in visited:
            return
        
        visited.add(node)

        directions = [(-1,0), (1,0), (0,-1), (0,1)]

        for dr, dc in directions:
            nextNode = (r + dr, c + dc)
            # 3. Use self.dfs to call the method correctly
            self.dfs(grid, nextNode, visited)
            
    def numIslands(self, grid: List[List[str]]) -> int:
        if not grid:
            return 0
            
        rows = len(grid)
        cols = len(grid[0])
        visited = set()
        count = 0
        
        # 4. Iterate through every cell in the grid
        for r in range(rows):
            for c in range(cols):
                # 5. If land is found and hasn't been visited, it's a new island
                if grid[r][c] == '1' and (r, c) not in visited:
                    count += 1
                    self.dfs(grid, (r, c), visited)
                    
        return count
