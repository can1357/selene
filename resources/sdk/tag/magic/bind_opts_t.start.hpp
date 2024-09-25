#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagBIND_OPTS.cbStruct", cb_struct, 0x0, 0x20, true, 0x10ea818e1f05873d)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagBIND_OPTS.grfFlags", grf_flags, 0x20, 0x20, true, 0xac104f5fe1623168)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagBIND_OPTS.grfMode", grf_mode, 0x40, 0x20, true, 0xdabffd2dce56f19d)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagBIND_OPTS.dwTickCountDeadline", dw_tick_count_deadline, 0x60, 0x20, true, 0x4dd57db7fbbb58ab)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif