class Solution {
public:
    vector<int> corpFlightBookings(vector<vector<int>>& bookings, int n) {
        
        vector<int> diff(n + 1, 0);

        for(int i = 0; i < bookings.size(); i++)
        {
            int L = bookings[i][0] - 1;
            int R = bookings[i][1] - 1;
            int X = bookings[i][2];

            diff[L] += X;
            diff[R + 1] -= X;
        }

        vector<int> result(n);
        int sum = 0;

        for(int i = 0; i < n; i++)
        {
            sum += diff[i];
            result[i] = sum;
        }
        return result;
    }
};