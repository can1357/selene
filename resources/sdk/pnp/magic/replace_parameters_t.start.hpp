#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PNP_REPLACE_PARAMETERS.Size", size, 0x0, 0x20, true, 0x6a8596746a1495a9)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PNP_REPLACE_PARAMETERS.Version", version, 0x20, 0x20, true, 0xe067fb83f2db4fda)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_PNP_REPLACE_PARAMETERS.Target", target, 0x40, 0x40, true, 0xee0b360cc04fac0c)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct pnp::replace_processor_list_t*), "_PNP_REPLACE_PARAMETERS.TargetProcessors", target_processors, 0xc0, 0x40, true, 0x33574d3fa693741)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct pnp::replace_processor_list_t*), "_PNP_REPLACE_PARAMETERS.SpareProcessors", spare_processors, 0x100, 0x40, true, 0x8669de97091ae81b)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct pnp::replace_memory_list_t*), "_PNP_REPLACE_PARAMETERS.TargetMemory", target_memory, 0x140, 0x40, true, 0x30b6e8435139dafb)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct pnp::replace_memory_list_t*), "_PNP_REPLACE_PARAMETERS.SpareMemory", spare_memory, 0x180, 0x40, true, 0xa104fcdd0b5ffeea)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(preplace_map_memory_t ), "_PNP_REPLACE_PARAMETERS.MapMemory", map_memory, 0x1c0, 0x40, true, 0xd9092c1f01e090ef)
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