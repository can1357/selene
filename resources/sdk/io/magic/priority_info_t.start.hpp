#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_IO_PRIORITY_INFO.Size", size, 0x0, 0x20, true, 0x989f068dd505c5ce)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_IO_PRIORITY_INFO.ThreadPriority", thread_priority, 0x20, 0x20, true, 0x4f15f064ecda2cb1)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_IO_PRIORITY_INFO.PagePriority", page_priority, 0x40, 0x20, true, 0xc59720ad0945d6fe)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum io::priority_hint_t), "_IO_PRIORITY_INFO.IoPriority", io_priority, 0x60, 0x20, true, 0xdf99de94bda38c83)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif