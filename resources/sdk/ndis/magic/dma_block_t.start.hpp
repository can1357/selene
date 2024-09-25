#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_NDIS_DMA_BLOCK.MapRegisterBase", map_register_base, 0x0, 0x40, true, 0xa79eed3cce3dafd8)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kevent_t), "_NDIS_DMA_BLOCK.AllocationEvent", allocation_event, 0x40, 0xc0, true, 0xf463f90e90af61e7)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_NDIS_DMA_BLOCK.SystemAdapterObject", system_adapter_object, 0x100, 0x40, true, 0x7f1ee363edc1fc37)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_NDIS_DMA_BLOCK.Miniport", miniport, 0x140, 0x40, true, 0xa23ad8fbe7c33abe)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDIS_DMA_BLOCK.InProgress", in_progress, 0x180, 0x8, true, 0xd593d1aff75bac3b)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif