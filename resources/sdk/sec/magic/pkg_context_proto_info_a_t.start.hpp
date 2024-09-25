#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(char*), "_SecPkgContext_ProtoInfoA.sProtocolName", s_protocol_name, 0x0, 0x40, true, 0x35e2e7d369ad020e)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SecPkgContext_ProtoInfoA.majorVersion", major_version, 0x40, 0x20, true, 0x660b952d5f7611b9)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SecPkgContext_ProtoInfoA.minorVersion", minor_version, 0x60, 0x20, true, 0x3ea44d0d1cf9584d)
#else
#define _m00
#define _m01
#define _m02
#endif