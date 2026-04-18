#include<vector>
#include<algorithm>
#include<stack>
using namespace std;

class Solution {
public:

int carFleet(int target, vector<int>& position, vector<int>& speed) {
        
    if(position.size()==0 || position.size()==1){
        return position.size();
    }
    
    vector<vector <double>> array;
        stack<double>s;
        int count=0;

        for(int i=0;i<position.size();i++){
            array.push_back({(double)position[i],((double)target-position[i])/(double)speed[i]});
        }

        sort(array.begin(), array.end(), [](const vector<double>& a, const vector<double>& b) {
        return a[0] > b[0];   // compare using column 1
        });

        for(int i=0;i<position.size();i++){

            if(s.empty()){
                s.push(array[i][1]);
                count++;
            }
            else{
                    if(array[i][1]>s.top()){
                    s.pop();
                    s.push(array[i][1]);
                    count++;
                }
            }
        }

        return count;
    }
};