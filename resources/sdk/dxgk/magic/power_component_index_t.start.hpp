#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_DXGK_POWER_COMPONENT_INDEX.PhysicalAdapterComponentIndex", physical_adapter_component_index, 0x0, 0x10, true, 0x127cd0953fc280d6)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_DXGK_POWER_COMPONENT_INDEX.PhysicalAdapterIndex", physical_adapter_index, 0x10, 0x10, true, 0xe6c03b51e896836)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_POWER_COMPONENT_INDEX.Value", value, 0x0, 0x20, true, 0xfa6477ae7ede35df)
#else
#define _m00
#define _m01
#define _m02
#endif