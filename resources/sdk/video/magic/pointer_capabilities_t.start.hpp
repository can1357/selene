#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_VIDEO_POINTER_CAPABILITIES.Flags", flags, 0x0, 0x20, true, 0x11a485b5baa2e8d2)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_VIDEO_POINTER_CAPABILITIES.MaxWidth", max_width, 0x20, 0x20, true, 0x6c5932c895cd9603)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_VIDEO_POINTER_CAPABILITIES.MaxHeight", max_height, 0x40, 0x20, true, 0x9b9d70de3a03b0e1)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_VIDEO_POINTER_CAPABILITIES.HWPtrBitmapStart", hw_ptr_bitmap_start, 0x60, 0x20, true, 0x47dbc571d6fe0b52)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_VIDEO_POINTER_CAPABILITIES.HWPtrBitmapEnd", hw_ptr_bitmap_end, 0x80, 0x20, true, 0xa4319af6293e4a82)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif