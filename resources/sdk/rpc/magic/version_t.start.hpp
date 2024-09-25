#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_RPC_VERSION.MajorVersion", major_version, 0x0, 0x10, true, 0xf771fbb5fc60fd36)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_RPC_VERSION.MinorVersion", minor_version, 0x10, 0x10, true, 0x6f1865cef02c351)
#else
#define _m00
#define _m01
#endif