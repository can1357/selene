#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint8_t), "_MMPAGE_FILE_EXPANSION_FLAGS.PageFileNumber", page_file_number, 0x0, 0x8, true, 0x7e793c5e1d51bff2, 8, uint8_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MMPAGE_FILE_EXPANSION_FLAGS.IgnoreCurrentCommit", ignore_current_commit, 0x18, 0x1, true, 0xc62dc86006be0935, 1, uint8_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MMPAGE_FILE_EXPANSION_FLAGS.IncreaseMinimumSize", increase_minimum_size, 0x19, 0x1, true, 0x17b98860b4912d11, 1, uint8_t)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MMPAGE_FILE_EXPANSION_FLAGS.AttemptForCantExtend", attempt_for_cant_extend, 0x1a, 0x1, true, 0x791448fe4850463d, 1, uint8_t)
#define _m04 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MMPAGE_FILE_EXPANSION_FLAGS.UnusedSegmentDeletion", unused_segment_deletion, 0x1b, 0x1, true, 0x232d0c9878b38182, 1, uint8_t)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MMPAGE_FILE_EXPANSION_FLAGS.PageFileContract", page_file_contract, 0x1c, 0x1, true, 0x7aa16e0a5cc0278b, 1, uint8_t)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MMPAGE_FILE_EXPANSION_FLAGS.NoWait", no_wait, 0x1d, 0x1, true, 0x5579901633d1b6b8, 1, uint8_t)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif