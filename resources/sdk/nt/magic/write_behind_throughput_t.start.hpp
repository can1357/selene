#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WRITE_BEHIND_THROUGHPUT.PagesYetToWrite", pages_yet_to_write, 0x0, 0x20, true, 0xdc503448316f92a4)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WRITE_BEHIND_THROUGHPUT.Throughput", throughput, 0x20, 0x20, true, 0x5d7a2325723d4ff)
#else
#define _m00
#define _m01
#endif