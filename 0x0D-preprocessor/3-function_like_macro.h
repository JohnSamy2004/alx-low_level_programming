#ifndef _FUNCTION_LIKE_MACRO_H
#define _FUNCTION_LIKE_MACRO_H

#define ABS(x) x
#ifndef ABS(x) -x
#define ABS(x) (-x * -1)

#endif
