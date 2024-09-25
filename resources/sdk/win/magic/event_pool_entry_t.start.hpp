#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile uint32_t), "EventPoolEntry._dwEventState", dw_event_state, 0x0, 0x20, true, 0x9f5ad5920f199b5e)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int32_t), "EventPoolEntry._bReaderSignaled", b_reader_signaled, 0x20, 0x20, true, 0x8c732bba950b662a)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "EventPoolEntry._hReaderEvent", h_reader_event, 0x40, 0x40, true, 0x9d6d05d4be4b2f8f)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::slist_entry_t), "EventPoolEntry._listEntry", list_entry, 0x80, 0x80, true, 0xc6ed205b05e80170)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "EventPoolEntry._hWriterEvent", h_writer_event, 0x100, 0x40, true, 0x2ad58242dd58bd5)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile uint32_t), "EventPoolEntry._dwSpinningWriterID", dw_spinning_writer_id, 0x140, 0x20, true, 0xa34e44860df90175)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif