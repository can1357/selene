#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::object_header_t), "_NDIS_MINIPORT_INTERRUPT_CHARACTERISTICS.Header", header, 0x0, 0x20, true, 0x7dfab274f97abc9e)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint8_t(void*, uint8_t*, uint32_t*)>*), "_NDIS_MINIPORT_INTERRUPT_CHARACTERISTICS.InterruptHandler", interrupt_handler, 0x40, 0x40, true, 0x968ceb5ca5f0e618)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, void*, void*, void*)>*), "_NDIS_MINIPORT_INTERRUPT_CHARACTERISTICS.InterruptDpcHandler", interrupt_dpc_handler, 0x80, 0x40, true, 0x1a40c76490eb7c2f)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_NDIS_MINIPORT_INTERRUPT_CHARACTERISTICS.DisableInterruptHandler", disable_interrupt_handler, 0xc0, 0x40, true, 0x85f3dc204fdb54a3)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_NDIS_MINIPORT_INTERRUPT_CHARACTERISTICS.EnableInterruptHandler", enable_interrupt_handler, 0x100, 0x40, true, 0xda78a85b3a38e9ef)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDIS_MINIPORT_INTERRUPT_CHARACTERISTICS.MsiSupported", msi_supported, 0x140, 0x8, true, 0xa0ae2aeccd3185e0)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDIS_MINIPORT_INTERRUPT_CHARACTERISTICS.MsiSyncWithAllMessages", msi_sync_with_all_messages, 0x148, 0x8, true, 0x2fafc0e3cf738333)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint8_t(void*, uint32_t, uint8_t*, uint32_t*)>*), "_NDIS_MINIPORT_INTERRUPT_CHARACTERISTICS.MessageInterruptHandler", message_interrupt_handler, 0x180, 0x40, true, 0xd8cea3966b9d408b)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, uint32_t, void*, void*, void*)>*), "_NDIS_MINIPORT_INTERRUPT_CHARACTERISTICS.MessageInterruptDpcHandler", message_interrupt_dpc_handler, 0x1c0, 0x40, true, 0x6f2ddd5010ae187f)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, uint32_t)>*), "_NDIS_MINIPORT_INTERRUPT_CHARACTERISTICS.DisableMessageInterruptHandler", disable_message_interrupt_handler, 0x200, 0x40, true, 0x46a26ea922346806)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, uint32_t)>*), "_NDIS_MINIPORT_INTERRUPT_CHARACTERISTICS.EnableMessageInterruptHandler", enable_message_interrupt_handler, 0x240, 0x40, true, 0x595f84ba6e6dbfb7)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::interrupt_type_t), "_NDIS_MINIPORT_INTERRUPT_CHARACTERISTICS.InterruptType", interrupt_type, 0x280, 0x20, true, 0x3839fb60d862b8e1)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct io::interrupt_message_info_t*), "_NDIS_MINIPORT_INTERRUPT_CHARACTERISTICS.MessageInfoTable", message_info_table, 0x2c0, 0x40, true, 0xb0c5e67821669c87)
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
#endif