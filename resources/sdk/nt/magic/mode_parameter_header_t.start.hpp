#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_MODE_PARAMETER_HEADER.ModeDataLength", mode_data_length, 0x0, 0x8, true, 0x24dbbd1bc8a52ed4)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_MODE_PARAMETER_HEADER.MediumType", medium_type, 0x8, 0x8, true, 0x210da93e79b268f6)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_MODE_PARAMETER_HEADER.DeviceSpecificParameter", device_specific_parameter, 0x10, 0x8, true, 0x99b0ff57f088dd65)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_MODE_PARAMETER_HEADER.BlockDescriptorLength", block_descriptor_length, 0x18, 0x8, true, 0xa43dc13baed25fe1)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif