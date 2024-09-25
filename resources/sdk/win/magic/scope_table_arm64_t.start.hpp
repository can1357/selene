#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SCOPE_TABLE_ARM64.Count", count, 0x0, 0x20, true, 0x7e3f6ddcdbe9f1e9)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SCOPE_TABLE_ARM64.ScopeRecord.BeginAddress", begin_address, 0x0, 0x20, true, 0x77ef662a45a1d661)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SCOPE_TABLE_ARM64.ScopeRecord.EndAddress", end_address, 0x20, 0x20, true, 0x701c9d3299528df3)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SCOPE_TABLE_ARM64.ScopeRecord.HandlerAddress", handler_address, 0x40, 0x20, true, 0xc06694794939c2f6)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SCOPE_TABLE_ARM64.ScopeRecord.JumpTarget", jump_target, 0x60, 0x20, true, 0x509c7f45697e9f6b)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<u0_scope_record_t, 1>), "_SCOPE_TABLE_ARM64.ScopeRecord", scope_record, 0x20, 0x80, true, 0xfc176746f25d1133)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif