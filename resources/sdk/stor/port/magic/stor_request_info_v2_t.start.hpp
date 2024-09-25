#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_STOR_REQUEST_INFO_V2.Version", version, 0x0, 0x10, true, 0xc2574a11ec9e3476)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_STOR_REQUEST_INFO_V2.Size", size, 0x10, 0x10, true, 0xbc26309137b09150)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum stor::port::stor_io_priority_hint_t), "_STOR_REQUEST_INFO_V2.PriorityHint", priority_hint, 0x20, 0x20, true, 0xe538909eec114509)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_STOR_REQUEST_INFO_V2.Flags", flags, 0x40, 0x20, true, 0x781fa42a953c7101)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_STOR_REQUEST_INFO_V2.Key", key, 0x60, 0x20, true, 0x313f9caf3fd826c5)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_STOR_REQUEST_INFO_V2.Length", length, 0x80, 0x20, true, 0xae05a3f666ec4091)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_STOR_REQUEST_INFO_V2.IsWriteRequest", is_write_request, 0xa0, 0x8, true, 0x8eb314b32aa78a04)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct stor::port::stor_unicode_string_t*), "_STOR_REQUEST_INFO_V2.FileName", file_name, 0xc0, 0x40, true, 0x91da86c6a57e2b31)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_STOR_REQUEST_INFO_V2.ProcessId", process_id, 0x100, 0x20, true, 0x4eb811159b286c74)
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
#endif