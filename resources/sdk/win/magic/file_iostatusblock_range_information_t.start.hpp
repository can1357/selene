#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t*), "_FILE_IOSTATUSBLOCK_RANGE_INFORMATION.IoStatusBlockRange", io_status_block_range, 0x0, 0x40, true, 0xaace570405e21820)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_IOSTATUSBLOCK_RANGE_INFORMATION.Length", length, 0x40, 0x20, true, 0x8b30b75ff4ab2c41)
#else
#define _m00
#define _m01
#endif