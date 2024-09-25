#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_ARM64EC_REDIRECTION_ENTRY.Source", source, 0x0, 0x0, false, 0x3f032f02f33ebe26)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_ARM64EC_REDIRECTION_ENTRY.Destination", destination, 0x0, 0x0, false, 0xd918a0e88a627c04)
#else
#define _m00
#define _m01
#endif