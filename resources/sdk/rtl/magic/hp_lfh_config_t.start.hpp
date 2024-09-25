#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_RTL_HP_LFH_CONFIG.MaxBlockSize", max_block_size, 0x0, 0x10, true, 0x61ac8ac210866d98)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_RTL_HP_LFH_CONFIG.WitholdPageCrossingBlocks", withold_page_crossing_blocks, 0x10, 0x1, true, 0x50e2aa77b235971b, 1, uint16_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_RTL_HP_LFH_CONFIG.DisableRandomization", disable_randomization, 0x11, 0x1, true, 0x3ceb3353451caf0b, 1, uint16_t)
#else
#define _m00
#define _m01
#define _m02
#endif