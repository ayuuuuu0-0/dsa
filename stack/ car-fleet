// not a stack solution but can be solved by stack 
class Solution {
public:
 struct Car {
    double position;
    double time;
 };
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        int n = position.size();

        vector <Car> cars(n);

        for (int i=0; i<n; i++){
            cars[i].position = position[i];
            cars[i].time = (double)(target - position[i])/speed[i];
        }

        sort(cars.begin(), cars.end(), [](Car a, Car b){
            return a.position > b.position;
        });

        int counter = 0;
        double previousTime = 0.0;

        for (int i=0; i < n; i++){
            if(cars[i].time > previousTime){
                counter++;
                previousTime = cars[i].time;
            }
        }
        return counter;
    }
};