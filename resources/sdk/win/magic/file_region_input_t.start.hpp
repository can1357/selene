#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_FILE_REGION_INPUT.FileOffset", file_offset, 0x0, 0x40, true, 0x4b6c821769506d26)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_FILE_REGION_INPUT.Length", length, 0x40, 0x40, true, 0x7c190f580e0b20bc)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_REGION_INPUT.DesiredUsage", desired_usage, 0x80, 0x20, true, 0xf3201adc6b685b02)
#else
#define _m00
#define _m01
#define _m02
#endif