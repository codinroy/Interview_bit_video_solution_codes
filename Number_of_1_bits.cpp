int Solution::numSetBits(unsigned int A) {
    int cnt=0;
    for(int i=0;i<32;i++){
        cnt+=(A & 1);
        A=A>>1;
    }
    return cnt;
}
