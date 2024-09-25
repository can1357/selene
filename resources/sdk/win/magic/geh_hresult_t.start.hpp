#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::hresult), "GEH_HRESULT.result", result, 0x0, 0x20, true, 0x70c4a0510bd5155)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "GEH_HRESULT.line", line, 0x20, 0x20, true, 0x8d7292c6ba45bd51)
#else
#define _m00
#define _m01
#endif