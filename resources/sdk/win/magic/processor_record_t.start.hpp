#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PROCESSOR_RECORD.Index", index, 0x0, 0x20, true, 0x3784964a3a13c5b6)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PROCESSOR_RECORD.FeatureSet", feature_set, 0x20, 0x20, true, 0xa230a15f3f30c413)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PROCESSOR_RECORD.ProcessorSpeed", processor_speed, 0x40, 0x20, true, 0x2a23e6175f9a45ab)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 64>), "_PROCESSOR_RECORD.ProcessorName", processor_name, 0x60, 0x0, true, 0x8e1c0661282d8b15)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 128>), "_PROCESSOR_RECORD.ProcessorIdentifier", processor_identifier, 0x460, 0x0, true, 0xa2c6fb7851a38f3c)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 16>), "_PROCESSOR_RECORD.VendorIdentifier", vendor_identifier, 0xc60, 0x0, true, 0x43d140d22660d96b)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif