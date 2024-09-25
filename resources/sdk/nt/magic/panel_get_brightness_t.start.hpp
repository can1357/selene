#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum nt::brightness_interface_version_t), "_PANEL_GET_BRIGHTNESS.Version", version, 0x0, 0x20, true, 0x3f9815c50851fe9b)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_PANEL_GET_BRIGHTNESS.Level", level, 0x20, 0x8, true, 0xe0c8e1d370dd948c)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PANEL_GET_BRIGHTNESS.CurrentInMillinits", current_in_millinits, 0x20, 0x20, true, 0x5ea942074034742a)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PANEL_GET_BRIGHTNESS.TargetInMillinits", target_in_millinits, 0x40, 0x20, true, 0xbc4753df9a6f6a74)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif