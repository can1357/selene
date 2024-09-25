#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum win::sc_action_type_t), "_SC_ACTION.Type", type, 0x0, 0x20, true, 0x890b36f8c88d8705)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SC_ACTION.Delay", delay, 0x20, 0x20, true, 0xc80ef6baa64bc956)
#else
#define _m00
#define _m01
#endif