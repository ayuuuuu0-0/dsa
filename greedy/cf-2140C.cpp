#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<long long> a(n + 1);
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }

        // Step 1: Compute f_initial = alternating sum
        long long f_initial = 0;
        for (int i = 1; i <= n; i++)
        {
            if (i % 2 == 1)
            {
                f_initial += a[i]; // odd position: add
            }
            else
            {
                f_initial -= a[i]; // even position: subtract
            }
        }

        // Step 2: Find max_delta over all possible single swaps

        long long max_delta = 0; // Alice can always choose to not swap

        // -------------------------------------------------------
        // Case 1: l odd, r even, l < r
        // Δf = (r + 2*a[r]) - (l + 2*a[l])
        // Sweep: track min of (l + 2*a[l]) for odd l seen so far
        // -------------------------------------------------------
        {
            long long min_odd_term = LLONG_MAX; // min of (l + 2*a[l]) for odd l

            for (int i = 1; i <= n; i++)
            {
                if (i % 2 == 1)
                {
                    // i is odd: update min_odd_term
                    long long term = (long long)i + 2LL * a[i];
                    min_odd_term = min(min_odd_term, term);
                }
                else
                {
                    // i is even: compute Δf using best odd l seen so far
                    if (min_odd_term != LLONG_MAX)
                    {
                        long long term = (long long)i + 2LL * a[i];
                        long long delta = term - min_odd_term;
                        max_delta = max(max_delta, delta);
                    }
                }
            }
        }

        // -------------------------------------------------------
        // Case 2: l even, r odd, l < r
        // Δf = (2*a[l] - l) + (r - 2*a[r])
        // Sweep: track max of (2*a[l] - l) for even l seen so far
        // -------------------------------------------------------
        {
            long long max_even_term = LLONG_MIN; // max of (2*a[l] - l) for even l

            for (int i = 1; i <= n; i++)
            {
                if (i % 2 == 0)
                {
                    // i is even: update max_even_term
                    long long term = 2LL * a[i] - (long long)i;
                    max_even_term = max(max_even_term, term);
                }
                else
                {
                    // i is odd: compute Δf using best even l seen so far
                    if (max_even_term != LLONG_MIN)
                    {
                        long long term = (long long)i - 2LL * a[i];
                        long long delta = max_even_term + term;
                        max_delta = max(max_delta, delta);
                    }
                }
            }
        }

        // -------------------------------------------------------
        // Case 3: Same parity swaps
        // Δf = r - l (always positive, just distance)
        // Max = farthest pair of same-parity positions
        // -------------------------------------------------------
        {
            // Odd positions: 1, 3, 5, ...
            // First odd = 1, Last odd = n if n is odd, else n-1
            if (n >= 3)
            { // need at least 2 odd positions
                int first_odd = 1;
                int last_odd = (n % 2 == 1) ? n : n - 1;
                long long delta = (long long)(last_odd - first_odd);
                max_delta = max(max_delta, delta);
            }

            // Even positions: 2, 4, 6, ...
            // First even = 2, Last even = n if n is even, else n-1
            if (n >= 4)
            { // need at least 2 even positions
                int first_even = 2;
                int last_even = (n % 2 == 0) ? n : n - 1;
                long long delta = (long long)(last_even - first_even);
                max_delta = max(max_delta, delta);
            }
        }

        // Step 3: Answer
        cout << f_initial + max_delta << "\n";
    }

    return 0;
}
