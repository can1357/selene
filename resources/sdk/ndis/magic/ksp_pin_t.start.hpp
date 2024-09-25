#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::ksidentifier_t), "KSP_PIN.Property", property, 0x0, 0x0, false, 0xf0ca0f66f598977f)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "KSP_PIN.PinId", pin_id, 0x0, 0x0, false, 0x6dfd1a519faf2e8)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "KSP_PIN.Flags", flags, 0x0, 0x0, false, 0xe50fb7c164a01549)
#else
#define _m00
#define _m01
#define _m02
#endif