#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_JOBOBJECT_ASSOCIATE_COMPLETION_PORT.CompletionKey", completion_key, 0x0, 0x40, true, 0x7f4b82d20cc8217)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_JOBOBJECT_ASSOCIATE_COMPLETION_PORT.CompletionPort", completion_port, 0x40, 0x40, true, 0x1f227aca94c5770f)
#else
#define _m00
#define _m01
#endif