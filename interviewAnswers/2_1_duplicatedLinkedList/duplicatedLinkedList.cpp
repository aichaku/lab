#include <iostream>
#include <list>
#include <vector>
#include <algorithm>

using namespace std;

struct node
{
	node* prev;
	int value;
};

void removeDuplicated(std::list<int>& aList)
{
	std:vector<int> checkBuffer;
	for (std::list<int>::iterator it = aList.begin(); it != aList.end(); ) {
		int item = *it;
		if (std::find(checkBuffer.begin(), checkBuffer.end(), item) != checkBuffer.end()) {
			it = aList.erase(it);
		} else {
			checkBuffer.push_back(item);
			++it;
		}
	}
}

int main()
{

	std::list<int> sampleLinkedList = {2, 4, 5, 3, 6, 7, 5, 3, 3, 1, 6, 7, 8, 6, 4};
	removeDuplicated(sampleLinkedList);	

	for (auto item : sampleLinkedList)
	{
		std::cout << item << "\n";
	}
	
	return 0;
}
