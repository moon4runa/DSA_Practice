class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> output;
        int n = matrix.size();
        int m = matrix[0].size();

        int fr = 0, fc = 0, lr = n-1, lc = m-1;
        while(fr<=lr && fc<=lc){
            // print fr: fc->lc
            for(int i=fc; i<=lc; i++){
                output.push_back(matrix[fr][i]);
            }
            fr+=1;
            // print lc: fr->lr
            for(int i=fr; i<=lr; i++){
                output.push_back(matrix[i][lc]);
            }
            lc-=1;

            // print lr: lc->fc
            if(lr>=fr){
            for(int i=lc; i>=fc; i--){
                output.push_back(matrix[lr][i]);
            }
            lr-=1;
            }
            // print fc: lr->fr
            if(lc>=fc){
            for(int i=lr; i>=fr; i--){
                output.push_back(matrix[i][fc]);
            }
            fc+=1;
            }
        }
        return output;


    }
};
