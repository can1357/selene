#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MESSAGE_INTERRUPT_INFORMATION.MessageId", message_id, 0x0, 0x20, true, 0x6206dbbaae2bd6b0)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MESSAGE_INTERRUPT_INFORMATION.MessageData", message_data, 0x20, 0x20, true, 0x7130419b0e7d8d08)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_MESSAGE_INTERRUPT_INFORMATION.MessageAddress", message_address, 0x40, 0x40, true, 0x2f3dfc15870b9398)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MESSAGE_INTERRUPT_INFORMATION.InterruptVector", interrupt_vector, 0x80, 0x20, true, 0xf1bc0f43f020e37f)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MESSAGE_INTERRUPT_INFORMATION.InterruptLevel", interrupt_level, 0xa0, 0x20, true, 0x544f61426ac125c0)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum nt::kinterrupt_mode_t), "_MESSAGE_INTERRUPT_INFORMATION.InterruptMode", interrupt_mode, 0xc0, 0x20, true, 0x6947bb8b7447853)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif