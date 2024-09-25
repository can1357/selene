#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::af_list_t*), "_NDIS_AF_LIST.NextAf", next_af, 0x0, 0x40, true, 0x6ee7b907ca56f403)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::open_block_t*), "_NDIS_AF_LIST.Open", open, 0x40, 0x40, true, 0x4a575b5c163a12a5)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::co_address_family_t), "_NDIS_AF_LIST.AddressFamily", address_family, 0x80, 0x60, true, 0x799e5ef9a370e854)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::call_manager_characteristics_t), "_NDIS_AF_LIST.CmChars", cm_chars, 0x100, 0x40, true, 0x8c014c4c74a1fc32)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::co_call_manager_optional_handlers_t), "_NDIS_AF_LIST.CallMgrChars", call_mgr_chars, 0x540, 0x80, true, 0xfbdf0bcb99faf4c0)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_AF_LIST.NdisMajorVersion", ndis_major_version, 0x9c0, 0x20, true, 0x4664b349ebf6ba27)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif