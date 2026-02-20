#ifndef __LOGINFO__
#define __LOGINFO__
#include <string.h>
#include <iostream>

#define LOG_INFO

short get_stack_info(void);
void increment_stack_info(void);
void decrement_stack_info(void);
std::string getString_stack_info(void);

#endif
