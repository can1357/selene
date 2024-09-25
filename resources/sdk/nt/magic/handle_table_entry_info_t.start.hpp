#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HANDLE_TABLE_ENTRY_INFO.AuditMask", audit_mask, 0x0, 0x20, true, 0xa386b1e2c10d69e3)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HANDLE_TABLE_ENTRY_INFO.MaxRelativeAccessMask", max_relative_access_mask, 0x20, 0x20, true, 0x5ad08521044bf5a0)
#else
#define _m00
#define _m01
#endif