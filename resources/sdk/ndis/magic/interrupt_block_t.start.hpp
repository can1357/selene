#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::object_header_t), "_NDIS_INTERRUPT_BLOCK.Header", header, 0x0, 0x0, false, 0xa0dcb00b0a33c1f7)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile uint8_t), "_NDIS_INTERRUPT_BLOCK.IsDeregistered", is_deregistered, 0x0, 0x0, false, 0x7a9a0d921059fd5)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_NDIS_INTERRUPT_BLOCK.MiniportInterruptContext", miniport_interrupt_context, 0x0, 0x0, false, 0xa2907c751027c84c)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint8_t(void*, uint8_t*, uint32_t*)>*), "_NDIS_INTERRUPT_BLOCK.MiniportIsr", miniport_isr, 0x0, 0x0, false, 0xc430cd2ac5b5b1f8)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, void*, void*, void*)>*), "_NDIS_INTERRUPT_BLOCK.MiniportDpc", miniport_dpc, 0x0, 0x0, false, 0x60437fe2dc0c4373)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kdpc_t), "_NDIS_INTERRUPT_BLOCK.InterruptDpc", interrupt_dpc, 0x0, 0x0, false, 0x477a47c47ae7e22a)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::miniport_block_t*), "_NDIS_INTERRUPT_BLOCK.Miniport", miniport, 0x0, 0x0, false, 0x37231a8bb89d7589)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int32_t), "_NDIS_INTERRUPT_BLOCK.DpcCount", dpc_count, 0x0, 0x0, false, 0xbd84a332406f55db)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kdpc_t*), "_NDIS_INTERRUPT_BLOCK.Dpc", dpc, 0x0, 0x0, false, 0x61771bef6c17c6)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_NDIS_INTERRUPT_BLOCK.Generic", generic, 0x0, 0x0, false, 0x7b7f063fbb8973f6)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kinterrupt_t*), "_NDIS_INTERRUPT_BLOCK.InterruptObject", interrupt_object, 0x0, 0x0, false, 0xb9326d20ac880771)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct io::interrupt_message_info_t*), "_NDIS_INTERRUPT_BLOCK.MessageInfoTable", message_info_table, 0x0, 0x0, false, 0x16d3da5b21cde306)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kevent_t), "_NDIS_INTERRUPT_BLOCK.DpcsCompletedEvent", dpcs_completed_event, 0x0, 0x0, false, 0x95268726b3388173)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDIS_INTERRUPT_BLOCK.SharedInterrupt", shared_interrupt, 0x0, 0x0, false, 0xeec8d5f49b0d6eeb)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDIS_INTERRUPT_BLOCK.IsrRequested", isr_requested, 0x0, 0x0, false, 0xf403751256de1f48)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::interrupt_block_t*), "_NDIS_INTERRUPT_BLOCK.NextInterrupt", next_interrupt, 0x0, 0x0, false, 0x43c202af9669a22)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum nt::kinterrupt_mode_t), "_NDIS_INTERRUPT_BLOCK.InterruptMode", interrupt_mode, 0x0, 0x0, false, 0x718c31b9438c54a0)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint8_t(void*, uint32_t, uint8_t*, uint32_t*)>*), "_NDIS_INTERRUPT_BLOCK.MiniportMessageIsr", miniport_message_isr, 0x0, 0x0, false, 0xfce5e2c73caf096)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, uint32_t, void*, void*, void*)>*), "_NDIS_INTERRUPT_BLOCK.MiniportMessageInterruptDpc", miniport_message_interrupt_dpc, 0x0, 0x0, false, 0x18679d0cb0ba637d)
#define _m19 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDIS_INTERRUPT_BLOCK.MsiSupported", msi_supported, 0x0, 0x0, false, 0x6ac666a301cc3671)
#define _m20 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDIS_INTERRUPT_BLOCK.MessageUsed", message_used, 0x0, 0x0, false, 0x34b5ae13d4fba3ac)
#define _m21 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_NDIS_INTERRUPT_BLOCK.MessagesSyncLock", messages_sync_lock, 0x0, 0x0, false, 0x9960ff3d2e090ee6)
#define _m22 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct io::interrupt_message_info_t*), "_NDIS_INTERRUPT_BLOCK.NdisMessageInfoTable", ndis_message_info_table, 0x0, 0x0, false, 0xf05cd4c7d67f1373)
#define _m23 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::dpc_work_item_t*), "_NDIS_INTERRUPT_BLOCK.DpcWorkItems", dpc_work_items, 0x0, 0x0, false, 0xb946a59ff101e401)
#define _m24 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kdpc_t*), "_NDIS_INTERRUPT_BLOCK.MsgDpc", msg_dpc, 0x0, 0x0, false, 0x7524082e203c62a0)
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
#define _m17
#define _m18
#define _m19
#define _m20
#define _m21
#define _m22
#define _m23
#define _m24
#endif