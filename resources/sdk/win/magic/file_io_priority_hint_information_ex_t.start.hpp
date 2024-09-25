#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum io::priority_hint_t), "_FILE_IO_PRIORITY_HINT_INFORMATION_EX.PriorityHint", priority_hint, 0x0, 0x20, true, 0x4e9420fd913b46d)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_FILE_IO_PRIORITY_HINT_INFORMATION_EX.BoostOutstanding", boost_outstanding, 0x20, 0x8, true, 0x449d995f66f5d6f5)
#else
#define _m00
#define _m01
#endif