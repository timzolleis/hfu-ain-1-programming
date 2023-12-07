struct Date {
    int day;
    enum month {
        January, February, March, April, May, June, July, August, September, October, November, December
    };
    Date::month month;
    int year;

};