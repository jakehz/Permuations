#include "Permute.h"
#include <iostream>
#include <string>

using namespace std;

Permute::Permute(string word1, string word2)
{
	firstNode = NULL;
	lastNode = NULL;
	firstString = word1;
	secondString = word2;
	total = 0;
}
void Permute::push_node(char letter)
{
	// case 1: list is empty.
	if (firstNode == NULL){
		// make a new node and make it the first and last node
		firstNode = new Node(letter);
		lastNode = firstNode;
	}
	// case 2: list isn't empty
	else {
		// make a new node and make it a node just after the last node (new last)
		Node* beforeLast = lastNode;
		lastNode = new Node(letter);
		beforeLast->next = lastNode;
	}
}
void Permute::populate_list(string word)
{
	for(unsigned int i = 0; i < word.length(); i++){
		
	}
}

void Permute::permutate()
{
	
}
