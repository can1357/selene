#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_STORAGE_ERRORLOG_PACKET.MajorFunctionCode", major_function_code, 0x0, 0x8, true, 0xb11e60560157bc34)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_STORAGE_ERRORLOG_PACKET.RetryCount", retry_count, 0x8, 0x8, true, 0x2b04d95f65455843)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_STORAGE_ERRORLOG_PACKET.DumpDataSize", dump_data_size, 0x10, 0x10, true, 0xd44830d81f0bf373)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_STORAGE_ERRORLOG_PACKET.NumberOfStrings", number_of_strings, 0x20, 0x10, true, 0x47be2e7afda562d1)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_STORAGE_ERRORLOG_PACKET.StringOffset", string_offset, 0x30, 0x10, true, 0xe2fe915b67e681b8)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_STORAGE_ERRORLOG_PACKET.EventCategory", event_category, 0x40, 0x10, true, 0x2686bb9125699d74)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_ERRORLOG_PACKET.ErrorCode", error_code, 0x60, 0x20, true, 0xd675434bf8fd91c3)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_ERRORLOG_PACKET.UniqueErrorValue", unique_error_value, 0x80, 0x20, true, 0x862d05c93f53ef1f)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_ERRORLOG_PACKET.FinalStatus", final_status, 0xa0, 0x20, true, 0x3a95225dc97aa640)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_ERRORLOG_PACKET.SequenceNumber", sequence_number, 0xc0, 0x20, true, 0x22a4ebe2c29f1607)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_ERRORLOG_PACKET.IoControlCode", io_control_code, 0xe0, 0x20, true, 0x1460c6766ee21155)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_STORAGE_ERRORLOG_PACKET.DeviceOffset", device_offset, 0x100, 0x40, true, 0x87d984f58c23c6bc)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 1>), "_STORAGE_ERRORLOG_PACKET.DumpData", dump_data, 0x140, 0x20, true, 0xcee3ff9abe1da60e)
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