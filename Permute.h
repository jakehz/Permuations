#pragma once
#include <string>
using std::string;

class Node {
public:
	// initialize the node with a letter.
	Node(char let)
	{
		// new node points to nothing (can be changed later)
		next = NULL;
		// initialize data.
		data = let;
	}
	Node* next;
	char data;
};

class Permute {
public:
	Permute(string, string);
	// poplulates linked list with letters from word.
	void populate_list(string);
	//void permutate();
	void print_curr_list();
	size_t total_permut() { return total;}
	//void print();
private:
	void push_node(const char&);
	void remove_node(const char&);
	size_t total;
	string firstString;
	string secondString;
	Node* firstNode;
	Node* lastNode;
};
