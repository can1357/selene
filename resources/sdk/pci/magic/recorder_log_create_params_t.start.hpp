#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RECORDER_LOG_CREATE_PARAMS.Size", size, 0x0, 0x20, true, 0x88d3b2cd2c18d87b)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RECORDER_LOG_CREATE_PARAMS.LogTag", log_tag, 0x20, 0x20, true, 0x638665e298c7c8e5)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RECORDER_LOG_CREATE_PARAMS.TotalBufferSize", total_buffer_size, 0x40, 0x20, true, 0x32ab0935d58202ac)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RECORDER_LOG_CREATE_PARAMS.ErrorPartitionSize", error_partition_size, 0x60, 0x20, true, 0x2a76da943fbaeea)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_RECORDER_LOG_CREATE_PARAMS.LogIdentifierAppendValue", log_identifier_append_value, 0x80, 0x40, true, 0xf3c67f840d9d051)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_RECORDER_LOG_CREATE_PARAMS.LogIdentifierAppendValueSet", log_identifier_append_value_set, 0xc0, 0x8, true, 0x17e2b74cc0580b75)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RECORDER_LOG_CREATE_PARAMS.LogIdentifierSize", log_identifier_size, 0xe0, 0x20, true, 0x2b0a342054e6d8e)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<char, 16>), "_RECORDER_LOG_CREATE_PARAMS.LogIdentifier", log_identifier, 0x100, 0x80, true, 0x8a7f17a5a01f4130)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif