
#ifndef HFU_AIN_1_PROGRAMMING_DATE_HPP
#define HFU_AIN_1_PROGRAMMING_DATE_HPP
struct Date {
    int day;
    enum month {
        January = 1, February, March, April, May, June, July, August, September, October, November, December
    };
    Date::month month;
    int year;

};
#endif //HFU_AIN_1_PROGRAMMING_DATE_HPP