#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint8_t), "MEM_EXTENDED_PARAMETER.Type", type, 0x0, 0x8, true, 0x7940097488a5601b, 8, uint64_t)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "MEM_EXTENDED_PARAMETER.ULong64", u_long64, 0x40, 0x40, true, 0x7b8cff0e8ab243af)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "MEM_EXTENDED_PARAMETER.Pointer", pointer, 0x40, 0x40, true, 0x11f9ec642665627)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "MEM_EXTENDED_PARAMETER.Size", size, 0x40, 0x40, true, 0x9f8943274124ca92)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "MEM_EXTENDED_PARAMETER.Handle", handle, 0x40, 0x40, true, 0xf5d3dea685d484f4)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "MEM_EXTENDED_PARAMETER.ULong", u_long, 0x40, 0x20, true, 0x6d0709907568af70)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif