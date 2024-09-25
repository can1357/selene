#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SecPkgContext_NegotiatedTlsExtensions.ExtensionsCount", extensions_count, 0x0, 0x20, true, 0xddd0fef4abda2be1)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "_SecPkgContext_NegotiatedTlsExtensions.Extensions", extensions, 0x40, 0x40, true, 0x4ad0b8165a4d2746)
#else
#define _m00
#define _m01
#endif