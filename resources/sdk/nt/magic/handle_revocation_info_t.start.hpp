#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_HANDLE_REVOCATION_INFO.ListEntry", list_entry, 0x0, 0x80, true, 0x824246e7be1d7694)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ob::handle_revocation_block_t*), "_HANDLE_REVOCATION_INFO.RevocationBlock", revocation_block, 0x80, 0x40, true, 0xd6690c3aac4142c9)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_HANDLE_REVOCATION_INFO.AllowHandleRevocation", allow_handle_revocation, 0xc0, 0x8, true, 0xc1cef556a6b56e37)
#else
#define _m00
#define _m01
#define _m02
#endif