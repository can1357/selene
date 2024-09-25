#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_MINIPORT_DESCRIPTOR.Version", version, 0x0, 0x20, true, 0x5fa45cde87da011a)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_MINIPORT_DESCRIPTOR.Size", size, 0x20, 0x20, true, 0xf63239df349c8d4e)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum nt::storage_port_code_set_t), "_STORAGE_MINIPORT_DESCRIPTOR.Portdriver", portdriver, 0x40, 0x20, true, 0x3ea44fb3b330b995)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_STORAGE_MINIPORT_DESCRIPTOR.LUNResetSupported", lun_reset_supported, 0x60, 0x8, true, 0xb35bbca14012392b)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_STORAGE_MINIPORT_DESCRIPTOR.TargetResetSupported", target_reset_supported, 0x68, 0x8, true, 0x296e6e40c49dc264)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_STORAGE_MINIPORT_DESCRIPTOR.IoTimeoutValue", io_timeout_value, 0x70, 0x10, true, 0xe295872eed128708)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_STORAGE_MINIPORT_DESCRIPTOR.ExtraIoInfoSupported", extra_io_info_supported, 0x80, 0x8, true, 0x309a5fc27bb946ef)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif