class Solution {
    public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int> st;
        int n = asteroids.size();

        for (int i=0; i<n; i++){
            int current = asteroids[i];
            bool destroyed = false;

            while (!st.empty() && st.back() > 0 && current <0){
                if (st.back() < abs(current)){
                    st.pop_back();
                    continue;
                }else if (st.back() == abs(current))
                {
                    st.pop_back();
                    destroyed = true;
                }else{
                    destroyed = true;
                }
                break;
            }
            if (!destroyed){
                st.push_back(current);
            }
        }
            return st;
            }
        };