#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        int n = image.size();
        vector<vector<int>> result;
        for(int i=0; i<n; i++){
            vector<int> r;
            for(int j=n-1; j>=0; j--){
                if(image[i][j]){
                    r.push_back(0);
                }else{
                    r.push_back(1);
                }
            }
            result.push_back(r);
        }
        return result;
    }
};

int main(){
    Solution sol;
    int n;
    cin >> n;
    vector<vector<int>> image, flipped;
    for(int i=0; i<n; i++){
        vector<int> row;
        for(int j=0; j<n; j++){
            int in;
            cin >> in;
            row.push_back(in);
        }
        image.push_back(row);
    }
    
    flipped = sol.flipAndInvertImage(image);
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout << flipped[i][j] << " ";
        }
        cout << endl;
    }
}