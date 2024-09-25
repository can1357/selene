#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEAP_INFO_BLOCK.ErrorSourceCount", error_source_count, 0x0, 0x20, true, 0xbfe3ce4148baf090)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wheap::error_source_table_t*), "_WHEAP_INFO_BLOCK.ErrorSourceTable", error_source_table, 0x40, 0x40, true, 0x1d9b009ebd996630)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wheap::work_queue_t*), "_WHEAP_INFO_BLOCK.WorkQueue", work_queue, 0x80, 0x40, true, 0x6664df63f3cb96f8)
#else
#define _m00
#define _m01
#define _m02
#endif