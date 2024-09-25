#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::port_message_t), "_LPC_CLIENT_DIED_MSG.PortMsg", port_msg, 0x0, 0x40, true, 0xc6e694945ac643d1)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_LPC_CLIENT_DIED_MSG.CreateTime", create_time, 0x140, 0x40, true, 0x7e4b2d201c8433e7)
#else
#define _m00
#define _m01
#endif