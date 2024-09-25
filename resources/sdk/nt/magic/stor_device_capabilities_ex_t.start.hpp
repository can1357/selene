#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_STOR_DEVICE_CAPABILITIES_EX.Version", version, 0x0, 0x10, true, 0xddbc8f1ca2c39af9)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_STOR_DEVICE_CAPABILITIES_EX.Size", size, 0x10, 0x10, true, 0x70ca7f112b332e9f)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_STOR_DEVICE_CAPABILITIES_EX.DeviceD1", device_d1, 0x20, 0x1, true, 0x3901081b2907d221, 1, uint32_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_STOR_DEVICE_CAPABILITIES_EX.DeviceD2", device_d2, 0x21, 0x1, true, 0x673d1fb80646bdd9, 1, uint32_t)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_STOR_DEVICE_CAPABILITIES_EX.LockSupported", lock_supported, 0x22, 0x1, true, 0x7e83cd84da8a675c, 1, uint32_t)
#define _m05 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_STOR_DEVICE_CAPABILITIES_EX.EjectSupported", eject_supported, 0x23, 0x1, true, 0x97096547485afec3, 1, uint32_t)
#define _m06 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_STOR_DEVICE_CAPABILITIES_EX.Removable", removable, 0x24, 0x1, true, 0x33a8714758c078b9, 1, uint32_t)
#define _m07 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_STOR_DEVICE_CAPABILITIES_EX.DockDevice", dock_device, 0x25, 0x1, true, 0xdcb9a326a181bfdd, 1, uint32_t)
#define _m08 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_STOR_DEVICE_CAPABILITIES_EX.UniqueID", unique_id, 0x26, 0x1, true, 0xa30628f87c2e790, 1, uint32_t)
#define _m09 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_STOR_DEVICE_CAPABILITIES_EX.SilentInstall", silent_install, 0x27, 0x1, true, 0xf0eb055efb30c993, 1, uint32_t)
#define _m10 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_STOR_DEVICE_CAPABILITIES_EX.RawDeviceOK", raw_device_ok, 0x28, 0x1, true, 0x3ddde79264bb1dff, 1, uint32_t)
#define _m11 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_STOR_DEVICE_CAPABILITIES_EX.SurpriseRemovalOK", surprise_removal_ok, 0x29, 0x1, true, 0x268e19448770f121, 1, uint32_t)
#define _m12 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_STOR_DEVICE_CAPABILITIES_EX.NoDisplayInUI", no_display_in_ui, 0x2a, 0x1, true, 0x17874175d1eb4b0a, 1, uint32_t)
#define _m13 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_STOR_DEVICE_CAPABILITIES_EX.DefaultWriteCacheEnabled", default_write_cache_enabled, 0x2b, 0x1, true, 0x6386fc51feaad756, 1, uint32_t)
#define _m14 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STOR_DEVICE_CAPABILITIES_EX.Address", address, 0x40, 0x20, true, 0x157325a519972a86)
#define _m15 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STOR_DEVICE_CAPABILITIES_EX.UINumber", ui_number, 0x60, 0x20, true, 0x7ca2dc13120c627d)
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
#define _m11
#define _m12
#define _m13
#define _m14
#define _m15
#endif