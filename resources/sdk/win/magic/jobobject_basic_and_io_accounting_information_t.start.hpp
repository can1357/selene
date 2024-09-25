#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(jobobject_basic_accounting_information_t ), "_JOBOBJECT_BASIC_AND_IO_ACCOUNTING_INFORMATION.BasicInfo", basic_info, 0x0, 0x80, true, 0x46d5c63314e2dd0d)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct io::counters_t), "_JOBOBJECT_BASIC_AND_IO_ACCOUNTING_INFORMATION.IoInfo", io_info, 0x180, 0x80, true, 0xb98741d14a233892)
#else
#define _m00
#define _m01
#endif