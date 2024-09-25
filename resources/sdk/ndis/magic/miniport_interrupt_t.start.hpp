#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kinterrupt_t*), "_NDIS_MINIPORT_INTERRUPT.InterruptObject", interrupt_object, 0x0, 0x40, true, 0x38fcc35a89bdfb16)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile uint8_t), "_NDIS_MINIPORT_INTERRUPT.IsDeregistered", is_deregistered, 0x40, 0x8, true, 0x947db914931d1902)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_NDIS_MINIPORT_INTERRUPT.DpcCountLock", dpc_count_lock, 0x40, 0x40, true, 0x1351675d8e4e0abc)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(uint8_t*, uint8_t*, void*)>*), "_NDIS_MINIPORT_INTERRUPT.MiniportIsr", miniport_isr, 0xc0, 0x40, true, 0x6ae78a63b5406dc4)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_NDIS_MINIPORT_INTERRUPT.MiniportDpc", miniport_dpc, 0x100, 0x40, true, 0x1ceec152be75c6d9)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kdpc_t), "_NDIS_MINIPORT_INTERRUPT.InterruptDpc", interrupt_dpc, 0x140, 0x0, true, 0x75e0f26b3f72c135)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::miniport_block_t*), "_NDIS_MINIPORT_INTERRUPT.Miniport", miniport, 0x340, 0x40, true, 0x602a2bfb96990fb2)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int32_t), "_NDIS_MINIPORT_INTERRUPT.DpcCount", dpc_count, 0x380, 0x20, true, 0x8f2c542ce99f2673)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kevent_t), "_NDIS_MINIPORT_INTERRUPT.DpcsCompletedEvent", dpcs_completed_event, 0x3c0, 0xc0, true, 0xd16ed90229f9df68)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDIS_MINIPORT_INTERRUPT.SharedInterrupt", shared_interrupt, 0x480, 0x8, true, 0x89af32868beea6b7)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDIS_MINIPORT_INTERRUPT.IsrRequested", isr_requested, 0x488, 0x8, true, 0xbdaf549e8c0e2a01)
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
#endif