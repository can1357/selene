#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_SYSTEM_LOOKASIDE_INFORMATION.CurrentDepth", current_depth, 0x0, 0x10, true, 0x2e63a6e9f4a2d95b)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_SYSTEM_LOOKASIDE_INFORMATION.MaximumDepth", maximum_depth, 0x10, 0x10, true, 0xe36e66caf827d52f)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_LOOKASIDE_INFORMATION.TotalAllocates", total_allocates, 0x20, 0x20, true, 0x853c1650233d70c6)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_LOOKASIDE_INFORMATION.AllocateMisses", allocate_misses, 0x40, 0x20, true, 0xb565f72c11906ff8)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_LOOKASIDE_INFORMATION.TotalFrees", total_frees, 0x60, 0x20, true, 0x2d52c33e140e4d15)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_LOOKASIDE_INFORMATION.FreeMisses", free_misses, 0x80, 0x20, true, 0x4bbd273cd9eb7bd4)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_LOOKASIDE_INFORMATION.Type", type, 0xa0, 0x20, true, 0x5ab65f30610472a4)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_LOOKASIDE_INFORMATION.Tag", tag, 0xc0, 0x20, true, 0xfc86cbf5644bc62d)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_LOOKASIDE_INFORMATION.Size", size, 0xe0, 0x20, true, 0x6e1fe1bda2edd5d2)
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