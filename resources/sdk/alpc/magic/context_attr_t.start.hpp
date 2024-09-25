#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_ALPC_CONTEXT_ATTR.PortContext", port_context, 0x0, 0x40, true, 0xd205a3a50e08434a)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_ALPC_CONTEXT_ATTR.MessageContext", message_context, 0x40, 0x40, true, 0xe5e4792485b123d6)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_ALPC_CONTEXT_ATTR.Sequence", sequence, 0x80, 0x20, true, 0xa0f8b086cd017fd8)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_ALPC_CONTEXT_ATTR.MessageId", message_id, 0xa0, 0x20, true, 0x5cab424e16107193)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_ALPC_CONTEXT_ATTR.CallbackId", callback_id, 0xc0, 0x20, true, 0xb6e999b47e6e6ce0)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif