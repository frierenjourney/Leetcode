class Solution {
public:
    static const long long MOD = 1e9 + 7;
    using Matrix = vector<vector<long long>>;

    Matrix multiply(const Matrix& A, const Matrix& B) {
        int n = A.size();
        Matrix C(n, vector<long long>(n, 0));

        for (int i = 0; i < n; i++) {
            for (int k = 0; k < n; k++) {
                if (A[i][k] == 0) continue;

                for (int j = 0; j < n; j++) {
                    if (B[k][j] == 0) continue;

                    C[i][j] =
                        (C[i][j] + A[i][k] * B[k][j]) % MOD;
                }
            }
        }
        return C;
    }

    Matrix power(Matrix base, long long exp) {
        int n = base.size();

        Matrix res(n, vector<long long>(n, 0));
        for (int i = 0; i < n; i++)
            res[i][i] = 1;

        while (exp > 0) {
            if (exp & 1)
                res = multiply(res, base);

            base = multiply(base, base);
            exp >>= 1;
        }

        return res;
    }

    vector<long long> multiplyVector(const Matrix& A,
                                     const vector<long long>& v) {

        int n = A.size();
        vector<long long> ans(n, 0);

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (A[i][j] == 0) continue;

                ans[i] =
                    (ans[i] + A[i][j] * v[j]) % MOD;
            }
        }

        return ans;
    }

    int zigZagArrays(int n, int l, int r) {

        int m = r - l + 1;

        if (n == 1)
            return m;

        int sz = 2 * m;

        // Base vector for arrays of length 2
        vector<long long> base(sz, 0);

        // up states
        for (int i = 0; i < m; i++)
            base[i] = i;

        // down states
        for (int i = 0; i < m; i++)
            base[m + i] = m - i - 1;

        if (n == 2) {
            long long ans = 0;
            for (auto x : base)
                ans = (ans + x) % MOD;

            return ans;
        }

        Matrix trans(sz, vector<long long>(sz, 0));

        // newUp[i] = sum of down[j], j < i
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < i; j++) {
                trans[i][m + j] = 1;
            }
        }

        // newDown[i] = sum of up[j], j > i
        for (int i = 0; i < m; i++) {
            for (int j = i + 1; j < m; j++) {
                trans[m + i][j] = 1;
            }
        }

        Matrix P = power(trans, n - 2);

        vector<long long> finalState =
            multiplyVector(P, base);

        long long ans = 0;
        for (auto x : finalState)
            ans = (ans + x) % MOD;

        return ans;
    }
};