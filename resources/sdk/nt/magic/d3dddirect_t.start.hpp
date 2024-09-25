#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_D3DDDIRECT.left", left, 0x0, 0x20, true, 0x5bac561153eed374)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_D3DDDIRECT.top", top, 0x20, 0x20, true, 0x3790d32c0702000f)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_D3DDDIRECT.right", right, 0x40, 0x20, true, 0x6a044aae68a4028e)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_D3DDDIRECT.bottom", bottom, 0x60, 0x20, true, 0xb775f9175569bc43)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif