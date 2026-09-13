class Solution
{
public:
    int shiftAndCount(vector<vector<int>> &A, vector<vector<int>> &B, int x_shift, int y_shift)
    {
        int n = A.size();
        int leftShiftCount = 0;
        int rightShiftCount = 0;

        int A_row = 0;

        for (int B_row = x_shift; B_row < n; B_row++)
        {
            int A_col = 0;
            for (int B_col = y_shift; B_col < n; B_col++)
            {
                if (B[B_row][B_col] == 1 && B[B_row][B_col] == A[A_row][A_col])
                    leftShiftCount++;
                if (B[B_row][A_col] == 1 && B[B_row][A_col] == A[A_row][B_col])
                    rightShiftCount++;
                A_col++;
            }
            A_row++;
        }
        return max(leftShiftCount, rightShiftCount);
    }

    int largestOverlap(vector<vector<int>> &A, vector<vector<int>> &B)
    {
        /*
            Assume a cartesian plane.
            Example : A is of dimensions 2x2
            A is kept on it such that A[1][0] is at (0,0) of cartesian plane
            Now, we keep A fixed and move B towards +ve x-axis changing the column overlap
            And towards +ve y-axis which changes the row overlap
            I.e. we move up/right
            In order to move down/left, we can keep B constant and move A towards +ve x-axis and
            +ve y-axis. It would mean the same thing.

            Now, we are clear that what will be out x-shift value and y-shift value
            X-shift = 0 to n-1 (because post n-1, there will be no overlap)
            Y-shift = 0 to n-1 (because post n-1, there will be no overlap)

            After shifting, you just need to count the overlapping ones. That’s it
            The main challenge is to find the coordinates of moving matrix due to shift
            W.r.t the static matrix. If you make cartesian plane as shown above, it will
            Be very easy to visualize the code below
        */

        // We know that x-shift and y-shift run from 0 to n-1. Let’s write that
        int n = A.size();
        int maxOverlap = 0;
        for (int x_shift = 0; x_shift < n; x_shift++)
        {
            for (int y_shift = 0; y_shift < n; y_shift++)
            {
                // Fix A, move B left and right
                maxOverlap = max(maxOverlap, shiftAndCount(A, B, x_shift, y_shift));
                // Fix B, move A
                maxOverlap = max(maxOverlap, shiftAndCount(B, A, x_shift, y_shift));
            }
        }
        return maxOverlap;
    }
};
