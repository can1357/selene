#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "PPM_PERFSTATE_DOMAIN_EVENT.State", state, 0x0, 0x20, true, 0xe0f744425d4fbaa3)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "PPM_PERFSTATE_DOMAIN_EVENT.Latency", latency, 0x20, 0x20, true, 0x9385f67c83603fe5)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "PPM_PERFSTATE_DOMAIN_EVENT.Speed", speed, 0x40, 0x20, true, 0x7ec6b7814d8ccab)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "PPM_PERFSTATE_DOMAIN_EVENT.Processors", processors, 0x80, 0x40, true, 0x3029ea4f53cd5bb0)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif