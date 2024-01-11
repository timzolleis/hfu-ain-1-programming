//
// Created by Tim Zolleis on 11.01.24.
//

#ifndef INC_12_21_23_TASK01_TEST_H
#define INC_12_21_23_TASK01_TEST_H
enum TEST_INT_CONDITION {
    EQUALS,
    NOT_EQUALS,
    LESS_THAN,
    MORE_THAN
};

enum TEST_BOOL_CONDITION {
    IS,
    IS_NOT
};
class Test {
private:
    static int failed;
    static int total;
    static void addTotal();
    static void addFailed();
    static const char* getIntConditionAsString(TEST_INT_CONDITION condition);
    static const char* getBoolConditionAsString(TEST_BOOL_CONDITION condition);
    static const char* getBoolAsString(bool value);
    static void printIntErrorMessage(const char* condition, int actual, int expected);
    static void printBoolErrorMessage(const char* condition, bool actual, bool expected);
public:
    static void assertInt(int value, TEST_INT_CONDITION condition, int expected);
    static void assertBoolean(bool value, TEST_BOOL_CONDITION condition, bool expected);
    static void printSummary();
};

#endif //INC_12_21_23_TASK01_TEST_H
