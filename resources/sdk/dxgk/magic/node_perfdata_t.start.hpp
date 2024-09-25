#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_DXGK_NODE_PERFDATA.Frequency", frequency, 0x0, 0x40, true, 0xe29e55e0430c9b0f)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_DXGK_NODE_PERFDATA.MaxFrequency", max_frequency, 0x40, 0x40, true, 0xb29575fc01a12d5f)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_DXGK_NODE_PERFDATA.MaxFrequencyOC", max_frequency_oc, 0x80, 0x40, true, 0xd061844eaf6c3a33)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_NODE_PERFDATA.Voltage", voltage, 0xc0, 0x20, true, 0x39eafc423e19d5e3)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_NODE_PERFDATA.VoltageMax", voltage_max, 0xe0, 0x20, true, 0xde20cc350d89dc93)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_NODE_PERFDATA.VoltageMaxOC", voltage_max_oc, 0x100, 0x20, true, 0xca10ce5cef46fb52)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_DXGK_NODE_PERFDATA.MaxTransitionLatency", max_transition_latency, 0x120, 0x40, true, 0x9fb12101f8c438ad)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif