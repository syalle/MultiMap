#pragma once
#include "MultiMap.h"

class MultiMap;

class MultiMapIterator
{
	friend class MultiMap;

private:
	const MultiMap& col;
	//TODO - Representation
    Node* current; // pointer to the current node in the iteration


    //DO NOT CHANGE THIS PART
	MultiMapIterator(const MultiMap& c);

public:


	TElem getCurrent()const;
	bool valid() const;
	void next();
	void first();
};

