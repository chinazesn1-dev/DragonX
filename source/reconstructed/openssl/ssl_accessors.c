/* The field offsets belong to the ARM64 OpenSSL build in libkentos.so. */
#include <string.h>

typedef struct ssl_st SSL;
typedef struct X509_VERIFY_PARAM_st X509_VERIFY_PARAM;

static int read_int(const void *object, size_t offset)
{
    int value;
    memcpy(&value, (const unsigned char *)object + offset, sizeof(value));
    return value;
}

int SSL_version(const SSL *ssl)
{
    return read_int(ssl, 0);
}

int SSL_is_server(SSL *ssl)
{
    return read_int(ssl, 0x38);
}

int SSL_get_shutdown(const SSL *ssl)
{
    return read_int(ssl, 0x44);
}

void SSL_set_shutdown(SSL *ssl, int mode)
{
    memcpy((unsigned char *)ssl + 0x44, &mode, sizeof(mode));
}

int SSL_get_verify_mode(const SSL *ssl)
{
    return read_int(ssl, 0x188);
}

int X509_VERIFY_PARAM_get_depth(const X509_VERIFY_PARAM *param);

int SSL_get_verify_depth(const SSL *ssl)
{
    const X509_VERIFY_PARAM *param;
    memcpy(&param, (const unsigned char *)ssl + 0xb8, sizeof(param));
    return X509_VERIFY_PARAM_get_depth(param);
}
