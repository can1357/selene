#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HALP_DMA_CHANNEL.ChannelNumber", channel_number, 0x0, 0x20, true, 0xa9de540fd4c7c9a9)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_HALP_DMA_CHANNEL.Initialized", initialized, 0x20, 0x8, true, 0x780806cbb7ab5617)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_HALP_DMA_CHANNEL.Busy", busy, 0x28, 0x8, true, 0xb66fa8defcbb724c)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_HALP_DMA_CHANNEL.Complete", complete, 0x30, 0x8, true, 0xf69803d6702cbf5f)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct dma::adapter_t*, struct nt::device_object_t*, void*, enum dma::completion_status_t)>*), "_HALP_DMA_CHANNEL.CurrentCompletionRoutine", current_completion_routine, 0x40, 0x40, true, 0x9a66a47b9e57a589)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_HALP_DMA_CHANNEL.CurrentCompletionContext", current_completion_context, 0x80, 0x40, true, 0x1faee19b9fdc2929)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::adapter_object_t*), "_HALP_DMA_CHANNEL.CurrentChildAdapter", current_child_adapter, 0xc0, 0x40, true, 0xc284c582aef03d72)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum dma::interrupt_type_t), "_HALP_DMA_CHANNEL.CurrentInterruptType", current_interrupt_type, 0x100, 0x20, true, 0x76cc35b78cfa3c08)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kdpc_t), "_HALP_DMA_CHANNEL.Dpc", dpc, 0x140, 0x0, true, 0xbf786f9468da1839)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_HALP_DMA_CHANNEL.GeneratesInterrupt", generates_interrupt, 0x340, 0x8, true, 0xb8a253815dc978f4)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_HALP_DMA_CHANNEL.Gsi", gsi, 0x360, 0x20, true, 0x15c0e960d2ef36de)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum nt::kinterrupt_polarity_t), "_HALP_DMA_CHANNEL.InterruptPolarity", interrupt_polarity, 0x380, 0x20, true, 0xa25955e17ccc4a6)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum nt::kinterrupt_mode_t), "_HALP_DMA_CHANNEL.InterruptMode", interrupt_mode, 0x3a0, 0x20, true, 0x82f4462534ed67d3)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HALP_DMA_CHANNEL.CommonBufferLength", common_buffer_length, 0x3c0, 0x20, true, 0x1545b7183e4a9872)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_HALP_DMA_CHANNEL.CommonBufferVirtualAddress", common_buffer_virtual_address, 0x400, 0x40, true, 0xaf04b5be42f7aecf)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_HALP_DMA_CHANNEL.CommonBufferLogicalAddress", common_buffer_logical_address, 0x440, 0x40, true, 0x5bc1dea007a9dfde)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_HALP_DMA_CHANNEL.AdapterQueue", adapter_queue, 0x480, 0x80, true, 0xc7965ec40cb60318)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#define _m09
#define _m10
#define _m11
#define _m12
#define _m13
#define _m14
#define _m15
#define _m16
#endif