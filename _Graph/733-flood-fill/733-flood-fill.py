class Solution:
    def floodFill(self, image: List[List[int]], sr: int, sc: int, newColor: int) -> List[List[int]]:
        R = len(image)
        C = len(image[0])
        color = image[sr][sc]
        if color == newColor: return image
        def ff(sr, sc):
            if image[sr][sc] == color:
                image[sr][sc] = newColor 
                if sr >=1: ff(sr-1, sc)
                if sr+1 < R: ff(sr+1, sc)
                if sc >=1: ff(sr, sc-1)
                if sc+1 < C: ff(sr, sc+1)
        ff(sr, sc)
        return image
            