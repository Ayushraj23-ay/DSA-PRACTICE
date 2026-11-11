
class Solution {
public:
    long long minimumCost(int cost1, int cost2, int costBoth, int need1, int need2) {
        long long a = (long long)need1 * cost1 + (long long)need2 * cost2;
        int mini = min(need1, need2);
        int maxi = max(need1, need2);
        long long b = (long long)mini * costBoth
                    + (long long)(need1 - mini) * cost1
                    + (long long)(need2 - mini) * cost2;

        long long c = (long long)maxi * costBoth;
        long long d = min(b,c);

        return min(a, d);
    }
};
