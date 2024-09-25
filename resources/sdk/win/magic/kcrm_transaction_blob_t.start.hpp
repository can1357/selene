#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_KCRM_TRANSACTION_BLOB.UOW", uow, 0x0, 0x80, true, 0x5388f7d9e6a3543d)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_KCRM_TRANSACTION_BLOB.TmIdentity", tm_identity, 0x80, 0x80, true, 0x5cbaf2993c039127)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_KCRM_TRANSACTION_BLOB.IsolationLevel", isolation_level, 0x100, 0x20, true, 0xa60d0f87a19a4a56)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_KCRM_TRANSACTION_BLOB.IsolationFlags", isolation_flags, 0x120, 0x20, true, 0xde0b8a4cfdd65507)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_KCRM_TRANSACTION_BLOB.Timeout", timeout, 0x140, 0x20, true, 0xec61a6d69e7718d7)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 64>), "_KCRM_TRANSACTION_BLOB.Description", description, 0x160, 0x0, true, 0x884a71133068c116)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif