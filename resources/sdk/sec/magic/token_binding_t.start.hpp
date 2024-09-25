#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_SEC_TOKEN_BINDING.MajorVersion", major_version, 0x0, 0x8, true, 0x711f7588cb429ce7)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_SEC_TOKEN_BINDING.MinorVersion", minor_version, 0x8, 0x8, true, 0x1b59cec7a973d626)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_SEC_TOKEN_BINDING.KeyParametersSize", key_parameters_size, 0x10, 0x10, true, 0xe60e390e23eaebda)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 1>), "_SEC_TOKEN_BINDING.KeyParameters", key_parameters, 0x20, 0x8, true, 0xdc8e5583885f6539)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif