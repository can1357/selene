#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "tagOpaqueData.guid", guid, 0x0, 0x80, true, 0x4ce8c62ea7783620)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagOpaqueData.dataLength", data_length, 0x80, 0x20, true, 0x5fc048ec46aad02a)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t*), "tagOpaqueData.data", data, 0x100, 0x40, true, 0x4bf943d5826abb25)
#else
#define _m00
#define _m01
#define _m02
#endif