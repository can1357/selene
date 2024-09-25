#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(int2_t), "FxPnpState.ByEnum.Disabled", disabled, 0x0, 0x2, true, 0x5b510a7bf9079f6f, 2, uint32_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(int2_t), "FxPnpState.ByEnum.DontDisplayInUI", dont_display_in_ui, 0x2, 0x2, true, 0x348764ecc6cf2cd7, 2, uint32_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(int2_t), "FxPnpState.ByEnum.Failed", failed, 0x4, 0x2, true, 0x1a3e3e7b876f463, 2, uint32_t)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(int2_t), "FxPnpState.ByEnum.NotDisableable", not_disableable, 0x6, 0x2, true, 0x101bab4aca2d2565, 2, uint32_t)
#define _m04 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(int2_t), "FxPnpState.ByEnum.Removed", removed, 0x8, 0x2, true, 0xa1364f2f42ec3269, 2, uint32_t)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(int2_t), "FxPnpState.ByEnum.ResourcesChanged", resources_changed, 0xa, 0x2, true, 0x35d21e55db1a27f6, 2, uint32_t)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(int2_t), "FxPnpState.ByEnum.AssignedToGuest", assigned_to_guest, 0xc, 0x2, true, 0x4bbd8efcdf9992d3, 2, uint32_t)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_by_enum_t), "FxPnpState.ByEnum", by_enum, 0x0, 0x20, true, 0x972731c9487d9440)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "FxPnpState.Value", value, 0x0, 0x20, true, 0x1f5d8351d504b348)
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
#endif