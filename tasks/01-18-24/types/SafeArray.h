//
// Created by TimZolleis on 14.12.2023.
//

#ifndef HFU_AIN_1_PROGRAMMING_SAFEARRAY_H
#define HFU_AIN_1_PROGRAMMING_SAFEARRAY_H

class SafeArray {
private:
    int size;
    bool* isSet;
    int* elements;
    void increaseSize(int newLength);
    bool isOutOfBounds(int index);
    bool isInitialized();
public:
    explicit SafeArray(int init);
    SafeArray();
    int length() const;
    bool setAt(int index, int val);
    static bool checkValue(int value, bool print);
    int getAt(int pos);
    int getMinimum();
    bool fill(unsigned int index1, unsigned index2, int value);
};


#endif //HFU_AIN_1_PROGRAMMING_SAFEARRAY_H
