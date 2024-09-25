#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_MAILSLOT_PEEK_BUFFER.ReadDataAvailable", read_data_available, 0x0, 0x20, true, 0x245e7f1f6722f0a6)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_MAILSLOT_PEEK_BUFFER.NumberOfMessages", number_of_messages, 0x20, 0x20, true, 0x3e480abc6a22e0ce)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_MAILSLOT_PEEK_BUFFER.MessageLength", message_length, 0x40, 0x20, true, 0xb33bf3a4f3823bb3)
#else
#define _m00
#define _m01
#define _m02
#endif