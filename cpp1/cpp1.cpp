#include <cstdio>
#include <vector>
using namespace std;

// vrať čísla z CSV řetězce
vector<int> numberize(const char* csv) {
	vector<int> result;
	int pos = -1, inc = 0;
	int item;
	NEXT_NUMBER:
	pos++;
	if(sscanf(csv+pos, " %d%n", &item, &inc)) {
		result.push_back(item);
		pos+= inc;
		if(*(csv+pos)==';') goto NEXT_NUMBER;
	}
	return result;
}

int main() {
	char data[] = "13;23;7;146";
	auto numbers = numberize(data);
	for(auto i: numbers) printf("%d\n", i);
}