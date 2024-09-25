#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_REPARSE_DATA_BUFFER_EX.Flags", flags, 0x0, 0x20, true, 0x3c6d814d9f405e2f)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_REPARSE_DATA_BUFFER_EX.ExistingReparseTag", existing_reparse_tag, 0x20, 0x20, true, 0x6f9bad539d78a6ee)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_REPARSE_DATA_BUFFER_EX.ExistingReparseGuid", existing_reparse_guid, 0x40, 0x80, true, 0x551a40839910e793)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::reparse_data_buffer_t), "_REPARSE_DATA_BUFFER_EX.ReparseDataBuffer", reparse_data_buffer, 0x100, 0xc0, true, 0x9dbb891c40eac4db)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct win::reparse_guid_data_buffer_t), "_REPARSE_DATA_BUFFER_EX.ReparseGuidDataBuffer", reparse_guid_data_buffer, 0x100, 0xe0, true, 0x635cf52536e1558b)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif