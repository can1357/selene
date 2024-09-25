#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_CUSTOMDB_EXE_REG_DB_ENTRY.guidDB", guid_db, 0x0, 0x80, true, 0xd749812b00c88966)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_CUSTOMDB_EXE_REG_DB_ENTRY.liTimeStamp", li_time_stamp, 0x80, 0x40, true, 0x53829c8cfbb76efb)
#else
#define _m00
#define _m01
#endif