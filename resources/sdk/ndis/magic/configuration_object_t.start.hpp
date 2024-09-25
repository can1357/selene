#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::object_header_t), "_NDIS_CONFIGURATION_OBJECT.Header", header, 0x0, 0x20, true, 0xafcbba7349382335)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_NDIS_CONFIGURATION_OBJECT.NdisHandle", ndis_handle, 0x40, 0x40, true, 0x6cb904614cc4f54e)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_CONFIGURATION_OBJECT.Flags", flags, 0x80, 0x20, true, 0x5200cc029cf7a48f)
#else
#define _m00
#define _m01
#define _m02
#endif