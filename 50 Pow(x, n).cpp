class Solution {
public:
    typedef long long int64;
    map<pair<double, int64>, double> mp;
    double solve(double x, int64 n) {
        if(n == 0) {
            return 1.0;
        }
        if(mp.find({x, n}) != mp.end()) {
            return mp[{x, n}];
        }
        if(n % 2 == 1) {
            return mp[{x, n}] = x * solve(x, n - 1);
        } else {
            return mp[{x, n}] = solve(x, n / 2) * solve(x, n / 2);
        }
    }

    double myPow(double x, int n) {
        if(n < 0) {
            return 1.0 / solve(x, -1LL * n);
        } else {
            return solve(x, n);
        }
    }
};
