#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> source{ 4, 3, 2, 0, 15, 2, 100, -5, 1000 };
	vector<int> v(source.size());
	copy(begin(source), end(source), begin(v));
	for(auto elem : v)
    {
        cout << elem << " ";
    }
	return 0;
}
