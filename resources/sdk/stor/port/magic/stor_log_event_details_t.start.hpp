#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_STOR_LOG_EVENT_DETAILS.InterfaceRevision", interface_revision, 0x0, 0x20, true, 0x4a7a7d4510d75d78)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_STOR_LOG_EVENT_DETAILS.Size", size, 0x20, 0x20, true, 0x82353223e694d0f9)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_STOR_LOG_EVENT_DETAILS.Flags", flags, 0x40, 0x20, true, 0x7a3841b19a7726)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum stor::port::stor_event_association_enum_t), "_STOR_LOG_EVENT_DETAILS.EventAssociation", event_association, 0x60, 0x20, true, 0x47aa31410eb0eaf1)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_STOR_LOG_EVENT_DETAILS.PathId", path_id, 0x80, 0x20, true, 0xd90d6dbe490369d5)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_STOR_LOG_EVENT_DETAILS.TargetId", target_id, 0xa0, 0x20, true, 0xd20e81f4814a9d64)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_STOR_LOG_EVENT_DETAILS.LunId", lun_id, 0xc0, 0x20, true, 0x8d738414ca3ae7ba)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_STOR_LOG_EVENT_DETAILS.StorportSpecificErrorCode", storport_specific_error_code, 0xe0, 0x8, true, 0x959524c7808234c8)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_STOR_LOG_EVENT_DETAILS.ErrorCode", error_code, 0x100, 0x20, true, 0x3f616c524b2f8d67)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_STOR_LOG_EVENT_DETAILS.UniqueId", unique_id, 0x120, 0x20, true, 0x261f834d7c0f5455)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_STOR_LOG_EVENT_DETAILS.DumpDataSize", dump_data_size, 0x140, 0x20, true, 0x69236f1db0e7ac0e)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_STOR_LOG_EVENT_DETAILS.DumpData", dump_data, 0x180, 0x40, true, 0xfe8968dcd98fc1)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_STOR_LOG_EVENT_DETAILS.StringCount", string_count, 0x1c0, 0x20, true, 0xeab4b6eb160dc472)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t**), "_STOR_LOG_EVENT_DETAILS.StringList", string_list, 0x200, 0x40, true, 0x1ac9624cdb6b88ea)
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
#define _m13
#endif