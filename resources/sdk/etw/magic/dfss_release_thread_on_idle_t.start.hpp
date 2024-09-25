#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETW_DFSS_RELEASE_THREAD_ON_IDLE.CurrentGeneration", current_generation, 0x0, 0x20, true, 0xfc92c2c762f8daca)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETW_DFSS_RELEASE_THREAD_ON_IDLE.SessionSelectedToRun", session_selected_to_run, 0x20, 0x20, true, 0x5cc336f007c3c0d2)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_ETW_DFSS_RELEASE_THREAD_ON_IDLE.CycleBaseAllowance", cycle_base_allowance, 0x40, 0x40, true, 0xcb3fd18af0495b1b)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_ETW_DFSS_RELEASE_THREAD_ON_IDLE.CyclesRemaining", cycles_remaining, 0x80, 0x40, true, 0xe87c6d4bdf642013)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif