#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MMWSLE_FREE_ENTRY.MustBeZero", must_be_zero, 0x0, 0x0, false, 0x937680ed26fb1243, 1, uint64_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint27_t), "_MMWSLE_FREE_ENTRY.PreviousFree", previous_free, 0x0, 0x0, false, 0xe793e2b059303ddc, 27, uint64_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint36_t), "_MMWSLE_FREE_ENTRY.NextFree", next_free, 0x0, 0x0, false, 0xe649d2035237769, 36, uint64_t)
#else
#define _m00
#define _m01
#define _m02
#endif