// source: https://codereview.stackexchange.com/questions/234556/dynamic-array-implementation-in-c
// error handling: the code snippet below implemented the basic assert based error handling but we could definitely use exception handling or statuc codes to be more fancy
// pretty_print(): this function is really useful because they make debugging much easier
// NOT COMPLETED BUT THIS IS THE GENERAL IDEA

#include <assert.h>
#include <cstring>
#include <iostream>

const int INITIAL_CAPACITY = 2;
const int GROWTH_FACTOR = 2;

template <class T>
class dynamic_array {
    T *array;
    int capacity = INITIAL_CAPACITY;
    int _size;

public:
    dynamic_array() {
        array = new T[capacity];
        _size = 0;
    }

    ~dynamic_array() {
        delete[] array;
    }

    void deleteAt(int pos) {
        assert(0 <= pos && pos < _size);
        _size--;
        for (int i = pos; i < _size; i++) {
            array[i] = array[i + 1];
        }
    }

    void insertAt(int element, int pos) {
        assert(0 <= pos && pos <= _size);
        if(_size == capacity) {
            resize();
        }
        for(int i = _size; i > pos; i--) {
            array[i] = array[i-1];
        }
        _size++;
        array[pos] = element;
    }

    void append(T element) {
        insertAt(element, _size);
    }

    int size() const {
        return _size;
    }

    // doubles capacity if it has to and deletes reference to current array.
    void resize() {
        capacity *= GROWTH_FACTOR;
        T *temp = new T[capacity];
        copy(array, array + _size, temp);
        delete [] array;
        array = temp;
    }

    T get(const int pos) const {
        return array[pos];
    }

    void pretty_print() {
        cout << "[";
        for (int i = 0; i < _size - 1; i++) {
            cout << array[i] << " ";
        }
        if (_size) {
            cout << array[_size - 1];
        }
        cout << "]\n";
    }
};