#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "WireContainerExtent.rounded_size", rounded_size, 0x0, 0x20, true, 0xf4b7218adac983e0)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "WireContainerExtent.id", id, 0x20, 0x20, true, 0xdae098b815466b1)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "WireContainerExtent.version", version, 0x40, 0x20, true, 0xedc6bfa710f2238)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "WireContainerExtent.size", size, 0x60, 0x20, true, 0xa2eb12c25a481b8)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t>), "WireContainerExtent.data", data, 0x80, 0x0, true, 0x46a4ff7512dcb64b)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif