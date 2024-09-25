#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_PNP_BUS_INFORMATION.BusTypeGuid", bus_type_guid, 0x0, 0x80, true, 0xd5bb712f6ac59b90)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum nt::interface_type_t), "_PNP_BUS_INFORMATION.LegacyBusType", legacy_bus_type, 0x80, 0x20, true, 0x393eb8a9a810b4ee)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PNP_BUS_INFORMATION.BusNumber", bus_number, 0xa0, 0x20, true, 0x387b20bade0c42cb)
#else
#define _m00
#define _m01
#define _m02
#endif