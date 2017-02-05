class LinkedList {
	struct Node {
		int x;
		Node *next;
	};

public:
	LinkedList();
	void addValue(int val);
	int popValue();
private:
	Node* head;
};

