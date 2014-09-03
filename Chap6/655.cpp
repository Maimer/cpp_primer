#include <vector>

using namespace std;

void vectorp(int, int);

int main()
{
	vector<decltype(vectorp)> v1;
}
