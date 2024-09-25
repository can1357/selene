#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CONTAINERVERSION.version", version, 0x0, 0x20, true, 0x84b6d527caf008ae)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "CONTAINERVERSION.capabilityFlags", capability_flags, 0x40, 0x40, true, 0xf00784e4bb332517)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::container_extent_array_t*), "CONTAINERVERSION.extensions", extensions, 0x80, 0x40, true, 0xc4b1c0cf8d36a403)
#else
#define _m00
#define _m01
#define _m02
#endif