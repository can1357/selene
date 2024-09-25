#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_GET_QUOTA_INFORMATION.NextEntryOffset", next_entry_offset, 0x0, 0x20, true, 0x509913c264fdcd1f)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_GET_QUOTA_INFORMATION.SidLength", sid_length, 0x20, 0x20, true, 0xce38286dbb349fb3)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::sid_t), "_FILE_GET_QUOTA_INFORMATION.Sid", sid, 0x40, 0x60, true, 0x9ebd62649c747c6e)
#else
#define _m00
#define _m01
#define _m02
#endif