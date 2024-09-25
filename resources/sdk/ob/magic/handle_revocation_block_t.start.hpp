#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_OB_HANDLE_REVOCATION_BLOCK.RevocationInfos", revocation_infos, 0x0, 0x80, true, 0x36229983b0bd74f5)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ex::push_lock_t), "_OB_HANDLE_REVOCATION_BLOCK.Lock", lock, 0x80, 0x40, true, 0x9bcc930b186c305)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ex::rundown_ref_t), "_OB_HANDLE_REVOCATION_BLOCK.Rundown", rundown, 0xc0, 0x40, true, 0x5c52ed51d88a744c)
#else
#define _m00
#define _m01
#define _m02
#endif