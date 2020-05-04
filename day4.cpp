class Solution {
public:
    int findComplement(int num) {
        
        int temp = log2(num) + 1;
        for(int i=0 ; i<temp ; i++)
        {
           num = num^(1<<i);   
        }
        return num ;   
    }
};