#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SCOPE_TABLE_ARM.Count", count, 0x0, 0x20, true, 0xce36fd84e97a338e)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SCOPE_TABLE_ARM.ScopeRecord.BeginAddress", begin_address, 0x0, 0x20, true, 0x8b0f2a6fce11c244)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SCOPE_TABLE_ARM.ScopeRecord.EndAddress", end_address, 0x20, 0x20, true, 0xfdaebb121c99a2bf)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SCOPE_TABLE_ARM.ScopeRecord.HandlerAddress", handler_address, 0x40, 0x20, true, 0x64f003b68d92ad06)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SCOPE_TABLE_ARM.ScopeRecord.JumpTarget", jump_target, 0x60, 0x20, true, 0x5587f751c2fa1f14)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<u0_scope_record_t, 1>), "_SCOPE_TABLE_ARM.ScopeRecord", scope_record, 0x20, 0x80, true, 0xb44a07fa48f27dda)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif