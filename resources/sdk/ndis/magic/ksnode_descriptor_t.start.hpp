#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const struct ndis::ksautomation_table_t*), "_KSNODE_DESCRIPTOR.AutomationTable", automation_table, 0x0, 0x0, false, 0x1ac9a8d04499f341)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const struct nt::guid_t*), "_KSNODE_DESCRIPTOR.Type", type, 0x0, 0x0, false, 0x237c4315cfb48f21)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const struct nt::guid_t*), "_KSNODE_DESCRIPTOR.Name", name, 0x0, 0x0, false, 0x9ab7182229dda760)
#else
#define _m00
#define _m01
#define _m02
#endif