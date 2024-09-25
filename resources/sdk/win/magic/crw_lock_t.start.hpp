#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile uint64_t), "CRWLock._ulLockState", ul_lock_state, 0x0, 0x40, true, 0x795c335cd95c2bd9)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile uint32_t), "CRWLock._dwWriterSeqNum", dw_writer_seq_num, 0x40, 0x20, true, 0x3a4ba2942b083c87)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile uint32_t), "CRWLock._dwWriterID", dw_writer_id, 0x60, 0x20, true, 0xc00b776f3f7721df)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "CRWLock._wFlags", w_flags, 0x80, 0x10, true, 0x80918584b8e298db)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "CRWLock._wWriterLevel", w_writer_level, 0x90, 0x10, true, 0x328eb9c11de3810)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile uint32_t), "CRWLock._dwEventState", dw_event_state, 0xc0, 0x20, true, 0x199253fe463b9859)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile uint32_t), "CRWLock._dwHighPart", dw_high_part, 0xe0, 0x20, true, 0xc8e7119ead70a5dc)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::event_pool_entry_t volatile*), "CRWLock._pPoolEntry", p_pool_entry, 0xc0, 0x40, true, 0x3ee7769c022c5b89)
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