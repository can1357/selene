#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_NODE_PERFDATA.NodeOrdinal", node_ordinal, 0x0, 0x20, true, 0x2b3629357230c860)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_NODE_PERFDATA.PhysicalAdapterIndex", physical_adapter_index, 0x20, 0x20, true, 0x2af9dae57ec61b9b)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_D3DKMT_NODE_PERFDATA.Frequency", frequency, 0x40, 0x40, true, 0xe07e63ab7f75da14)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_D3DKMT_NODE_PERFDATA.MaxFrequency", max_frequency, 0x80, 0x40, true, 0x9a305d3f573da977)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_D3DKMT_NODE_PERFDATA.MaxFrequencyOC", max_frequency_oc, 0xc0, 0x40, true, 0xdc402d14d23e86b5)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_NODE_PERFDATA.Voltage", voltage, 0x100, 0x20, true, 0xd5117cac04035ebb)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_NODE_PERFDATA.VoltageMax", voltage_max, 0x120, 0x20, true, 0xabcc57ee667685e3)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_NODE_PERFDATA.VoltageMaxOC", voltage_max_oc, 0x140, 0x20, true, 0x27af679114f9ff1)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_D3DKMT_NODE_PERFDATA.MaxTransitionLatency", max_transition_latency, 0x180, 0x40, true, 0x170656c0e27e0965)
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