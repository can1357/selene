#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORPORT_CAPTURE_LIVEDUMP.Version", version, 0x0, 0x0, false, 0xec9f658c686d1692)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORPORT_CAPTURE_LIVEDUMP.Size", size, 0x0, 0x0, false, 0xc322a88ef550c9e4)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum stor::port::storport_capture_livedump_type_t), "_STORPORT_CAPTURE_LIVEDUMP.LiveDumpType", live_dump_type, 0x0, 0x0, false, 0x99a47fc1bac33f33)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum stor::port::storport_livedump_issue_type_t), "_STORPORT_CAPTURE_LIVEDUMP.IssueType", issue_type, 0x0, 0x0, false, 0xcdb875f4d0585d48)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "_STORPORT_CAPTURE_LIVEDUMP.ComponentName", component_name, 0x0, 0x0, false, 0x2bfb31f026a83772)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum stor::port::storport_livedump_data_type_t), "_STORPORT_CAPTURE_LIVEDUMP.DataType", data_type, 0x0, 0x0, false, 0xb8ed48f55c7ec9b3)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_STORPORT_CAPTURE_LIVEDUMP.Data", data, 0x0, 0x0, false, 0x324b270cb6eb5a9e)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif