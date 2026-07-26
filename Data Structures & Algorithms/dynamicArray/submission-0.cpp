class DynamicArray {
private:
    int* arr;
    int size;
    int capacity;

public:

    DynamicArray(int capacity) {
        this->capacity = capacity;
        size = 0;
        arr = new int[capacity];
    }

    int get(int i) {
        return arr[i];
    }

    void set(int i, int n) {
        arr[i] = n;
    }

    void pushback(int n) {
        if (size == capacity)
            resize();

        arr[size++] = n;
    }

    int popback() {
        return arr[--size];
    }

    void resize() {
        capacity *= 2;

        int *temp = new int[capacity];

        for (int i = 0; i < size; i++)
            temp[i] = arr[i];

        delete[] arr;
        arr = temp;
    }

    int getSize() {
        return size;
    }

    int getCapacity() {
        return capacity;
    }
};
