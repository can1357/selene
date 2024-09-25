#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint31_t), "_MMVAD_FLAGS1.CommitCharge", commit_charge, 0x0, 0x1f, true, 0xc421d2c4b5a99dd5, 31, uint32_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MMVAD_FLAGS1.MemCommit", mem_commit, 0x1f, 0x1, true, 0x478d18dffa409425, 1, uint32_t)
#else
#define _m00
#define _m01
#endif