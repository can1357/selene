#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HAL_DP_REPLACE_PARAMETERS.Flags", flags, 0x0, 0x20, true, 0x7841d21462091b84)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pnp::replace_processor_list_t*), "_HAL_DP_REPLACE_PARAMETERS.TargetProcessors", target_processors, 0x40, 0x40, true, 0xf35e67cfa646f18c)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pnp::replace_processor_list_t*), "_HAL_DP_REPLACE_PARAMETERS.SpareProcessors", spare_processors, 0x80, 0x40, true, 0x456e8a90c7e6458f)
#else
#define _m00
#define _m01
#define _m02
#endif