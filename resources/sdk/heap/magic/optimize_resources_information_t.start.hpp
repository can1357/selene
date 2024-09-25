#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HEAP_OPTIMIZE_RESOURCES_INFORMATION.Version", version, 0x0, 0x20, true, 0x96ecf41a15965df3)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HEAP_OPTIMIZE_RESOURCES_INFORMATION.Flags", flags, 0x20, 0x20, true, 0xa600ba05d18aa900)
#else
#define _m00
#define _m01
#endif