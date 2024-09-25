#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_TIMELINE_BITMAP.Value", value, 0x0, 0x40, true, 0xbd50ed8f6af8eadc)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_TIMELINE_BITMAP.EndTime", end_time, 0x0, 0x20, true, 0x483c7deec74d77f9)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_TIMELINE_BITMAP.Bitmap", bitmap, 0x20, 0x20, true, 0x38df743a31d49019)
#else
#define _m00
#define _m01
#define _m02
#endif