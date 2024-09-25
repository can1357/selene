#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::displayconfig_device_info_header_t), "_DISPLAYCONFIG_GET_MONITOR_SPECIALIZATION.header", header, 0x0, 0x0, false, 0x52d8674e22eec28)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DISPLAYCONFIG_GET_MONITOR_SPECIALIZATION.isSpecializationEnabled", is_specialization_enabled, 0x0, 0x0, false, 0x452f967074ae0c90, 1, uint32_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DISPLAYCONFIG_GET_MONITOR_SPECIALIZATION.isSpecializationAvailableForMonitor", is_specialization_available_for_monitor, 0x0, 0x0, false, 0xd6d4d6405d0f918e, 1, uint32_t)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DISPLAYCONFIG_GET_MONITOR_SPECIALIZATION.isSpecializationAvailableForSystem", is_specialization_available_for_system, 0x0, 0x0, false, 0x4216263646ce922, 1, uint32_t)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DISPLAYCONFIG_GET_MONITOR_SPECIALIZATION.value", value, 0x0, 0x0, false, 0xc604f12fb4061973)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif