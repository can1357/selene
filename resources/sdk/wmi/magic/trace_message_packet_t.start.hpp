#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_WMI_TRACE_MESSAGE_PACKET.MessageNumber", message_number, 0x0, 0x10, true, 0x711410100c26116a)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_WMI_TRACE_MESSAGE_PACKET.OptionFlags", option_flags, 0x10, 0x10, true, 0x7a28003817ee0d9)
#else
#define _m00
#define _m01
#endif