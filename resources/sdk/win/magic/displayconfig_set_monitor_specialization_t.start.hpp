#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::displayconfig_device_info_header_t), "_DISPLAYCONFIG_SET_MONITOR_SPECIALIZATION.header", header, 0x0, 0x0, false, 0x65dea350ab37457b)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DISPLAYCONFIG_SET_MONITOR_SPECIALIZATION.isSpecializationEnabled", is_specialization_enabled, 0x0, 0x0, false, 0xe33244b88e26fb87, 1, uint32_t)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DISPLAYCONFIG_SET_MONITOR_SPECIALIZATION.value", value, 0x0, 0x0, false, 0x469a1017536d665)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_DISPLAYCONFIG_SET_MONITOR_SPECIALIZATION.specializationType", specialization_type, 0x0, 0x0, false, 0x34415e0ef8f5a7fe)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_DISPLAYCONFIG_SET_MONITOR_SPECIALIZATION.specializationSubType", specialization_sub_type, 0x0, 0x0, false, 0xef4a1d077686030c)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 128>), "_DISPLAYCONFIG_SET_MONITOR_SPECIALIZATION.specializationApplicationName", specialization_application_name, 0x0, 0x0, false, 0x883b4d697869daa4)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif