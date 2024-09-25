#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_ETW_QUEUE_ENTRY.ListEntry", list_entry, 0x0, 0x80, true, 0xb9a6cf71e0db75c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct etwp::notification_header_t*), "_ETW_QUEUE_ENTRY.DataBlock", data_block, 0x80, 0x40, true, 0x22209a3abb82897e)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct etw::reg_entry_t*), "_ETW_QUEUE_ENTRY.RegEntry", reg_entry, 0xc0, 0x40, true, 0xeafa717a2b755447)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct etw::reg_entry_t*), "_ETW_QUEUE_ENTRY.ReplyObject", reply_object, 0x100, 0x40, true, 0x53d9abb081ddfca8)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_ETW_QUEUE_ENTRY.WakeReference", wake_reference, 0x140, 0x40, true, 0xb90fafd9fabf6041)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_ETW_QUEUE_ENTRY.RegIndex", reg_index, 0x180, 0x10, true, 0xc1ca52085b302742)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_ETW_QUEUE_ENTRY.ReplyIndex", reply_index, 0x190, 0x10, true, 0x8b7e7bec2cd0fab7)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETW_QUEUE_ENTRY.Flags", flags, 0x1a0, 0x20, true, 0x6a1ddc6e6f3c84ec)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif