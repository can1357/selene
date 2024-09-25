#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct io::client_extension_t*), "_IO_CLIENT_EXTENSION.NextExtension", next_extension, 0x0, 0x40, true, 0x85f73df38f5ad6e8)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_IO_CLIENT_EXTENSION.ClientIdentificationAddress", client_identification_address, 0x40, 0x40, true, 0xceb531d647b9b6c1)
#else
#define _m00
#define _m01
#endif