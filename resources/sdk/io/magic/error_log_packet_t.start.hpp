#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_IO_ERROR_LOG_PACKET.MajorFunctionCode", major_function_code, 0x0, 0x8, true, 0xa23bd21e24169596)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_IO_ERROR_LOG_PACKET.RetryCount", retry_count, 0x8, 0x8, true, 0xd36b31c2b8becbe8)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_IO_ERROR_LOG_PACKET.DumpDataSize", dump_data_size, 0x10, 0x10, true, 0xd39eea807d3c53ef)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_IO_ERROR_LOG_PACKET.NumberOfStrings", number_of_strings, 0x20, 0x10, true, 0xdf50be8776a0ce31)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_IO_ERROR_LOG_PACKET.StringOffset", string_offset, 0x30, 0x10, true, 0x285fcd089ac00b6a)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_IO_ERROR_LOG_PACKET.EventCategory", event_category, 0x40, 0x10, true, 0x58b58d71b8fb2fa3)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_IO_ERROR_LOG_PACKET.ErrorCode", error_code, 0x60, 0x20, true, 0x10616a63d2587fa)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_IO_ERROR_LOG_PACKET.UniqueErrorValue", unique_error_value, 0x80, 0x20, true, 0x80f9ab0078880e56)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_IO_ERROR_LOG_PACKET.FinalStatus", final_status, 0xa0, 0x20, true, 0xe5420547f52b39c4)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_IO_ERROR_LOG_PACKET.SequenceNumber", sequence_number, 0xc0, 0x20, true, 0x569dc3e259331441)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_IO_ERROR_LOG_PACKET.IoControlCode", io_control_code, 0xe0, 0x20, true, 0x24e344f53e4b2860)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_IO_ERROR_LOG_PACKET.DeviceOffset", device_offset, 0x100, 0x40, true, 0xa26cd8f4c73b37e8)
#define _m12 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 1>), "_IO_ERROR_LOG_PACKET.DumpData", dump_data, 0x140, 0x20, true, 0x4ea1f0fd47109a68)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#define _m09
#define _m10
#define _m11
#define _m12
#endif