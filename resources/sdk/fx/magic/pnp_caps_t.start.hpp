#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(int2_t), "FxPnpCaps.ByEnum.LockSupported", lock_supported, 0x0, 0x2, true, 0x61727a1fcd6ed917, 2, uint32_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(int2_t), "FxPnpCaps.ByEnum.EjectSupported", eject_supported, 0x2, 0x2, true, 0x139d27c88754fded, 2, uint32_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(int2_t), "FxPnpCaps.ByEnum.Removable", removable, 0x4, 0x2, true, 0xec71b2c5edcf7352, 2, uint32_t)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(int2_t), "FxPnpCaps.ByEnum.DockDevice", dock_device, 0x6, 0x2, true, 0x1086dc4bc1940148, 2, uint32_t)
#define _m04 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(int2_t), "FxPnpCaps.ByEnum.UniqueID", unique_id, 0x8, 0x2, true, 0x8ba82c8fddd325b4, 2, uint32_t)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(int2_t), "FxPnpCaps.ByEnum.SilentInstall", silent_install, 0xa, 0x2, true, 0xa2450d19c2882aad, 2, uint32_t)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(int2_t), "FxPnpCaps.ByEnum.SurpriseRemovalOK", surprise_removal_ok, 0xc, 0x2, true, 0x3b214f4f5616f971, 2, uint32_t)
#define _m07 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(int2_t), "FxPnpCaps.ByEnum.HardwareDisabled", hardware_disabled, 0xe, 0x2, true, 0xf87df70307be90ef, 2, uint32_t)
#define _m08 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(int2_t), "FxPnpCaps.ByEnum.NoDisplayInUI", no_display_in_ui, 0x10, 0x2, true, 0x7bd6fd97a399400, 2, uint32_t)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_by_enum_t), "FxPnpCaps.ByEnum", by_enum, 0x0, 0x20, true, 0xec635ed4b3096b59)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "FxPnpCaps.Value", value, 0x0, 0x20, true, 0x3863d272ff895bc9)
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