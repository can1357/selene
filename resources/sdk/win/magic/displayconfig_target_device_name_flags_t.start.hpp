#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "DISPLAYCONFIG_TARGET_DEVICE_NAME_FLAGS.friendlyNameFromEdid", friendly_name_from_edid, 0x0, 0x1, true, 0xb7829d1692d8818d, 1, uint32_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "DISPLAYCONFIG_TARGET_DEVICE_NAME_FLAGS.friendlyNameForced", friendly_name_forced, 0x1, 0x1, true, 0x404b6a65e9e697ba, 1, uint32_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "DISPLAYCONFIG_TARGET_DEVICE_NAME_FLAGS.edidIdsValid", edid_ids_valid, 0x2, 0x1, true, 0xcaa12ffb5c1a351e, 1, uint32_t)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "DISPLAYCONFIG_TARGET_DEVICE_NAME_FLAGS.value", value, 0x0, 0x20, true, 0x61abfbd9c905a1cc)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif