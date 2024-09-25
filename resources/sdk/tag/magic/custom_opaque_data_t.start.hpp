#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "tagCustomOpaqueData.guid", guid, 0x0, 0x80, true, 0xd9d3b1a198fb01f7)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagCustomOpaqueData.dataLength", data_length, 0x80, 0x20, true, 0x1bc92272898c37e1)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t*), "tagCustomOpaqueData.data", data, 0x100, 0x40, true, 0xcf28f51caf7a1f2)
#else
#define _m00
#define _m01
#define _m02
#endif