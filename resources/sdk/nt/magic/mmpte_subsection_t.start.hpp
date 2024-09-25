#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MMPTE_SUBSECTION.Valid", valid, 0x0, 0x1, true, 0xa40c15e70d8aa652, 1, uint64_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint5_t), "_MMPTE_SUBSECTION.Protection", protection, 0x5, 0x5, true, 0xab35991ad02a8604, 5, uint64_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MMPTE_SUBSECTION.Prototype", prototype, 0xa, 0x1, true, 0x543381edb2e3d1fc, 1, uint64_t)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MMPTE_SUBSECTION.ExecutePrivilege", execute_privilege, 0xf, 0x1, true, 0xfefec96d9f7cabe6, 1, uint64_t)
#define _m04 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(int48_t), "_MMPTE_SUBSECTION.SubsectionAddress", subsection_address, 0x10, 0x30, true, 0xbdae23c8a5432b18, 48, uint64_t)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MMPTE_SUBSECTION.SwizzleBit", swizzle_bit, 0x4, 0x1, true, 0xf97fa1b53c1d896, 1, uint64_t)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MMPTE_SUBSECTION.ColdPage", cold_page, 0xb, 0x1, true, 0x68c7524ac703856d, 1, uint64_t)
#define _m07 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MMPTE_SUBSECTION.OnStandbyLookaside", on_standby_lookaside, 0x0, 0x0, false, 0xb1c0eb7c2ee9068a, 1, uint64_t)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif