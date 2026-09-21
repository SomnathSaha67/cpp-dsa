#include <iostream>
#include <vector>
#include <climits>
using namespace std;

vector<int> MaxSubArraySum(const vector<int>& v, int &maxSum) {
    maxSum = INT_MIN;
    int currSum = 0;
    int start = 0;
    int bestStart = 0, bestEnd = 0;

    for (int i = 0; i < v.size(); i++) {
        currSum += v[i];

        if (currSum > maxSum) {
            maxSum = currSum;
            bestStart = start;
            bestEnd = i;
        }
        if (currSum < 0) {
            currSum = 0;
            start = i + 1;
        }
    }

    vector<int> indices;
    for (int i = bestStart; i <= bestEnd; i++) {
        indices.push_back(i);
    }
    return indices;
}

vector<int> MinSubArraySum(const vector<int>& v, int &minSum) {
    minSum = INT_MAX;
    int currSum = 0;
    int start = 0;
    int bestStart = 0, bestEnd = 0;

    for (int i = 0; i < v.size(); i++) {
        currSum += v[i];

        if (currSum < minSum) {
            minSum = currSum;
            bestStart = start;
            bestEnd = i;
        }

        if (currSum > 0) {
            currSum = 0;
            start = i + 1;
        }
    }

    vector<int> indices;
    for (int i = bestStart; i <= bestEnd; i++) {
        indices.push_back(i);
    }
    return indices;
}

int main() {
    vector<int> v = {1, -5, 3, -4, -5, 2, 3, 5, -3, -10, 12, -16};
    int maxSum, minSum;

    vector<int> maxSubArraySumIndices = MaxSubArraySum(v, maxSum);
    vector<int> minSubArraySumIndices = MinSubArraySum(v, minSum);

    cout << "Indices contributing towards maximum subarray sum: ";
    for (int num : maxSubArraySumIndices) cout << num << " ";
    cout << "\nMax Sum: " << maxSum << "\n\n";

    cout << "Indices contributing towards minimum subarray sum: ";
    for (int num : minSubArraySumIndices) cout << num << " ";
    cout << "\nMin Sum: " << minSum << "\n";

    return 0;
}