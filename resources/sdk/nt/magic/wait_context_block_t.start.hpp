#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::kdevice_queue_entry_t), "_WAIT_CONTEXT_BLOCK.WaitQueueEntry", wait_queue_entry, 0x0, 0xc0, true, 0x842e68a0e636426b)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_WAIT_CONTEXT_BLOCK.DmaWaitEntry", dma_wait_entry, 0x0, 0x80, true, 0xd1a32c2f460aaed3)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WAIT_CONTEXT_BLOCK.NumberOfChannels", number_of_channels, 0x80, 0x20, true, 0xde224edbe3c55b69)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WAIT_CONTEXT_BLOCK.SyncCallback", sync_callback, 0xa0, 0x1, true, 0xee819eae8b82cd36, 1, uint32_t)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WAIT_CONTEXT_BLOCK.DmaContext", dma_context, 0xa1, 0x1, true, 0x16b04c9897ae6cb3, 1, uint32_t)
#define _m05 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WAIT_CONTEXT_BLOCK.ZeroMapRegisters", zero_map_registers, 0xa2, 0x1, true, 0x8022680501f4ae48, 1, uint32_t)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pdriver_control_t ), "_WAIT_CONTEXT_BLOCK.DeviceRoutine", device_routine, 0xc0, 0x40, true, 0x1ac764eb460d5ea3)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_WAIT_CONTEXT_BLOCK.DeviceContext", device_context, 0x100, 0x40, true, 0x48d524c8ab0d4cba)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WAIT_CONTEXT_BLOCK.NumberOfMapRegisters", number_of_map_registers, 0x140, 0x20, true, 0x4e62784a0d86dc09)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_WAIT_CONTEXT_BLOCK.DeviceObject", device_object, 0x180, 0x40, true, 0xdaffca65a8a3a44c)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_WAIT_CONTEXT_BLOCK.CurrentIrp", current_irp, 0x1c0, 0x40, true, 0xc79ea9e0910acb86)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::kdpc_t*), "_WAIT_CONTEXT_BLOCK.BufferChainingDpc", buffer_chaining_dpc, 0x200, 0x40, true, 0x8739d1057397b896)
#define _m12 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint20_t), "_WAIT_CONTEXT_BLOCK.NumberOfRemapPages", number_of_remap_pages, 0xac, 0x14, true, 0xd4ea34e9bdd4d316, 20, uint32_t)
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