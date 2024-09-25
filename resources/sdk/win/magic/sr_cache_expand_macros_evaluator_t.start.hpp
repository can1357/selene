#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const wchar_t*), "_SRCache_ExpandMacros_Evaluator.Name", name, 0x0, 0x0, false, 0xacc87e80a58457b5)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(void*, wchar_t**)>*), "_SRCache_ExpandMacros_Evaluator.Evaluate", evaluate, 0x0, 0x0, false, 0x7cfb8bc22b89deb8)
#else
#define _m00
#define _m01
#endif