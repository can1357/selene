#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DDDI_ESCAPEFLAGS.HardwareAccess", hardware_access, 0x0, 0x1, true, 0x50fe50a9ce31d0c0, 1, uint32_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DDDI_ESCAPEFLAGS.DeviceStatusQuery", device_status_query, 0x1, 0x1, true, 0xb088564dbf694272, 1, uint32_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DDDI_ESCAPEFLAGS.ChangeFrameLatency", change_frame_latency, 0x2, 0x1, true, 0xed801dbbce54fa15, 1, uint32_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DDDI_ESCAPEFLAGS.NoAdapterSynchronization", no_adapter_synchronization, 0x3, 0x1, true, 0x4b84cbf85dad8672, 1, uint32_t)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DDDI_ESCAPEFLAGS.VirtualMachineData", virtual_machine_data, 0x5, 0x1, true, 0x16bf65d86f9c65ce, 1, uint32_t)
#define _m05 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DDDI_ESCAPEFLAGS.DriverKnownEscape", driver_known_escape, 0x6, 0x1, true, 0x8789da2c5a75136, 1, uint32_t)
#define _m06 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DDDI_ESCAPEFLAGS.DriverCommonEscape", driver_common_escape, 0x7, 0x1, true, 0xe55558aaacfb43c6, 1, uint32_t)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DDDI_ESCAPEFLAGS.Value", value, 0x0, 0x20, true, 0x86b7b62c066028ea)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif