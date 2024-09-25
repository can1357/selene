#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct halp::dma_translation_buffer_t*), "_HALP_DMA_TRANSLATION_BUFFER.Next", next, 0x0, 0x40, true, 0x2b1c8c3916e568f)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HALP_DMA_TRANSLATION_BUFFER.EntryCount", entry_count, 0x40, 0x20, true, 0x608d55def41db61c)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct halp::dma_translation_entry_t*), "_HALP_DMA_TRANSLATION_BUFFER.Entries", entries, 0x80, 0x40, true, 0x356085f87cb21deb)
#else
#define _m00
#define _m01
#define _m02
#endif