#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum fs::bpio_operations_t), "_FS_BPIO_OUTPUT.Operation", operation, 0x0, 0x0, false, 0xe8a3162568adc482)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum fs::bpio_outflags_t), "_FS_BPIO_OUTPUT.OutFlags", out_flags, 0x0, 0x0, false, 0x7744bfbb34bf44af)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fs::bpio_results_t), "_FS_BPIO_OUTPUT.Enable", enable, 0x0, 0x0, false, 0x7d08f514aff678cf)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fs::bpio_results_t), "_FS_BPIO_OUTPUT.Query", query, 0x0, 0x0, false, 0xa3091704d08ff933)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fs::bpio_results_t), "_FS_BPIO_OUTPUT.VolumeStackResume", volume_stack_resume, 0x0, 0x0, false, 0xb6c1daa0ca6ec617)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fs::bpio_results_t), "_FS_BPIO_OUTPUT.StreamResume", stream_resume, 0x0, 0x0, false, 0x177af427106e320a)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fs::bpio_info_t), "_FS_BPIO_OUTPUT.GetInfo", get_info, 0x0, 0x0, false, 0x902e5cba6561f844)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif