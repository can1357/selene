#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_NDIS_GUID.Guid", guid, 0x0, 0x80, true, 0x375962cfe75b14ba)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_GUID.Oid", oid, 0x80, 0x20, true, 0xe7779a25896d0981)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_NDIS_GUID.Status", status, 0x80, 0x20, true, 0xd06b5ab1d5b4f282)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_GUID.Size", size, 0xa0, 0x20, true, 0x4b3cc801fb5633ba)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_GUID.Flags", flags, 0xc0, 0x20, true, 0xbe8ae40d2f3bd4cf)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif