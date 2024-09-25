#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "tagBinaryParam.Buffer", buffer, 0x0, 0x40, true, 0x8a94803305aa43ac)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int16_t), "tagBinaryParam.Size", size, 0x40, 0x10, true, 0x746164c560e57ea0)
#else
#define _m00
#define _m01
#endif