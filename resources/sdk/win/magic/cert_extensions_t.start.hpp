#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CERT_EXTENSIONS.cExtension", c_extension, 0x0, 0x20, true, 0x6465b9a5414d231b)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::cert_extension_t*), "_CERT_EXTENSIONS.rgExtension", rg_extension, 0x40, 0x40, true, 0xa172a4fd5ade15ad)
#else
#define _m00
#define _m01
#endif