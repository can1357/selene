#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 2>), "_MODE_PARAMETER_HEADER10.ModeDataLength", mode_data_length, 0x0, 0x10, true, 0x61e81db8c34d848f)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_MODE_PARAMETER_HEADER10.MediumType", medium_type, 0x10, 0x8, true, 0xe1951e5d4bc409ed)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_MODE_PARAMETER_HEADER10.DeviceSpecificParameter", device_specific_parameter, 0x18, 0x8, true, 0x670cfe5e9701b20c)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 2>), "_MODE_PARAMETER_HEADER10.BlockDescriptorLength", block_descriptor_length, 0x30, 0x10, true, 0xd5e98b77aa5a7d70)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif