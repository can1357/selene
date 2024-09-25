#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NDIS_802_11_AI_RESFI.Capabilities", capabilities, 0x0, 0x10, true, 0xe146af483bf6bb6b)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NDIS_802_11_AI_RESFI.StatusCode", status_code, 0x10, 0x10, true, 0xb6c4ded12bbf5bec)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NDIS_802_11_AI_RESFI.AssociationId", association_id, 0x20, 0x10, true, 0xd9c41805e1482f53)
#else
#define _m00
#define _m01
#define _m02
#endif