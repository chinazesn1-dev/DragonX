#include <string.h>

typedef struct X509_VERIFY_PARAM_st X509_VERIFY_PARAM;

int X509_VERIFY_PARAM_get_depth(const X509_VERIFY_PARAM *param)
{
    int depth;
    memcpy(&depth, (const unsigned char *)param + 0x28, sizeof(depth));
    return depth;
}
