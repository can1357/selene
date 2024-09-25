#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CM_KEY_SECURITY_CACHE.Cell", cell, 0x0, 0x20, true, 0x182bf7107dd0b9e1)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CM_KEY_SECURITY_CACHE.ConvKey", conv_key, 0x20, 0x20, true, 0xb34ce8d16365a548)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_CM_KEY_SECURITY_CACHE.List", list, 0x40, 0x80, true, 0xa8d013b51e0e8b76)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CM_KEY_SECURITY_CACHE.DescriptorLength", descriptor_length, 0xc0, 0x20, true, 0x4ca0604d4106746f)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CM_KEY_SECURITY_CACHE.RealRefCount", real_ref_count, 0xe0, 0x20, true, 0x6db4ddb0eb2c1daf)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct sec::descriptor_relative_t), "_CM_KEY_SECURITY_CACHE.Descriptor", descriptor, 0x100, 0xa0, true, 0xfe7a147a5c64eae4)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif