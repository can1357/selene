#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_PERFINFO_DRIVER_COMPLETE_REQUEST_RET.Irp", irp, 0x0, 0x40, true, 0xd4c76898770302c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PERFINFO_DRIVER_COMPLETE_REQUEST_RET.UniqMatchId", uniq_match_id, 0x40, 0x20, true, 0x6463ee6d08e42858)
#else
#define _m00
#define _m01
#endif