#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct po::wake_source_header_t), "_PO_WAKE_SOURCE_DEVICE.Header", header, 0x0, 0x40, true, 0x30006c4b00369f9f)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 1>), "_PO_WAKE_SOURCE_DEVICE.InstancePath", instance_path, 0x40, 0x10, true, 0x900d676325978c86)
#else
#define _m00
#define _m01
#endif