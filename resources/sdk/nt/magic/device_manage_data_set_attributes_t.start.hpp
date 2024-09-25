#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DEVICE_MANAGE_DATA_SET_ATTRIBUTES.Size", size, 0x0, 0x20, true, 0xc4018920a3889fbe)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DEVICE_MANAGE_DATA_SET_ATTRIBUTES.Action", action, 0x20, 0x20, true, 0xf99feb4f20fcd8f3)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DEVICE_MANAGE_DATA_SET_ATTRIBUTES.Flags", flags, 0x40, 0x20, true, 0x44aeb48e75d02536)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DEVICE_MANAGE_DATA_SET_ATTRIBUTES.ParameterBlockOffset", parameter_block_offset, 0x60, 0x20, true, 0x89c1575678ad8019)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DEVICE_MANAGE_DATA_SET_ATTRIBUTES.ParameterBlockLength", parameter_block_length, 0x80, 0x20, true, 0x7457be6960247ea8)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DEVICE_MANAGE_DATA_SET_ATTRIBUTES.DataSetRangesOffset", data_set_ranges_offset, 0xa0, 0x20, true, 0xaf3e7b0ae59cb9d7)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DEVICE_MANAGE_DATA_SET_ATTRIBUTES.DataSetRangesLength", data_set_ranges_length, 0xc0, 0x20, true, 0xc0e679338ba04d95)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif