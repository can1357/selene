#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_SYSTEM_BASIC_PERFORMANCE_INFORMATION.AvailablePages", available_pages, 0x0, 0x40, true, 0xf08b41f308dde10)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_SYSTEM_BASIC_PERFORMANCE_INFORMATION.CommittedPages", committed_pages, 0x40, 0x40, true, 0x9113d2d133d44050)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_SYSTEM_BASIC_PERFORMANCE_INFORMATION.CommitLimit", commit_limit, 0x80, 0x40, true, 0xb909ee15d66d0059)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_SYSTEM_BASIC_PERFORMANCE_INFORMATION.PeakCommitment", peak_commitment, 0xc0, 0x40, true, 0xfcb55954a25e433f)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif