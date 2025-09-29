#include<stdarg.h>







int rohit_printf(const char * format,...)
{
    int count=0;
    va_list(ap);
    va_start(ap,format);
    while(*format)
    {
        if(*format=='%')
        count += print_format(*++format,ap);
        else
        count+= write(STDOUT_FILENO,format,1);
    }
    va_end(ap);
    return count;
}
