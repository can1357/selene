#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HEAP_SUMMARY.cb", cb, 0x0, 0x20, true, 0x132965addfdf5898)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_HEAP_SUMMARY.cbAllocated", cb_allocated, 0x40, 0x40, true, 0x92799bbea9596b30)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_HEAP_SUMMARY.cbCommitted", cb_committed, 0x80, 0x40, true, 0x1a4d934f91bcce7)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_HEAP_SUMMARY.cbReserved", cb_reserved, 0xc0, 0x40, true, 0xa9b831653a64e1de)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_HEAP_SUMMARY.cbMaxReserve", cb_max_reserve, 0x100, 0x40, true, 0x793211197713f06d)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif