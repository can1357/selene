#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "WireErrorInformationExtentV1.helpContext", help_context, 0x0, 0x20, true, 0xcdc1f8858898631e)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "WireErrorInformationExtentV1.iid", iid, 0x20, 0x80, true, 0x1d391f750abd2ecf)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "WireErrorInformationExtentV1.unique_source", unique_source, 0xa0, 0x20, true, 0x1206b514cada338b)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "WireErrorInformationExtentV1.unique_description", unique_description, 0xc0, 0x20, true, 0xdde68d5cc5fc4764)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "WireErrorInformationExtentV1.unique_helpFile", unique_help_file, 0xe0, 0x20, true, 0xcc9ff6b69fc65c2e)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 8>), "WireErrorInformationExtentV1.reservedForVersioning", reserved_for_versioning, 0x100, 0x0, true, 0x9ec819333fe08bf2)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif