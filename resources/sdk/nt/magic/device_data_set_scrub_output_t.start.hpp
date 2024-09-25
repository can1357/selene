#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_DEVICE_DATA_SET_SCRUB_OUTPUT.BytesProcessed", bytes_processed, 0x0, 0x40, true, 0x1258d9874e79287c)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_DEVICE_DATA_SET_SCRUB_OUTPUT.BytesRepaired", bytes_repaired, 0x40, 0x40, true, 0x6bec52666b8a2867)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_DEVICE_DATA_SET_SCRUB_OUTPUT.BytesFailed", bytes_failed, 0x80, 0x40, true, 0x2737b4be9c795b5d)
#else
#define _m00
#define _m01
#define _m02
#endif