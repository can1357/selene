#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::hresult), "FEATURE_ERROR.hr", hr, 0x0, 0x20, true, 0x7d3a08f8a5784361)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FEATURE_ERROR.lineNumber", line_number, 0x20, 0x10, true, 0x18d2b268c9877062)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const char*), "FEATURE_ERROR.file", file, 0x40, 0x40, true, 0xe7d5eb1b1a1d6c89)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const char*), "FEATURE_ERROR.process", process, 0x80, 0x40, true, 0xfa52ccb2952f9814)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const char*), "FEATURE_ERROR.modulePath", module_path, 0xc0, 0x40, true, 0x75a858d6f69cd69c)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "FEATURE_ERROR.callerReturnAddressOffset", caller_return_address_offset, 0x100, 0x20, true, 0xb52b071206a80a34)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const char*), "FEATURE_ERROR.callerModule", caller_module, 0x140, 0x40, true, 0x118b4f3af60a842b)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const char*), "FEATURE_ERROR.message", message, 0x180, 0x40, true, 0x85c0922743e4e93)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FEATURE_ERROR.originLineNumber", origin_line_number, 0x1c0, 0x10, true, 0xb8cbd725aadd8d03)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const char*), "FEATURE_ERROR.originFile", origin_file, 0x200, 0x40, true, 0xca065d9ffe8d8cad)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const char*), "FEATURE_ERROR.originModule", origin_module, 0x240, 0x40, true, 0x7e445c3aa4044c76)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "FEATURE_ERROR.originCallerReturnAddressOffset", origin_caller_return_address_offset, 0x280, 0x20, true, 0x64a3dc1e7d0446ac)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const char*), "FEATURE_ERROR.originCallerModule", origin_caller_module, 0x2c0, 0x40, true, 0x3d4ad0bdadc9a21d)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const char*), "FEATURE_ERROR.originName", origin_name, 0x300, 0x40, true, 0x73583c98811e083e)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#define _m09
#define _m10
#define _m11
#define _m12
#define _m13
#endif