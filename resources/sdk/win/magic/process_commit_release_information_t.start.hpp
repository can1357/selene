#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PROCESS_COMMIT_RELEASE_INFORMATION.Version", version, 0x0, 0x20, true, 0xecbdd5e67c2f940d)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PROCESS_COMMIT_RELEASE_INFORMATION.Eligible", eligible, 0x20, 0x1, true, 0x9a12590a21124142, 1, uint32_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PROCESS_COMMIT_RELEASE_INFORMATION.ReleaseRepurposedMemResetCommit", release_repurposed_mem_reset_commit, 0x21, 0x1, true, 0xfa6dc63f0dcb7a92, 1, uint32_t)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PROCESS_COMMIT_RELEASE_INFORMATION.ForceReleaseMemResetCommit", force_release_mem_reset_commit, 0x22, 0x1, true, 0x6db4477eb88a7dd5, 1, uint32_t)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PROCESS_COMMIT_RELEASE_INFORMATION.CommitDebt", commit_debt, 0x40, 0x40, true, 0x85adc1430e1dfedd)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PROCESS_COMMIT_RELEASE_INFORMATION.CommittedMemResetSize", committed_mem_reset_size, 0x80, 0x40, true, 0xd5081482c048a549)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PROCESS_COMMIT_RELEASE_INFORMATION.RepurposedMemResetSize", repurposed_mem_reset_size, 0xc0, 0x40, true, 0xc1d22d10ad7cfe81)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif