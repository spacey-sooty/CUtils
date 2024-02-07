#pragma once

#include <stdio.h>

#ifdef __GNUC__
#define eprintf(args...) fprintf(stderr, ##args)
#else
// uses MSVC syntax
#define eprintf(args...) fprintf(stderr, __VA_ARGS__)
#endif
