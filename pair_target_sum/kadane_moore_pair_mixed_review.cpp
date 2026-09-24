#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

int MajorityElement(vector<int> v){
    int freq = 0, candidate = -1;
    for(int ele : v){
        if(freq == 0) candidate = ele;
        if(candidate == ele) freq++;
        else freq--;
    }
    // Verify candidate
    int count = 0;
    for(int ele : v) if(ele == candidate) count++;
    if(count > v.size()/2) return candidate;
    return -1;
}

int MaxSubarraySum(vector<int> v){
    int currSum = 0, maxSum = INT_MIN;
    for(int ele : v){
        currSum += ele;
        maxSum = max(maxSum, currSum);
        if(currSum < 0) currSum = 0;
    }
    return maxSum;
}

vector<int> PairsSum(vector<int> v, int target){
    sort(v.begin(), v.end()); // important for two-pointer
    int start = 0, end = v.size()-1, minDiff = INT_MAX;
    vector<int> bestPair(2, -1);

    while(start < end){
        int ps = v[start] + v[end];
        int diff = abs(ps - target);

        if(diff < minDiff){
            minDiff = diff;
            bestPair = {v[start], v[end]};
        }

        if(ps < target) start++;
        else end--;

        // skip duplicates safely
        while(start < end && v[start] == v[start-1]) start++;
        while(start < end && v[end] == v[end+1]) end--;
    }
    return bestPair;
}

int main() {
    int n, target, choice;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> v(n);
    cout << "Enter array elements: ";
    for(int i = 0; i < n; i++) cin >> v[i];

    cout << "\nMenu:\n";
    cout << "1. Find Majority Element (Moore's Voting)\n";
    cout << "2. Find Max Subarray Sum (Kadane's Algorithm)\n";
    cout << "3. Find Pair Matching Target Sum\n";
    cout << "Enter your choice: ";
    cin >> choice;

    switch(choice) {
        case 1: {
            int majority = MajorityElement(v);
            if(majority != -1)
                cout << "Majority Element: " << majority << "\n";
            else
                cout << "No Majority Element found\n";
            break;
        }
        case 2: {
            int maxSum = MaxSubarraySum(v);
            cout << "Maximum Subarray Sum: " << maxSum << "\n";
            break;
        }
        case 3: {
            cout << "Enter target sum: ";
            cin >> target;
            vector<int> pair = PairsSum(v, target);
            if(pair[0] == -1)
                cout << "No pair found\n";
            else
                cout << "Pair: " << pair[0] << " " << pair[1]
                     << " | Sum = " << pair[0] + pair[1] << "\n";
            break;
        }
        default:
            cout << "Invalid choice\n";
    }
    return 0;
}
