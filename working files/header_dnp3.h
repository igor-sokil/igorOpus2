
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

#define UNUSED(x) (void)(x)


#ifndef boolean
#define  boolean          int
#endif

#ifndef true
#define  true          1
#endif
#ifndef false
#define  false          0
#endif

#define MAX_BufferSer4  300
#define SIZE_BufferSer4                        MAX_BufferSer4

extern boolean expectsContents;
extern void* pPointerGlobal1;
extern void* pPointerGlobal2;
extern void* pPointerGlobal3;
extern void* pPointerGlobal4;


//#include "MemoryInspect.h"

