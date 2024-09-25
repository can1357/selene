#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum boot::entropy_source_id_t), "_BOOT_ENTROPY_SOURCE_NT_RESULT.SourceId", source_id, 0x0, 0x20, true, 0x9f852a6c4e0401ea)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_BOOT_ENTROPY_SOURCE_NT_RESULT.Policy", policy, 0x40, 0x40, true, 0xe4370b05084825e4)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum boot::entropy_source_result_code_t), "_BOOT_ENTROPY_SOURCE_NT_RESULT.ResultCode", result_code, 0x80, 0x20, true, 0x6d78ad0221442a31)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_BOOT_ENTROPY_SOURCE_NT_RESULT.ResultStatus", result_status, 0xa0, 0x20, true, 0xac34014539a705d4)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_BOOT_ENTROPY_SOURCE_NT_RESULT.Time", time, 0xc0, 0x40, true, 0x481592a79a39421)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_BOOT_ENTROPY_SOURCE_NT_RESULT.EntropyLength", entropy_length, 0x100, 0x20, true, 0x67a92b828ec3509c)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 64>), "_BOOT_ENTROPY_SOURCE_NT_RESULT.EntropyData", entropy_data, 0x120, 0x0, true, 0xe4a19c9745dcc127)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif