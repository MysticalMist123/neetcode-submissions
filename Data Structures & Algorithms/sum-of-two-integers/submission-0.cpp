class Solution {
public:
    int getSum(int a, int b) {
        int sum = 0;
        int curr_carry = 0;
        for(int i=0;i<32;i++){
            int b1 = ((a>>i)&1);
            int b2 = ((b>>i)&1);
            int s = (curr_carry^b1^b2);
            curr_carry = ((curr_carry & (b1 ^ b2)) | (b1 & b2));

            sum = sum | (s<<i);
            
        }
        return sum;
    }
};
