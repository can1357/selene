#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_MMMOD_WRITER_LISTHEAD.ListHead", list_head, 0x0, 0x80, true, 0xc933a4fd284409b3)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kgate_t), "_MMMOD_WRITER_LISTHEAD.Gate", gate, 0x80, 0xc0, true, 0x2f528c704f76ec05)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kevent_t), "_MMMOD_WRITER_LISTHEAD.Event", event, 0x80, 0xc0, true, 0xd9b7f7ec795aeeff)
#else
#define _m00
#define _m01
#define _m02
#endif