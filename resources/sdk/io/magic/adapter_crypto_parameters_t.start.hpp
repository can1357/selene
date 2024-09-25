#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_IO_ADAPTER_CRYPTO_PARAMETERS.Tweak", tweak, 0x0, 0x40, true, 0x297d49f424ab1e3f)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct io::adapter_crypto_key_descriptor_t*), "_IO_ADAPTER_CRYPTO_PARAMETERS.KeyDescriptor", key_descriptor, 0x40, 0x40, true, 0x359798af8f46baaf)
#else
#define _m00
#define _m01
#endif