#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_HEAP_LFH_ONDEMAND_POINTER.Invalid", invalid, 0x0, 0x1, true, 0x630f2c7d798635ba, 1, uint16_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_HEAP_LFH_ONDEMAND_POINTER.AllocationInProgress", allocation_in_progress, 0x1, 0x1, true, 0x48069d3f30c91a7c, 1, uint16_t)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_HEAP_LFH_ONDEMAND_POINTER.UsageData", usage_data, 0x10, 0x10, true, 0x2e9e8a6e8891dd01)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_HEAP_LFH_ONDEMAND_POINTER.AllBits", all_bits, 0x0, 0x40, true, 0x194f7157fd7ff2cf)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif