#include <bits/stdc++.h>
using namespace std;

static bool myCompare(string a, string b) {
  string ab = a.append(b);
  string ba = b.append(a);

  return ab.compare(ba) > 0 ? true : false;
}

string largestNumber(vector<int> &nums) {

  string ans = "";
  int zeroes = 0, n = nums.size();

  vector<string> vec(n);

  for (int i = 0; i < n; i++) {
    if (nums[i] == 0)
      zeroes++;

    vec[i] = to_string(nums[i]);
  }

  if (zeroes == n)
    return "0";

  sort(vec.begin(), vec.end(), myCompare);

  for (int i = 0; i < n; i++)
    ans += vec[i];

  return ans;
}

int main() {
  vector<int> nums = {3, 30, 34, 5, 9};
  cout << largestNumber(nums) << endl;
}
