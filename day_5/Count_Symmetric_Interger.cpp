class Solution {
public:
    bool isSym(int n) {
        int temp = n;
        
        int size = 0;
        while (temp != 0) {
            temp /= 10;
            size++;
        }

        if (size % 2 == 1)
            return false;
        int mid = size / 2;
        int lsum = 0, rsum = 0;
        while (n != 0) {
            int rem = n % 10;
            if (mid != 0) {
                rsum += rem;
                mid--;
            } else {
                lsum += rem;
            }
            n /= 10;
        }
        return lsum == rsum;
    }
    int countSymmetricIntegers(int low, int high) {
        int count = 0;
        for (int i = low; i <= high; i++) {
            if (isSym(i) == true)
                count++;
        }
        return count;
    }
};