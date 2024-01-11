//
// Created by Tim Zolleis on 11.01.24.
//

#ifndef INC_12_21_23_TASK01_TEST_H
#define INC_12_21_23_TASK01_TEST_H
enum TEST_CONDITION {
    EQUALS,
    NOT_EQUALS,
    LESS_THAN,
    MORE_THAN
};
class Test {
private:
    static int failed;
    static int total;
    static void addTotal();
    static void addFailed();
    static const char* getConditionAsString(TEST_CONDITION condition);
    static void printErrorMessage(const char* condition, int actual, int expected);
public:
    static void assertInt(int value, TEST_CONDITION condition, int expected);
    static void printSummary();
};

#endif //INC_12_21_23_TASK01_TEST_H
