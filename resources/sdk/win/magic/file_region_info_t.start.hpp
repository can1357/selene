#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_FILE_REGION_INFO.FileOffset", file_offset, 0x0, 0x40, true, 0xf170d2c95107d27e)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_FILE_REGION_INFO.Length", length, 0x40, 0x40, true, 0xb76f068accf80aeb)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_REGION_INFO.Usage", usage, 0x80, 0x20, true, 0xa7ce04827a2f75a3)
#else
#define _m00
#define _m01
#define _m02
#endif