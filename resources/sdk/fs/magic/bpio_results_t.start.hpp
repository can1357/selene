#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_FS_BPIO_RESULTS.OpStatus", op_status, 0x0, 0x0, false, 0x7e3c12d1fc5e497d)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_FS_BPIO_RESULTS.FailingDriverNameLen", failing_driver_name_len, 0x0, 0x0, false, 0x964f95bd5b5acb2f)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 32>), "_FS_BPIO_RESULTS.FailingDriverName", failing_driver_name, 0x0, 0x0, false, 0x65727103128d8715)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_FS_BPIO_RESULTS.FailureReasonLen", failure_reason_len, 0x0, 0x0, false, 0x30429895712527d6)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 128>), "_FS_BPIO_RESULTS.FailureReason", failure_reason, 0x0, 0x0, false, 0x696a45aaa57643a8)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif