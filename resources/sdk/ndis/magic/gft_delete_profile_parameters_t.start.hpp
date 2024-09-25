#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::object_header_t), "_NDIS_GFT_DELETE_PROFILE_PARAMETERS.Header", header, 0x0, 0x20, true, 0x625a79956a92fe5c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_GFT_DELETE_PROFILE_PARAMETERS.Flags", flags, 0x20, 0x20, true, 0x6c8bb52c36368ec)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_GFT_DELETE_PROFILE_PARAMETERS.ProfileId", profile_id, 0x40, 0x20, true, 0x23a4926a91cb2f16)
#else
#define _m00
#define _m01
#define _m02
#endif