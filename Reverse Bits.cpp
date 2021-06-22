unsigned int Solution::reverse(unsigned int A) {
    unsigned int ans=0;//reverse number
    for(int i=0;i<32;i++){
        ans <<= 1;//make space for new bit
        ans |= (A & 1);//extract and store the new bit(right most)
        A >>= 1;//extract the next bit(i+1)
    }
    return ans;
}
