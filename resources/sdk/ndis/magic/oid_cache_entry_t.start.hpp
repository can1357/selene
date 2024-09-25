#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_OID_CACHE_ENTRY.Oid", oid, 0x0, 0x0, false, 0xbf584ac6677ea249)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_OID_CACHE_ENTRY.InfoBufferLength", info_buffer_length, 0x0, 0x0, false, 0xd62ec7d26e671b48)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_NDIS_OID_CACHE_ENTRY.InfoBuffer", info_buffer, 0x0, 0x0, false, 0x83b4f938dbb57b88)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_NDIS_OID_CACHE_ENTRY.LastStatus", last_status, 0x0, 0x0, false, 0x6f170e0de264ea41)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDIS_OID_CACHE_ENTRY.ValueValid", value_valid, 0x0, 0x0, false, 0x6184d6a6c036385f)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif