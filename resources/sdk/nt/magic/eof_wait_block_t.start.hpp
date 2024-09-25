#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_EOF_WAIT_BLOCK.EofWaitLinks", eof_wait_links, 0x0, 0x80, true, 0xcfcaf6beb6ee2e75)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::kevent_t), "_EOF_WAIT_BLOCK.Event", event, 0x80, 0xc0, true, 0xe74371260c336472)
#else
#define _m00
#define _m01
#endif