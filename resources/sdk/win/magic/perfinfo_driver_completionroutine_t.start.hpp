#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_PERFINFO_DRIVER_COMPLETIONROUTINE.Routine", routine, 0x0, 0x40, true, 0xcd232a14ee0b0874)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_PERFINFO_DRIVER_COMPLETIONROUTINE.IrpPtr", irp_ptr, 0x40, 0x40, true, 0x8c5325092ccc88eb)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PERFINFO_DRIVER_COMPLETIONROUTINE.UniqMatchId", uniq_match_id, 0x80, 0x20, true, 0x9dfe7a27b583c453)
#else
#define _m00
#define _m01
#define _m02
#endif