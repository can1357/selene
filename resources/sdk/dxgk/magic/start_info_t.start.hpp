#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_START_INFO.RequiredDmaQueueEntry", required_dma_queue_entry, 0x0, 0x20, true, 0xc45d8c0040dcf982)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_DXGK_START_INFO.AdapterGuid", adapter_guid, 0x20, 0x80, true, 0x648806a1be0c90be)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::luid_t), "_DXGK_START_INFO.AdapterLuid", adapter_luid, 0xa0, 0x40, true, 0xc15dfddc949028b5)
#else
#define _m00
#define _m01
#define _m02
#endif