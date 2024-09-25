#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct kuser::devpropcompkey_t), "_DEVPROPERTY.CompKey", comp_key, 0x0, 0x0, true, 0xc897a99c7d45e798)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DEVPROPERTY.Type", type, 0x100, 0x20, true, 0x92ec177be0ec79f2)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DEVPROPERTY.BufferSize", buffer_size, 0x120, 0x20, true, 0x19445e7a0c9b49ed)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_DEVPROPERTY.Buffer", buffer, 0x140, 0x40, true, 0xc4df081a703844ae)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif