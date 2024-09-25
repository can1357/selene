#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_VIDSCHCAPS.MultiEngineAware", multi_engine_aware, 0x0, 0x1, true, 0x4419133a7719e99f, 1, uint32_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_VIDSCHCAPS.VSyncPowerSaveAware", v_sync_power_save_aware, 0x1, 0x1, true, 0x6f5d33353def20b2, 1, uint32_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_VIDSCHCAPS.PreemptionAware", preemption_aware, 0x2, 0x1, true, 0xb81d03fac0a06193, 1, uint32_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_VIDSCHCAPS.NoDmaPatching", no_dma_patching, 0x3, 0x1, true, 0x8aefad1616473a5b, 1, uint32_t)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_VIDSCHCAPS.CancelCommandAware", cancel_command_aware, 0x4, 0x1, true, 0x68dd61424eb75b11, 1, uint32_t)
#define _m05 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_VIDSCHCAPS.No64BitAtomics", no64_bit_atomics, 0x5, 0x1, true, 0xb6792b8d0fc6a461, 1, uint32_t)
#define _m06 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_VIDSCHCAPS.LowIrqlPreemptCommand", low_irql_preempt_command, 0x6, 0x1, true, 0xc1b5f17a0c4e02b1, 1, uint32_t)
#define _m07 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "_DXGK_VIDSCHCAPS.HwQueuePacketCap", hw_queue_packet_cap, 0x7, 0x4, true, 0xe0039395b9c9a2c8, 4, uint32_t)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_VIDSCHCAPS.Value", value, 0x0, 0x20, true, 0xe40ea9ce6e0c4d8f)
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
#endif