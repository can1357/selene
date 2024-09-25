#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DEVICE_DATA_SET_LBP_STATE_PARAMETERS.Version", version, 0x0, 0x20, true, 0xc30241046f23623a)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DEVICE_DATA_SET_LBP_STATE_PARAMETERS.Size", size, 0x20, 0x20, true, 0x6a19ce665691cd65)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DEVICE_DATA_SET_LBP_STATE_PARAMETERS.Flags", flags, 0x40, 0x20, true, 0xeb34091c54e32b2a)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DEVICE_DATA_SET_LBP_STATE_PARAMETERS.OutputVersion", output_version, 0x60, 0x20, true, 0x42b4127015c290f)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif