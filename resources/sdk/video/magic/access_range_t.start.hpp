#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_VIDEO_ACCESS_RANGE.RangeStart", range_start, 0x0, 0x40, true, 0x3a708268a124027b)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_VIDEO_ACCESS_RANGE.RangeLength", range_length, 0x40, 0x20, true, 0x79edbf970bb0906)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_VIDEO_ACCESS_RANGE.RangeInIoSpace", range_in_io_space, 0x60, 0x8, true, 0x190dc0b76152ebc7)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_VIDEO_ACCESS_RANGE.RangeVisible", range_visible, 0x68, 0x8, true, 0x1e675235906c0332)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_VIDEO_ACCESS_RANGE.RangeShareable", range_shareable, 0x70, 0x8, true, 0x6c306c0f1d98e35c)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_VIDEO_ACCESS_RANGE.RangePassive", range_passive, 0x78, 0x8, true, 0xda1a925edb50369c)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif