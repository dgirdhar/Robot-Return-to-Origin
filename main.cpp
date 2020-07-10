class Solution {
public:
    bool judgeCircle(string moves) {
        bool ret = false;
        int arr[26] = {0};
        
        for (int i = 0; i < moves.size(); ++i) {
            arr[moves[i] - 'A']++;
        }
                
        if (arr[20] == arr[3] && arr[11] == arr[17]) {
            ret = true;
        }
        
        return ret;
    }
};
