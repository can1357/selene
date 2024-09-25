#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::object_header_t), "_NDIS_GFT_HEADER_GROUP_TRANSPOSITION_PROFILE.Header", header, 0x0, 0x20, true, 0xd22365412343491c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_GFT_HEADER_GROUP_TRANSPOSITION_PROFILE.Flags", flags, 0x20, 0x20, true, 0x799c8ea4a5d07a3e)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::gft_header_group_transposition_action_t), "_NDIS_GFT_HEADER_GROUP_TRANSPOSITION_PROFILE.Action", action, 0x40, 0x20, true, 0x5ae0f8dbaba19013)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_GFT_HEADER_GROUP_TRANSPOSITION_PROFILE.HeadersPresent", headers_present, 0x60, 0x20, true, 0xb841eb7989dce552)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_GFT_HEADER_GROUP_TRANSPOSITION_PROFILE.HeaderFields", header_fields, 0x80, 0x20, true, 0x6ee4ce9b2691ec98)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif