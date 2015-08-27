#include <time.h>

// Returns the local date/time formatted as 2014-03-19 11:11:52
char* getFormattedTime(void)
{
    time_t rawtime;
    struct tm* timeinfo;

    time(&rawtime);
    timeinfo = localtime(&rawtime);

    // Must be static, otherwise won't work
    static char _retval[20];
    strftime(_retval, sizeof(_retval), "%Y-%m-%d %H:%M:%S", timeinfo);

    return _retval;
}

// Remove path from filename
#define __SHORT_FILE__ (strrchr(__FILE__, '/') ? strrchr(__FILE__, '/') + 1 : __FILE__)

// Main log macro
#define __LOG__(format, loglevel, ...) printf("%s %-5s [%s:%d][%s]" format, getFormattedTime(), loglevel,__SHORT_FILE__, __LINE__,__func__, ## __VA_ARGS__)

// Specific log macros with 
#define LOGDEBUG(format, ...) __LOG__(format, "DEBUG", ## __VA_ARGS__)
