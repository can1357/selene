#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CONTAINER_EXTENT.id", id, 0x0, 0x20, true, 0x34a08b032c7d9c39)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CONTAINER_EXTENT.version", version, 0x20, 0x20, true, 0x31f627758c9bac5d)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CONTAINER_EXTENT.size", size, 0x40, 0x20, true, 0x961097b912e50f1a)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 1>), "CONTAINER_EXTENT.data", data, 0x60, 0x8, true, 0x5dcd7f1ba049d446)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif