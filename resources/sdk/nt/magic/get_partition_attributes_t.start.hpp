#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_GET_PARTITION_ATTRIBUTES.Version", version, 0x0, 0x20, true, 0xeada3af975c75273)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_GET_PARTITION_ATTRIBUTES.Attributes", attributes, 0x40, 0x40, true, 0x9a3f295a46b84d04)
#else
#define _m00
#define _m01
#endif