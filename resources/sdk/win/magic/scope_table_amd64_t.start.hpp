#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SCOPE_TABLE_AMD64.Count", count, 0x0, 0x20, true, 0x5d81dd7fb984d42c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SCOPE_TABLE_AMD64.ScopeRecord.BeginAddress", begin_address, 0x0, 0x20, true, 0x3ae170f8c7bba204)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SCOPE_TABLE_AMD64.ScopeRecord.EndAddress", end_address, 0x20, 0x20, true, 0x74364ff653255f67)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SCOPE_TABLE_AMD64.ScopeRecord.HandlerAddress", handler_address, 0x40, 0x20, true, 0xdc7845714afa315c)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SCOPE_TABLE_AMD64.ScopeRecord.JumpTarget", jump_target, 0x60, 0x20, true, 0x131336e52ad4b748)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<u0_scope_record_t, 1>), "_SCOPE_TABLE_AMD64.ScopeRecord", scope_record, 0x20, 0x80, true, 0x467aea3164085436)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif