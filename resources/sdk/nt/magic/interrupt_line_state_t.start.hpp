#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum nt::kinterrupt_polarity_t), "_INTERRUPT_LINE_STATE.Polarity", polarity, 0x0, 0x20, true, 0xecdbe5579764da30)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_INTERRUPT_LINE_STATE.EmulateActiveBoth", emulate_active_both, 0x20, 0x8, true, 0x9e7b479ef337d0a2)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum nt::kinterrupt_mode_t), "_INTERRUPT_LINE_STATE.TriggerMode", trigger_mode, 0x40, 0x20, true, 0xfbc210c705324191)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_INTERRUPT_LINE_STATE.Flags", flags, 0x60, 0x20, true, 0x42395cbcccb508d)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::interrupt_line_t), "_INTERRUPT_LINE_STATE.Routing", routing, 0x80, 0x40, true, 0x1200f9e6a17d3185)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::interrupt_target_t), "_INTERRUPT_LINE_STATE.ProcessorTarget", processor_target, 0xc0, 0xc0, true, 0x361f7cfedd4c74ea)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_INTERRUPT_LINE_STATE.Vector", vector, 0x180, 0x20, true, 0x16a80ac8f93d0855)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_INTERRUPT_LINE_STATE.Priority", priority, 0x1a0, 0x20, true, 0x31fb714d209f9b64)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif