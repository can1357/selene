#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_LB_PROVISIONING_MAP_RESOURCES.Size", size, 0x0, 0x20, true, 0xcbfbe937539889e)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_LB_PROVISIONING_MAP_RESOURCES.Version", version, 0x20, 0x20, true, 0x9b660713f101ea0)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_STORAGE_LB_PROVISIONING_MAP_RESOURCES.AvailableMappingResourcesValid", available_mapping_resources_valid, 0x40, 0x1, true, 0x7e600c7a1a11c3f8, 1, uint8_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_STORAGE_LB_PROVISIONING_MAP_RESOURCES.UsedMappingResourcesValid", used_mapping_resources_valid, 0x41, 0x1, true, 0x8a805e403818c3e0, 1, uint8_t)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_STORAGE_LB_PROVISIONING_MAP_RESOURCES.AvailableMappingResourcesScope", available_mapping_resources_scope, 0x60, 0x2, true, 0xa59d90c4a0b88b99, 2, uint8_t)
#define _m05 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_STORAGE_LB_PROVISIONING_MAP_RESOURCES.UsedMappingResourcesScope", used_mapping_resources_scope, 0x62, 0x2, true, 0x64479140fffda38b, 2, uint8_t)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_STORAGE_LB_PROVISIONING_MAP_RESOURCES.AvailableMappingResources", available_mapping_resources, 0x80, 0x40, true, 0xfdaf1806157eedad)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_STORAGE_LB_PROVISIONING_MAP_RESOURCES.UsedMappingResources", used_mapping_resources, 0xc0, 0x40, true, 0xea2e20eaf53a4307)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif