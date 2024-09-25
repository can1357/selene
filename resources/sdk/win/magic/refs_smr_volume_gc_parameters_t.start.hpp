#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_REFS_SMR_VOLUME_GC_PARAMETERS.Version", version, 0x0, 0x20, true, 0x90232eea37b4fdd8)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_REFS_SMR_VOLUME_GC_PARAMETERS.Flags", flags, 0x20, 0x20, true, 0x9c33fb2c92bc87b8)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum win::refs_smr_volume_gc_action_t), "_REFS_SMR_VOLUME_GC_PARAMETERS.Action", action, 0x40, 0x20, true, 0x54fb80a10cf74b18)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum win::refs_smr_volume_gc_method_t), "_REFS_SMR_VOLUME_GC_PARAMETERS.Method", method, 0x60, 0x20, true, 0xbdfb4f0c991a92e9)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_REFS_SMR_VOLUME_GC_PARAMETERS.IoGranularity", io_granularity, 0x80, 0x20, true, 0xfe6affe4f4788189)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_REFS_SMR_VOLUME_GC_PARAMETERS.CompressionFormat", compression_format, 0xa0, 0x20, true, 0xc60354ffff1aea86)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif