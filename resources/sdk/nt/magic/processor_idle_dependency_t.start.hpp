#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PROCESSOR_IDLE_DEPENDENCY.ProcessorIndex", processor_index, 0x0, 0x20, true, 0x1142e9ffff98b5c0)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PROCESSOR_IDLE_DEPENDENCY.ExpectedState", expected_state, 0x20, 0x8, true, 0xefd03387e7c75651)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PROCESSOR_IDLE_DEPENDENCY.AllowDeeperStates", allow_deeper_states, 0x28, 0x8, true, 0xbc5f131164753041)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PROCESSOR_IDLE_DEPENDENCY.LooseDependency", loose_dependency, 0x30, 0x8, true, 0xf6dc5bdf730ba684)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif