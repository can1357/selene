#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_TRANSLATOR_INTERFACE.Size", size, 0x0, 0x10, true, 0x17342c8f1ea15fea)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_TRANSLATOR_INTERFACE.Version", version, 0x10, 0x10, true, 0xc7dad57a021c121d)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_TRANSLATOR_INTERFACE.Context", context, 0x40, 0x40, true, 0x772c46244d4475e2)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_TRANSLATOR_INTERFACE.InterfaceReference", interface_reference, 0x80, 0x40, true, 0x9a67585787c839a5)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_TRANSLATOR_INTERFACE.InterfaceDereference", interface_dereference, 0xc0, 0x40, true, 0x4f737d07940329c8)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(ptranslate_resource_handler_t ), "_TRANSLATOR_INTERFACE.TranslateResources", translate_resources, 0x100, 0x40, true, 0xdaf6580887890926)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(ptranslate_resource_requirements_handler_t ), "_TRANSLATOR_INTERFACE.TranslateResourceRequirements", translate_resource_requirements, 0x140, 0x40, true, 0x7940c4a45736879a)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif