#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PROCESS_PRIORITY_CLASS.Foreground", foreground, 0x0, 0x8, true, 0xedb514821fdb5cc0)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PROCESS_PRIORITY_CLASS.PriorityClass", priority_class, 0x8, 0x8, true, 0xe006ac216a67f6bf)
#else
#define _m00
#define _m01
#endif