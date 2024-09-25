#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_REG_SET_INFORMATION_KEY_INFORMATION.Object", object, 0x0, 0x40, true, 0x3cb09c0913b4ea6c)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum nt::key_set_information_class_t), "_REG_SET_INFORMATION_KEY_INFORMATION.KeySetInformationClass", key_set_information_class, 0x40, 0x20, true, 0xc21fa0e8c4ae6505)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_REG_SET_INFORMATION_KEY_INFORMATION.KeySetInformation", key_set_information, 0x80, 0x40, true, 0x8797ff2a449549f6)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_REG_SET_INFORMATION_KEY_INFORMATION.KeySetInformationLength", key_set_information_length, 0xc0, 0x20, true, 0x3cae6b0225094206)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_REG_SET_INFORMATION_KEY_INFORMATION.CallContext", call_context, 0x100, 0x40, true, 0x78b0b6ac131dadac)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_REG_SET_INFORMATION_KEY_INFORMATION.ObjectContext", object_context, 0x140, 0x40, true, 0xbf07a1e06bfbfaf9)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif