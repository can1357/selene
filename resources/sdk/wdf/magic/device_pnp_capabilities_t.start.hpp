#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_DEVICE_PNP_CAPABILITIES.Size", size, 0x0, 0x20, true, 0xc39df9ac1f18fecf)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_DEVICE_PNP_CAPABILITIES.LockSupported", lock_supported, 0x20, 0x20, true, 0x40ac032b7f4a2303)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_DEVICE_PNP_CAPABILITIES.EjectSupported", eject_supported, 0x40, 0x20, true, 0xb2897ebddaee81e7)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_DEVICE_PNP_CAPABILITIES.Removable", removable, 0x60, 0x20, true, 0x58d34021ccf9d64a)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_DEVICE_PNP_CAPABILITIES.DockDevice", dock_device, 0x80, 0x20, true, 0x5fce134a69dc7d4b)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_DEVICE_PNP_CAPABILITIES.UniqueID", unique_id, 0xa0, 0x20, true, 0xdb2171b1588c163b)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_DEVICE_PNP_CAPABILITIES.SilentInstall", silent_install, 0xc0, 0x20, true, 0x7c5ed6a1ad246892)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_DEVICE_PNP_CAPABILITIES.SurpriseRemovalOK", surprise_removal_ok, 0xe0, 0x20, true, 0x9b0ed7943c358d86)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_DEVICE_PNP_CAPABILITIES.HardwareDisabled", hardware_disabled, 0x100, 0x20, true, 0x75dd083052dcfd17)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_DEVICE_PNP_CAPABILITIES.NoDisplayInUI", no_display_in_ui, 0x120, 0x20, true, 0x9af4b3a38e5a1460)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_DEVICE_PNP_CAPABILITIES.Address", address, 0x140, 0x20, true, 0x4ca4c1cb8d96ca62)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_DEVICE_PNP_CAPABILITIES.UINumber", ui_number, 0x160, 0x20, true, 0xa333772d6fe464d5)
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
#endif