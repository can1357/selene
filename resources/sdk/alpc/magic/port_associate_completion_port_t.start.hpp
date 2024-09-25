#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_ALPC_PORT_ASSOCIATE_COMPLETION_PORT.CompletionKey", completion_key, 0x0, 0x40, true, 0x2e13cc2203213fdb)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_ALPC_PORT_ASSOCIATE_COMPLETION_PORT.CompletionPort", completion_port, 0x40, 0x40, true, 0xd92f4f9b99b6e1f6)
#else
#define _m00
#define _m01
#endif