#include "MultiMap.h"
#include "MultiMapIterator.h"
#include <exception>
#include <iostream>

using namespace std;




MultiMap::MultiMap() : head(nullptr) {}


void MultiMap::add(TKey c, TValue v) {
    //TODO-Implementation
    // Create a new node
    Node* newNode = new Node(c, v);
    // Insert the new node at the beginning of the list
    newNode->next = head;
    head = newNode;
}
//BC:0(1),WC:O(1),OC:O(1);

bool MultiMap::remove(TKey c, TValue v) {
	//TODO - Implementation
    Node* prev = nullptr;
    Node* current = head;

    while (current != nullptr) {
        if (current->key == c && current->value == v) {
            // Found the node to remove
            if (prev == nullptr) {
                // If the node is the head
                head = current->next;
            } else {
                prev->next = current->next;
            }
            delete current; // free memory
            return true;
        }
        prev = current;
        current = current->next;
    }
    return false; // Key-value pair not found
}
//BC:O(n),WC:O(n),OC:O(n)

vector<TValue> MultiMap::search(TKey c) const {
	//TODO - Implementation
    vector<TValue> result;
    Node* current = head;
    while (current != nullptr) {//goes to the end of the list
        if (current->key == c) {
            result.push_back(current->value);//pushes the value of the current node
        }
        current = current->next;
    }
    return result;
}
//BC:O(1),WC:O(n),OC:O(n)

int MultiMap::size() const {
	//TODO - Implementation
    int count = 0;
    Node* current = head;
    while (current != nullptr) {
        count++;
        current = current->next;
    }
    return count;
}
//BC:O(1),WC:O(n),OC:O(n)

bool MultiMap::isEmpty() const {
	//TODO - Implementation
    return (this->head == nullptr);
}

MultiMapIterator MultiMap::iterator() const {
	return MultiMapIterator(*this);
}

MultiMap::~MultiMap() {
	//TODO - Implementation

    while (head != nullptr) {
        Node* next = head->next;
        delete head;
        head = next;
    }
}

