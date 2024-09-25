#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DMM_MONITORDESCRIPTOR_SERIALIZATION.Id", id, 0x0, 0x20, true, 0x31141f2b71032599)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum d3dk::mdt::monitor_descriptor_type_t), "_DMM_MONITORDESCRIPTOR_SERIALIZATION.Type", type, 0x20, 0x20, true, 0xffb60eec1dca16f2)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum d3dk::mdt::monitor_capabilities_origin_t), "_DMM_MONITORDESCRIPTOR_SERIALIZATION.Origin", origin, 0x40, 0x20, true, 0xa5ea18827f6e8ba2)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 128>), "_DMM_MONITORDESCRIPTOR_SERIALIZATION.Data", data, 0x60, 0x0, true, 0x5b6e8a4ca4bf5456)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif