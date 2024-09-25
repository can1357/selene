#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(int32_t), "DISPLAYCONFIG_DEVICE_INFO_HEADER.type", type, 0x0, 0x20, true, 0x72e643fbda6c0185, 32, uint32_t)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "DISPLAYCONFIG_DEVICE_INFO_HEADER.size", size, 0x20, 0x20, true, 0x9eb48f974991dda5)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::luid_t), "DISPLAYCONFIG_DEVICE_INFO_HEADER.adapterId", adapter_id, 0x40, 0x40, true, 0x9006298912bad8ba)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "DISPLAYCONFIG_DEVICE_INFO_HEADER.id", id, 0x80, 0x20, true, 0x76f28b003747d966)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif