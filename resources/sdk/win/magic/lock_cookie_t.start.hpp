#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "LockCookie.dwFlags", dw_flags, 0x0, 0x20, true, 0x6f173c49a2218597)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "LockCookie.dwWriterSeqNum", dw_writer_seq_num, 0x20, 0x20, true, 0xdcedf9c64b80abcf)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "LockCookie.wReaderLevel", w_reader_level, 0x40, 0x10, true, 0x3de9687b02c9e6cd)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "LockCookie.wWriterLevel", w_writer_level, 0x50, 0x10, true, 0xf85e1624eb5600b5)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "LockCookie.dwThreadID", dw_thread_id, 0x60, 0x20, true, 0x373a47ad9e883131)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif