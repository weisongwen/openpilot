#ifndef COMMON_UTIL_H
#define COMMON_UTIL_H

#define min(a,b) \
 ({ __typeof__ (a) _a = (a); \
     __typeof__ (b) _b = (b); \
   _a < _b ? _a : _b; })

#define max(a,b) \
 ({ __typeof__ (a) _a = (a); \
     __typeof__ (b) _b = (b); \
   _a > _b ? _a : _b; })

#define clamp(a,b,c) \
 ({ __typeof__ (a) _a = (a); \
     __typeof__ (b) _b = (b); \
     __typeof__ (c) _c = (c); \
   _a < _b ? _b : (_a > _c ? _c : _a); })

#define ARRAYSIZE(x) (sizeof(x)/sizeof(x[0]))

// Returns NULL on failure, otherwise the NULL-terminated file contents.
void* read_file(const char* path, size_t* out_len);


#endif
