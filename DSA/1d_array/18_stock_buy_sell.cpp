#include <iostream>
#include <vector>
using namespace std;

// leetcode 121

int maxProfit(vector<int> &prices) {
  int n = prices.size();
  vector<int> l(n);
  vector<int> r(n);

  int min_el = prices[0];
  int ans = 0;

  for (int i = 1; i < n; i++) {
    min_el = min(min_el, prices[i]);
    ans = max(prices[i] - min_el, ans);
  }
  return ans;
}

int main() { return 0; }