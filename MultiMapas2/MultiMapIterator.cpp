#include "MultiMapIterator.h"
#include "MultiMap.h"


/*MultiMapIterator::MultiMapIterator(const MultiMap& c): col(c) {
	//TODO - Implementation
}*/
MultiMapIterator::MultiMapIterator(const MultiMap& c) : col(c), current(nullptr) {
    // Initialize the iterator to point to the first element
    this->current = c.head;
}
//O(1)
TElem MultiMapIterator::getCurrent() const{
	//TODO - Implementation
    if (!valid()){
        throw exception();
    }else{
       // return this->current->Node*(current->key, current->value);
        return TElem(current->key, current->value);
    }
}
//BC:O(1),WC:O(1)
bool MultiMapIterator::valid() const {
	//TODO - Implementation
    return (this->current != nullptr);
}
//BC:O(1),WC:O(1)

void MultiMapIterator::next() {
	//TODO - Implementation
    if (!valid()){
        throw exception();
    }else{
        this->current=current->next;
    }
}
//BC:O(1),WC:O(1)

void MultiMapIterator::first() {
	//TODO - Implementation
    this->current = this->col.head;
}
//BC:O(1),WC:O(1)
