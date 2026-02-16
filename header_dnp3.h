#ifndef uint64_t
#define uint64_t unsigned long long
#endif
#ifndef int64_t
#define int64_t signed long
#endif

#ifndef uint32_t
#define uint32_t unsigned int
#endif
#ifndef int32_t
#define int32_t signed int
#endif

#ifndef uint16_t
#define uint16_t unsigned short
#endif
#ifndef int16_t
#define int16_t signed short
#endif

#ifndef uint8_t
#define uint8_t unsigned char
#endif
#ifndef int8_t
#define int8_t signed char
#endif

#ifndef boolean
#define  boolean          int
#endif

#define UNUSED(x) (void)(x)

#define MAX_BufferSer4  2048
#define SIZE_BufferSer4                        MAX_BufferSer4

extern boolean expectsContents;
extern void* pPointerGlobal1;
extern void* pPointerGlobal2;
extern void* pPointerGlobal3;
extern void* pPointerGlobal4;


#include "MemoryInspect.h"

