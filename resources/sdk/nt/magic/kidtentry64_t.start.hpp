#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_KIDTENTRY64.OffsetLow", offset_low, 0x0, 0x10, true, 0xcc49bb606572a655)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_KIDTENTRY64.Selector", selector, 0x10, 0x10, true, 0xc58f44df03a11e58)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_KIDTENTRY64.IstIndex", ist_index, 0x20, 0x3, true, 0x8ef708dee795955b, 3, uint16_t)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint5_t), "_KIDTENTRY64.Type", type, 0x28, 0x5, true, 0x932355a8707aee7e, 5, uint16_t)
#define _m04 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_KIDTENTRY64.Dpl", dpl, 0x2d, 0x2, true, 0x5fb01157f3e0546b, 2, uint16_t)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_KIDTENTRY64.Present", present, 0x2f, 0x1, true, 0x8f97d74c68277132, 1, uint16_t)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_KIDTENTRY64.OffsetMiddle", offset_middle, 0x30, 0x10, true, 0x7d43d0dcaa424b29)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KIDTENTRY64.OffsetHigh", offset_high, 0x40, 0x20, true, 0x3d35061a22f5f7f0)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_KIDTENTRY64.Alignment", alignment, 0x0, 0x40, true, 0x52b42a6f5a963c7f)
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
#endif