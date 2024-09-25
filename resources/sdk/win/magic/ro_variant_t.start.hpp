#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::i_inspectable_t*), "RoVariant._pI", p_i, 0x0, 0x40, true, 0xb9238753228149d9)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::hresult), "RoVariant._hrState", hr_state, 0x40, 0x20, true, 0xe3da1efcf685ac64)
#else
#define _m00
#define _m01
#endif