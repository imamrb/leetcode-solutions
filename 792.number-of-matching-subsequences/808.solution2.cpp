class Solution {
public:
    const int MAX = (int)5 * 1e4;
    
    int numMatchingSubseq(string s, vector<string>& words) {
        vector<vector<int>> occIndex(26);
        int occ[26] = { 0 };
                
        int c_occ, ascii;
        int s_len = s.length();
        
        for(int i=0; i < s_len; i++) {
            ascii = s[i] - 97;

            occIndex[ascii].push_back(i);
        }
        
        int w_len = words.size();
        int cnt = 0;

        for(int i = 0; i < w_len; i++) {
            string curr_w = words[i];
            int curr_len = curr_w.length();

            int x, low_b = 0, curr_lowb = 0, occLen;

            for(x = 0; x < curr_len; x++) {
                ascii = curr_w[x] - 97;
                occLen = occIndex[ascii].size();
                
                low_b = lower_bound(occIndex[ascii].begin(), occIndex[ascii].end(), curr_lowb) - occIndex[ascii].begin();
                
                if(low_b >= occLen || occIndex[ascii][low_b] < curr_lowb) break;
                else curr_lowb = occIndex[ascii][low_b] + 1;
            }
            
            if ( x == curr_len) cnt++;
        }
        
        return cnt;
    }
};