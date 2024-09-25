#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_MFND_PHYSICAL_FUNCTION_GLOBAL_PROPERTIES.Version", version, 0x0, 0x0, false, 0x1ae66dd9d1f273bb)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_MFND_PHYSICAL_FUNCTION_GLOBAL_PROPERTIES.SizeInBytes", size_in_bytes, 0x0, 0x0, false, 0x50bc02ff0f903836)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_MFND_PHYSICAL_FUNCTION_GLOBAL_PROPERTIES.Flags", flags, 0x0, 0x0, false, 0x2384a160d76d89e6)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_MFND_PHYSICAL_FUNCTION_GLOBAL_PROPERTIES.NamespaceMetadataSize", namespace_metadata_size, 0x0, 0x0, false, 0x5670b3308e2b58bc)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_MFND_PHYSICAL_FUNCTION_GLOBAL_PROPERTIES.NamespaceLBADataSize", namespace_lba_data_size, 0x0, 0x0, false, 0xf4842e2a42d04995)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_MFND_PHYSICAL_FUNCTION_GLOBAL_PROPERTIES.NamespaceDPS", namespace_dps, 0x0, 0x0, false, 0x877bb9120930bf1c)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_MFND_PHYSICAL_FUNCTION_GLOBAL_PROPERTIES.NamespaceNMIC", namespace_nmic, 0x0, 0x0, false, 0xdcd4af345f313fd8)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif