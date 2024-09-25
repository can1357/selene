#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum boot::entropy_source_id_t), "_BOOT_ENTROPY_SOURCE_LDR_RESULT.SourceId", source_id, 0x0, 0x20, true, 0xd48483c61a7a5d12)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_BOOT_ENTROPY_SOURCE_LDR_RESULT.Policy", policy, 0x40, 0x40, true, 0x8ef7104db02b3729)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum boot::entropy_source_result_code_t), "_BOOT_ENTROPY_SOURCE_LDR_RESULT.ResultCode", result_code, 0x80, 0x20, true, 0xa9db24ee3f810f98)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_BOOT_ENTROPY_SOURCE_LDR_RESULT.ResultStatus", result_status, 0xa0, 0x20, true, 0x5919a1dfa2adf58c)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_BOOT_ENTROPY_SOURCE_LDR_RESULT.Time", time, 0xc0, 0x40, true, 0xaf623b37d02702cf)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_BOOT_ENTROPY_SOURCE_LDR_RESULT.EntropyLength", entropy_length, 0x100, 0x20, true, 0x29fc7bcfb80f50f6)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 64>), "_BOOT_ENTROPY_SOURCE_LDR_RESULT.EntropyData", entropy_data, 0x120, 0x0, true, 0xcc2e53ab53432f29)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif