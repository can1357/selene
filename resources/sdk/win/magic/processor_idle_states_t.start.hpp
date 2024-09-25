#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PROCESSOR_IDLE_STATES.Size", size, 0x0, 0x20, true, 0xcf27632b11d28d4e)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PROCESSOR_IDLE_STATES.Revision", revision, 0x20, 0x20, true, 0x9c99948348d6f421)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PROCESSOR_IDLE_STATES.Count", count, 0x40, 0x20, true, 0x930a8c718ffd713b)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PROCESSOR_IDLE_STATES.Type", type, 0x60, 0x20, true, 0x7906ce36402583ac)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PROCESSOR_IDLE_STATES.TargetProcessors", target_processors, 0x80, 0x40, true, 0xcdd9765b2a772601)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct win::processor_idle_state_t, 1>), "_PROCESSOR_IDLE_STATES.State", state, 0xc0, 0x0, true, 0xf8946ce7e6a9fd3d)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif