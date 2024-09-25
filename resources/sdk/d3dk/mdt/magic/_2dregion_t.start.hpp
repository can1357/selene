#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMDT_2DREGION.cx", cx, 0x0, 0x20, true, 0x4f174c69f54cf64f)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMDT_2DREGION.cy", cy, 0x20, 0x20, true, 0x75ccbb5568b201a0)
#else
#define _m00
#define _m01
#endif