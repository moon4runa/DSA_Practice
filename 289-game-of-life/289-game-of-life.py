class Solution:
    def gameOfLife(self, board: List[List[int]]) -> None:
        """
        Do not return anything, modify board in-place instead.
        """
        # Updated
        # 0 -> Not updated
        # 1 -> Not updated
        # 2 -> Updated(before it was zero)
        # 3 -> Updated(befoer it was one)
        
        
        res = []
        m = len(board)
        n = len(board[0])
        for i in range(len(board)):
            res.append([0]*len(board[0]))
        for i in range(len(board)):
            for j in range(len(board[0])):
                c = 0
                if i+1 < m:
                    if board[i+1][j] == 1 or board[i+1][j] == 3:
                        c += 1
                    if j+1 < n:
                        if board[i+1][j+1] == 1 or board[i+1][j+1] == 3:
                            c += 1
                    if j-1 >=0:
                        if board[i+1][j-1] == 1 or board[i+1][j-1] == 3:
                            c += 1
                if i-1 >= 0:
                    if board[i-1][j] == 1 or board[i-1][j] == 3:
                        c += 1
                    if j-1 >= 0:
                        if board[i-1][j-1] == 1 or board[i-1][j-1] == 3:
                            c += 1
                    if j+1 < n:
                        if board[i-1][j+1] == 1 or board[i-1][j+1] == 3:
                            c += 1 
                if j+1 < n:
                    if board[i][j+1] == 1 or board[i][j+1] == 3:
                        c += 1
                if j-1 >= 0:
                    if board[i][j-1] == 1 or board[i][j-1] == 3:
                        c+=1
                
                if board[i][j] == 1:
                    if c < 2:
                        board[i][j] = 3
                    if c == 2 or c == 3:
                        board[i][j] = 1
                    if c > 3:
                        board[i][j] = 3 
                else:
                    if c == 3:
                        board[i][j] = 2
        
        for i in range(len(board)):
            for j in range(len(board[0])):
                if board[i][j] == 3:
                    board[i][j] = 0 
                if board[i][j] == 2:
                    board[i][j] = 1
            
                    