/*-----------------------------------------------------
Name: log.h
Date: 2015.04.02
Auth: kala13x (a.k.a 7th Ghost)
Desc: Header file of logging system
-----------------------------------------------------*/


#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdarg.h>
#include <time.h>
#include "slog.h"


/*---------------------------------------------
| Main function
---------------------------------------------*/
int main(int argc, char *argv[])
{
    /* Used variables */
    char char_arg[32];
    int int_arg;

    /* Init args */
    strcpy(char_arg, "test string");
    int_arg = 69;

    /* Initialise slog 
    * First argument is log filename 
    * Second argument is log to file (1 enabled, 0 disabled)
    * Third argument is max log level */
    init_slog("example", 1, 3);

    /* Log and print something with level 0 */
    slog(0, "[LIVE] Test message with level 0");

    /* Log and print something with level 1 */
    slog(1, "[LIVE] Test message with level 1");

    /* Log and print something with level 2 */
    slog(2, "[DEBUG] Test message with level 2");

    /* Log and print something with level 3 */
    slog(3, "[DEBUG] Test message with level 3");

    /* Log and print something with char argument */
    slog(0, "[LIVE] Test message with char argument: %s", char_arg);

    /* Log and print something with int argument */
    slog(0, "[LIVE] Test message with int argument: %d", int_arg);

    /* Test log with higher level than log max value */
    slog(4, "[LIVE] Test log with higher level than log max value");

    return 0;
}