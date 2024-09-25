#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_STOR_DEVICE_CAPABILITIES.Version", version, 0x0, 0x10, true, 0xb744c9bfa130d6c4)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_STOR_DEVICE_CAPABILITIES.DeviceD1", device_d1, 0x20, 0x1, true, 0xb574cd232f85eb46, 1, uint32_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_STOR_DEVICE_CAPABILITIES.DeviceD2", device_d2, 0x21, 0x1, true, 0x28ab64c4363fea, 1, uint32_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_STOR_DEVICE_CAPABILITIES.LockSupported", lock_supported, 0x22, 0x1, true, 0x19d04e5610a14f21, 1, uint32_t)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_STOR_DEVICE_CAPABILITIES.EjectSupported", eject_supported, 0x23, 0x1, true, 0x457bdbde0942245e, 1, uint32_t)
#define _m05 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_STOR_DEVICE_CAPABILITIES.Removable", removable, 0x24, 0x1, true, 0x52cea8be1943b46, 1, uint32_t)
#define _m06 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_STOR_DEVICE_CAPABILITIES.DockDevice", dock_device, 0x25, 0x1, true, 0x3e41a10699c72c7e, 1, uint32_t)
#define _m07 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_STOR_DEVICE_CAPABILITIES.UniqueID", unique_id, 0x26, 0x1, true, 0x531f37a415d252f5, 1, uint32_t)
#define _m08 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_STOR_DEVICE_CAPABILITIES.SilentInstall", silent_install, 0x27, 0x1, true, 0x7563e3e665455491, 1, uint32_t)
#define _m09 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_STOR_DEVICE_CAPABILITIES.SurpriseRemovalOK", surprise_removal_ok, 0x28, 0x1, true, 0x605c9e04ee273c74, 1, uint32_t)
#define _m10 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_STOR_DEVICE_CAPABILITIES.NoDisplayInUI", no_display_in_ui, 0x29, 0x1, true, 0x3438c043a71efb48, 1, uint32_t)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#define _m09
#define _m10
#endif