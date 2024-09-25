#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PHYSICAL_CHANNEL_RUN.NodeNumber", node_number, 0x0, 0x20, true, 0x313db51f5fbe8efa)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PHYSICAL_CHANNEL_RUN.ChannelNumber", channel_number, 0x20, 0x20, true, 0x412a77cef747b03b)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PHYSICAL_CHANNEL_RUN.BasePage", base_page, 0x40, 0x40, true, 0x89d7f7a18114bb1e)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PHYSICAL_CHANNEL_RUN.PageCount", page_count, 0x80, 0x40, true, 0xbce038d536685aa7)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PHYSICAL_CHANNEL_RUN.Flags", flags, 0xc0, 0x40, true, 0xaaa6dcdd30440d81)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif