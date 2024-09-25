#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_DEVICE_DATA_SET_SCRUB_EX_OUTPUT.BytesProcessed", bytes_processed, 0x0, 0x40, true, 0x741cddb5d99696cf)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_DEVICE_DATA_SET_SCRUB_EX_OUTPUT.BytesRepaired", bytes_repaired, 0x40, 0x40, true, 0xc0ea33c3451fa26a)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_DEVICE_DATA_SET_SCRUB_EX_OUTPUT.BytesFailed", bytes_failed, 0x80, 0x40, true, 0x783dbae5a9b886dd)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::device_data_set_range_t), "_DEVICE_DATA_SET_SCRUB_EX_OUTPUT.ParityExtent", parity_extent, 0xc0, 0x80, true, 0xd56bc2347af2dc25)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif