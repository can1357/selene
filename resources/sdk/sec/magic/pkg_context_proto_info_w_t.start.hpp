#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(wchar_t*), "_SecPkgContext_ProtoInfoW.sProtocolName", s_protocol_name, 0x0, 0x40, true, 0x7a691d52cbbc4c00)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SecPkgContext_ProtoInfoW.majorVersion", major_version, 0x40, 0x20, true, 0x6da1fe0f7c583aff)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SecPkgContext_ProtoInfoW.minorVersion", minor_version, 0x60, 0x20, true, 0x87673d2f853ad109)
#else
#define _m00
#define _m01
#define _m02
#endif