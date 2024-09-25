#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::registry_key_t), "PrivHiveCacheData.privHiveRoot", priv_hive_root, 0x80, 0x40, true, 0xe1b06f7bb0d5a052)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "PrivHiveCacheData.samDesired", sam_desired, 0xc0, 0x20, true, 0x5b40c5d46248a325)
#else
#define _m00
#define _m01
#endif