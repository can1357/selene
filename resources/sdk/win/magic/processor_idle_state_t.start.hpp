#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PROCESSOR_IDLE_STATE.StateType", state_type, 0x0, 0x8, true, 0x25ce7c6a6c3996a5)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PROCESSOR_IDLE_STATE.StateFlags", state_flags, 0x20, 0x20, true, 0x87c736f0cf4358e9)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PROCESSOR_IDLE_STATE.HardwareLatency", hardware_latency, 0x40, 0x20, true, 0xfdac5c98b21267d4)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PROCESSOR_IDLE_STATE.Power", power, 0x60, 0x20, true, 0xb88e61ce95681fb7)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PROCESSOR_IDLE_STATE.Context", context, 0x80, 0x40, true, 0x133172164f91a97e)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pprocessor_idle_handler_t ), "_PROCESSOR_IDLE_STATE.Handler", handler, 0xc0, 0x40, true, 0x5081392f79e651e8)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif