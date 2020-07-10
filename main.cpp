class Solution {
public:
    bool judgeCircle(string moves) {
        bool ret = false;
        int uCount = 0;
        int dCount = 0;
        int lCount = 0;
        int rCount = 0;
        
        for (int i = 0; i < moves.size(); ++i) {
            switch(moves[i]) {
                case 'U':
                    uCount++;
                    break;
                case 'D':
                    dCount++;
                    break;
                case 'R':
                    rCount++;
                    break;
                case 'L':
                    lCount++;
                    break;
                default:
                    break;
            };
        }
        if (uCount == dCount && lCount == rCount) {
            ret = true;
        }
        
        return ret;
    }
};
