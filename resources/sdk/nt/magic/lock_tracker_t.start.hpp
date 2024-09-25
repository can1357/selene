#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::balanced_node_t), "_LOCK_TRACKER.LockTrackerNode", lock_tracker_node, 0x0, 0xc0, true, 0x69292d79a83a6821)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::mdl_t*), "_LOCK_TRACKER.Mdl", mdl, 0xc0, 0x40, true, 0xaac7078c4ea0b465)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_LOCK_TRACKER.StartVa", start_va, 0x100, 0x40, true, 0x4f66949582a9c314)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_LOCK_TRACKER.Count", count, 0x140, 0x40, true, 0xf85bb97d854389eb)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_LOCK_TRACKER.Offset", offset, 0x180, 0x20, true, 0x3951bfd793c22f2f)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_LOCK_TRACKER.Length", length, 0x1a0, 0x20, true, 0x917f8c9a02ef4bfc)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_LOCK_TRACKER.Who", who, 0x1c0, 0x20, true, 0x645a1e08bc7248d3)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_LOCK_TRACKER.Page", page, 0x200, 0x40, true, 0xc7161a0a0e7ffa2d)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<void*, 8>), "_LOCK_TRACKER.StackTrace", stack_trace, 0x240, 0x0, true, 0xb8da2a968c9a0d3b)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::eprocess_t*), "_LOCK_TRACKER.Process", process, 0x440, 0x40, true, 0x1d6f2f4988e91563)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_LOCK_TRACKER.Hash", hash, 0x1e0, 0x20, true, 0x2b20c4ddb337bf49)
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
#define _m09
#define _m10
#endif