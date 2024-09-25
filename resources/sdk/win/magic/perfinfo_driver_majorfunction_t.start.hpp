#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PERFINFO_DRIVER_MAJORFUNCTION.MajorFunction", major_function, 0x0, 0x20, true, 0xed7d1c6cb2d99180)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PERFINFO_DRIVER_MAJORFUNCTION.MinorFunction", minor_function, 0x20, 0x20, true, 0x37022cfd0df86493)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_PERFINFO_DRIVER_MAJORFUNCTION.RoutineAddr", routine_addr, 0x40, 0x40, true, 0xc2ebcb4b713be272)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_PERFINFO_DRIVER_MAJORFUNCTION.FileNamePointer", file_name_pointer, 0x80, 0x40, true, 0x9f44f5ea8b296699)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_PERFINFO_DRIVER_MAJORFUNCTION.Irp", irp, 0xc0, 0x40, true, 0xba633a1db9ad3b8a)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PERFINFO_DRIVER_MAJORFUNCTION.UniqMatchId", uniq_match_id, 0x100, 0x20, true, 0x3cb6761f9504065)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif