#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::configuration_component_data_t*), "_CONFIGURATION_COMPONENT_DATA.Parent", parent, 0x0, 0x40, true, 0xa2aecd753b652682)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::configuration_component_data_t*), "_CONFIGURATION_COMPONENT_DATA.Child", child, 0x40, 0x40, true, 0xc614a23102d0d125)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::configuration_component_data_t*), "_CONFIGURATION_COMPONENT_DATA.Sibling", sibling, 0x80, 0x40, true, 0x443a28284fd4f27c)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::configuration_component_t), "_CONFIGURATION_COMPONENT_DATA.ComponentEntry", component_entry, 0xc0, 0x40, true, 0x922ad085fd93807)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_CONFIGURATION_COMPONENT_DATA.ConfigurationData", configuration_data, 0x200, 0x40, true, 0x6c2f2a911ae74a97)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif