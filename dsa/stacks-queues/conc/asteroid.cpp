class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int> final_asteroids;
        for (int asteroid : asteroids) {
            bool destroyed = false;
            while (!final_asteroids.empty() && asteroid < 0 && final_asteroids.back() > 0) {
                if (final_asteroids.back() < -asteroid) {
                    final_asteroids.pop_back();  
                } else if (final_asteroids.back() == -asteroid) {
                    final_asteroids.pop_back();  
                    destroyed = true;
                    break;
                } else {
                    destroyed = true;
                    break;  
                }
            }
            if (!destroyed) final_asteroids.push_back(asteroid);
        }
        return final_asteroids;
    }
};