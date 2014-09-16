#include <iostream>
#include <vector>
using namespace std;

vector<vector<int> > generate (int numRows) {
	vector<vector<int> > ans;
	vector<int> cur, pre;
	for (int i = 1; i <= numRows; i++) {
		if (pre.size() == 0)
			cur.push_back(1);
		else {
			// Fill 1 in location 0
			cur.push_back(1);
			for (int j = 1; j < i - 1; j++)
				cur.push_back( pre[j - 1] + pre[j] );
			// Fill 1 in location i - 1
			cur.push_back(1);
		}
		ans.push_back(cur);
		pre = cur;
		cur.clear();
	}
	return ans;
}