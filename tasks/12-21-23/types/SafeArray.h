//
// Created by TimZolleis on 14.12.2023.
//

#ifndef HFU_AIN_1_PROGRAMMING_SAFEARRAY_H
#define HFU_AIN_1_PROGRAMMING_SAFEARRAY_H

class SafeArray {
private:
    int getSize();
    bool isSet[100]{};
    int elements[100]{};
public:
    explicit SafeArray(int init);
    bool setAt(unsigned int pos, int val);
    static bool checkValue(int value, bool print);
    int getAt(unsigned int pos);
    int getMinimum();
    bool fill(unsigned int index1, unsigned index2, int value);
};


#endif //HFU_AIN_1_PROGRAMMING_SAFEARRAY_H
