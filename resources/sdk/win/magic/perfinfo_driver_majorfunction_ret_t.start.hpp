#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_PERFINFO_DRIVER_MAJORFUNCTION_RET.Irp", irp, 0x0, 0x40, true, 0x4956283eff7eb23a)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PERFINFO_DRIVER_MAJORFUNCTION_RET.UniqMatchId", uniq_match_id, 0x40, 0x20, true, 0x74541d0106d5d70d)
#else
#define _m00
#define _m01
#endif