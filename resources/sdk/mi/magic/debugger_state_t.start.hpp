#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_MI_DEBUGGER_STATE.TransientWrite", transient_write, 0x0, 0x8, true, 0x759534fa4f15392b)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_MI_DEBUGGER_STATE.CodePageEdited", code_page_edited, 0x8, 0x8, true, 0x9c8bab1e9a0257bd)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::mmpte_t*), "_MI_DEBUGGER_STATE.DebugPte", debug_pte, 0x40, 0x40, true, 0xcc87c2f273befe04)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MI_DEBUGGER_STATE.PoisonedTb", poisoned_tb, 0x80, 0x20, true, 0xe7dd0fbcca14548)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int32_t), "_MI_DEBUGGER_STATE.InDebugger", in_debugger, 0xa0, 0x20, true, 0xd00b05b1a4b81c9c)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<void volatile*, 32>), "_MI_DEBUGGER_STATE.Pfns", pfns, 0xc0, 0x0, true, 0xe4ee9415344499c1)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif