#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_PERFINFO_DRIVER_COMPLETE_REQUEST.RoutineAddr", routine_addr, 0x0, 0x40, true, 0x55adb7bf8b28a4e0)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_PERFINFO_DRIVER_COMPLETE_REQUEST.Irp", irp, 0x40, 0x40, true, 0xde443965f3d5d31a)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PERFINFO_DRIVER_COMPLETE_REQUEST.UniqMatchId", uniq_match_id, 0x80, 0x20, true, 0x3bfcda4f7066f710)
#else
#define _m00
#define _m01
#define _m02
#endif