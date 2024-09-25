#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_KTRIAGE_DUMP_DATA_ARRAY.List", list, 0x0, 0x80, true, 0xc5966273b20d0bd8)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_KTRIAGE_DUMP_DATA_ARRAY.NumBlocksUsed", num_blocks_used, 0x80, 0x20, true, 0x8e6405ad6854815c)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_KTRIAGE_DUMP_DATA_ARRAY.NumBlocksTotal", num_blocks_total, 0xa0, 0x20, true, 0x2a4a5a2d61bd82bc)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_KTRIAGE_DUMP_DATA_ARRAY.DataSize", data_size, 0xc0, 0x20, true, 0x94db72a02f99ebd2)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_KTRIAGE_DUMP_DATA_ARRAY.MaxDataSize", max_data_size, 0xe0, 0x20, true, 0xcf72f66f08c9ae60)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_KTRIAGE_DUMP_DATA_ARRAY.ComponentNameBufferLength", component_name_buffer_length, 0x100, 0x20, true, 0x35bd565e35f40e3b)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t*), "_KTRIAGE_DUMP_DATA_ARRAY.ComponentName", component_name, 0x140, 0x40, true, 0x95c47c585661dae5)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<struct wdf::kaddress_range_t, 1>), "_KTRIAGE_DUMP_DATA_ARRAY.Blocks", blocks, 0x180, 0x80, true, 0x70c3ffdbb44d5ede)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif