#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_PCI_SECURITY_INTERFACE2.Size", size, 0x0, 0x0, false, 0x7977110ddaf348fc)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_PCI_SECURITY_INTERFACE2.Version", version, 0x0, 0x0, false, 0xbc79085ed73a37e5)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_PCI_SECURITY_INTERFACE2.Context", context, 0x0, 0x0, false, 0xc5df863bbf9da4fb)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_PCI_SECURITY_INTERFACE2.InterfaceReference", interface_reference, 0x0, 0x0, false, 0xddebac96301e871b)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_PCI_SECURITY_INTERFACE2.InterfaceDereference", interface_dereference, 0x0, 0x0, false, 0xacffe6ba11e92986)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PCI_SECURITY_INTERFACE2.Flags", flags, 0x0, 0x0, false, 0x72b73f06e7510a03)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PCI_SECURITY_INTERFACE2.SupportedScenarios", supported_scenarios, 0x0, 0x0, false, 0x94a0093831883680)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, uint32_t, uint32_t)>*), "_PCI_SECURITY_INTERFACE2.SetAccessControlServices", set_access_control_services, 0x0, 0x0, false, 0xd09ea8b52d19fcee)
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