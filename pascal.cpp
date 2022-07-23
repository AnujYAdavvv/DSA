class Solution {
public:
    vector<vector<int>> generate(int n) {
        
        vector<vector<int>> res;
        // vector<int> ans;
        int dp[n][n];
        for(int i=0;i<n;i++){
            for(int j=0;j<=i;j++){
                dp[i][0]=1;
                if(i==j)dp[i][j]=1;
            }
            
        }
        for(int i=2;i<n;i++){
            for(int j=1;j<i;j++){
                
                dp[i][j]=dp[i-1][j-1]+dp[i-1][j];
                
                
            }
            
        }
        vector<int> ans;
        for(int i=0;i<n;i++){
            ans.clear();
            
            for(int j=0;j<=i;j++){
                ans.push_back(dp[i][j]);
            }
            
            res.push_back(ans);
        }
        
        return res;
        
            
        
        
//         for(int i=1;i<n;i++){
//             for(int j=0;j<i;j++){
//                 if(dp[i][j]!=1){
//                     dp[i][j]=dp[i+1][j-1]+dp[i-1][j+1];
                    
//                 }
//             }
//         }
        
        
        
        
        
        
        
    }
};