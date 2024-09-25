#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 2>), "_READ_BUFFER_CAPACITY_DATA.DataLength", data_length, 0x0, 0x10, true, 0xe9749b1697f72268)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_READ_BUFFER_CAPACITY_DATA.BlockDataReturned", block_data_returned, 0x18, 0x1, true, 0xd31e0d8a5bcb6a90, 1, uint8_t)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 4>), "_READ_BUFFER_CAPACITY_DATA.TotalBufferSize", total_buffer_size, 0x20, 0x20, true, 0x79b100072e4b62b7)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 4>), "_READ_BUFFER_CAPACITY_DATA.AvailableBufferSize", available_buffer_size, 0x40, 0x20, true, 0x4c0342e7eaaedf0a)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif