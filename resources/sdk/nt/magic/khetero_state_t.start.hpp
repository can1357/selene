#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_KHETERO_STATE.Qos", qos, 0x0, 0x0, false, 0x5c5ec62273bbab35, 3, uint8_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_KHETERO_STATE.WorkloadClass", workload_class, 0x0, 0x0, false, 0x59525c1b55b60713, 3, uint8_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_KHETERO_STATE.RunningType", running_type, 0x0, 0x0, false, 0x4262d8476d9a1897, 1, uint8_t)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_KHETERO_STATE.AllFields", all_fields, 0x0, 0x0, false, 0xf5dbcde27e31bd8)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif