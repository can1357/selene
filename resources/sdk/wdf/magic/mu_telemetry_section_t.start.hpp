#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_MU_TELEMETRY_SECTION.ComponentID", component_id, 0x0, 0x80, true, 0x4937e0f733036109)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_MU_TELEMETRY_SECTION.SubComponentID", sub_component_id, 0x80, 0x80, true, 0x420ca47354f8273e)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_MU_TELEMETRY_SECTION.ErrorStatusValue", error_status_value, 0x120, 0x20, true, 0x32662bfb607d3f13)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_MU_TELEMETRY_SECTION.AdditionalInfo1", additional_info1, 0x140, 0x40, true, 0x862a0543ec7a5e84)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_MU_TELEMETRY_SECTION.AdditionalInfo2", additional_info2, 0x180, 0x40, true, 0xe349ccb0ee9b1fe3)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif