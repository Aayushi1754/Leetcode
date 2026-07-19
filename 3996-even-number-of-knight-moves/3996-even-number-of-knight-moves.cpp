class Solution {
public:
    bool canReach(vector<int>& start, vector<int>& target) {
        int c=0;
                                                                bool samecolour=((start[0]+start[1])%2)==((target[0]+target[1])%2);
        return samecolour;
        
    }
};