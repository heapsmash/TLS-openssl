#include <stdio.h>
#include <openssl/ssl.h>

int main(int argc, char **argv)
{
}

SSL *InitSslOnSocket(int sckfd)
{
    SSL_library_init();
    const SSL_METHOD *method = TLS_method();
    SSL_CTX *ctx = SSL_CTX_new(method);

    if (ctx == NULL)
    {
        printf("Failed to create SSL context\n");
        return NULL;
    }

    return 0;
}
