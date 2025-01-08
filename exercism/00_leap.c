// A leap year (in the Gregorian calendar) occurs:
//
//     In every year that is evenly divisible by 4.
//     Unless the year is evenly divisible by 100, in which case it's only a leap year if the year is also evenly
//     divisible by 400.
//
// Some examples:
//
//     1997 was not a leap year as it's not divisible by 4.
//     1900 was not a leap year as it's not divisible by 400.
//     2000 was a leap year!

_Bool leap_year(int year) {
    if (year % 100 == 0) {
        if (year % 400 == 0) {
            return 1;
        }
        else {
            return 0;
        }
    }
    else if (year % 4 == 0) {
        return 1;
    }
    else {
        return 0;
    }
}

int main() {

    leap_year(2015);
    leap_year(1970);

    return 0;
}
