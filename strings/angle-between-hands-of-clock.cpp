class Solution {
public:
    double angleClock(int hour, int mins) {

        double hourAngle = (hour % 12) * 30.0 + mins * 0.5;

        double minAngle = mins * 6.0;

        double result = abs(hourAngle - minAngle);

        return min(result, 360.0 - result);
    }
};