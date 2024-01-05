class Solution {
public:
    vector<int> repeatedNumber(const vector<int> &A) {
    int n = A.size();
    long long int sum = (long long)n * (n + 1) / 2;
    long long int squareSum = (long long)n * (n + 1) * (2 * n + 1) / 6;

    for (int num : A) {
        sum -= num;
        squareSum -= (long long)num * num;
    }

    long long int sumDiff = sum;
    long long int squareSumDiff = squareSum;

    int C = (int)((sumDiff + squareSumDiff / sumDiff) / 2);
    int B = (int)(C - sumDiff);

    return {B, C};
}
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        vector<int> v;
        for(auto i:grid)
          for(auto j:i)
             v.push_back(j);
        return repeatedNumber(v); 
    }
};