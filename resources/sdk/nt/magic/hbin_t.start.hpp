#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HBIN.Signature", signature, 0x0, 0x20, true, 0xdf9b806376c08139)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HBIN.FileOffset", file_offset, 0x20, 0x20, true, 0x6c2f8046d0628c96)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HBIN.Size", size, 0x40, 0x20, true, 0x88d682815194120f)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_HBIN.TimeStamp", time_stamp, 0xa0, 0x40, true, 0x73b8ec6ab075a36)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif