#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_REENUMERATE_SELF_INTERFACE_STANDARD.Size", size, 0x0, 0x10, true, 0x8211f5982a83333e)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_REENUMERATE_SELF_INTERFACE_STANDARD.Version", version, 0x10, 0x10, true, 0x2a49648a8c5667f4)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_REENUMERATE_SELF_INTERFACE_STANDARD.Context", context, 0x40, 0x40, true, 0x938eac22a7ee48b1)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_REENUMERATE_SELF_INTERFACE_STANDARD.InterfaceReference", interface_reference, 0x80, 0x40, true, 0xeafa7ddeb262033a)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_REENUMERATE_SELF_INTERFACE_STANDARD.InterfaceDereference", interface_dereference, 0xc0, 0x40, true, 0x22e914f37bb48e99)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_REENUMERATE_SELF_INTERFACE_STANDARD.SurpriseRemoveAndReenumerateSelf", surprise_remove_and_reenumerate_self, 0x100, 0x40, true, 0xe521fb14a00d4fb4)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif