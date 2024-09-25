#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORPORT_EXTENDED_FUNCTIONS.Version", version, 0x0, 0x20, true, 0x6f86965655e23a5d)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint8_t(void*, uint32_t, struct stor::port::message_interrupt_information_t*)>*), "_STORPORT_EXTENDED_FUNCTIONS.GetMessageInterruptInformation", get_message_interrupt_information, 0x40, 0x40, true, 0xda5e877f4e978c45)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, struct stor::port::stor_scatter_gather_list_t*, uint8_t)>*), "_STORPORT_EXTENDED_FUNCTIONS.PutScatterGatherList", put_scatter_gather_list, 0x80, 0x40, true, 0x88f2065773cb1583)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<enum stor::port::getsgstatus_t(void*, void*, void*, uint32_t, sdk::function<void(void**, void**, struct stor::port::stor_scatter_gather_list_t*, void*)>*, void*, uint8_t, void*, uint32_t)>*), "_STORPORT_EXTENDED_FUNCTIONS.BuildScatterGatherList", build_scatter_gather_list, 0xc0, 0x40, true, 0xee7f1efb35b165bd)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, void*, void*)>*), "_STORPORT_EXTENDED_FUNCTIONS.FreePool", free_pool, 0x100, 0x40, true, 0x767dddf236db7bd8)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void*(uint32_t, uint32_t, void*, void**)>*), "_STORPORT_EXTENDED_FUNCTIONS.AllocatePool", allocate_pool, 0x140, 0x40, true, 0x44f144128c0e3257)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void*(struct nt::scsi_request_block_t*)>*), "_STORPORT_EXTENDED_FUNCTIONS.GetSystemAddress", get_system_address, 0x180, 0x40, true, 0xfaa5a7dfc06f8aab)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint32_t(void*, uint32_t)>*), "_STORPORT_EXTENDED_FUNCTIONS.AcquireMSISpinLock", acquire_msi_spin_lock, 0x1c0, 0x40, true, 0xd03e2c0b44f53b0b)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, uint32_t, uint32_t)>*), "_STORPORT_EXTENDED_FUNCTIONS.ReleaseMSISpinLock", release_msi_spin_lock, 0x200, 0x40, true, 0x57285aa46bfc6fa5)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, void*)>*), "_STORPORT_EXTENDED_FUNCTIONS.CompleteServiceIrp", complete_service_irp, 0x240, 0x40, true, 0xafa353d56095bd55)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void*(struct nt::scsi_request_block_t*)>*), "_STORPORT_EXTENDED_FUNCTIONS.GetOriginalMdl", get_original_mdl, 0x280, 0x40, true, 0xec8ce3333c0daefa)
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