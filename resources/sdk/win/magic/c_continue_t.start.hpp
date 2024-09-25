#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "CContinue._cRef", c_ref, 0x40, 0x20, true, 0x5acee79134105748)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(int64_t)>*), "CContinue._pfnContinue", pfn_continue, 0x80, 0x40, true, 0x6931849f633bf387)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "CContinue._dwContinue", dw_continue, 0xc0, 0x40, true, 0x46a989e0abf88031)
#else
#define _m00
#define _m01
#define _m02
#endif