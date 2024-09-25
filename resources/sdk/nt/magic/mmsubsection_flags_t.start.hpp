#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MMSUBSECTION_FLAGS.SubsectionAccessed", subsection_accessed, 0x0, 0x1, true, 0x5f0d80f948a5d8c0, 1, uint16_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint5_t), "_MMSUBSECTION_FLAGS.Protection", protection, 0x1, 0x5, true, 0xdb1aac9a5a32ea0d, 5, uint16_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint10_t), "_MMSUBSECTION_FLAGS.StartingSector4132", starting_sector4132, 0x6, 0xa, true, 0xce940d09b963e69, 10, uint16_t)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MMSUBSECTION_FLAGS.SubsectionStatic", subsection_static, 0x10, 0x1, true, 0x4511970311755071, 1, uint16_t)
#define _m04 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MMSUBSECTION_FLAGS.GlobalMemory", global_memory, 0x11, 0x1, true, 0x152aa4144dddb588, 1, uint16_t)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MMSUBSECTION_FLAGS.OnDereferenceList", on_dereference_list, 0x13, 0x1, true, 0x77cb24c19bb66e04, 1, uint16_t)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint12_t), "_MMSUBSECTION_FLAGS.SectorEndOffset", sector_end_offset, 0x14, 0xc, true, 0x75258d1357e3d9aa, 12, uint16_t)
#define _m07 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MMSUBSECTION_FLAGS.SubsectionMappedDirect", subsection_mapped_direct, 0x0, 0x0, false, 0x4d67c81df01880bf, 1, uint16_t)
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