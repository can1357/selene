#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_POP_FX_PERF_FLAGS.Value", value, 0x0, 0x20, true, 0x202c9a60a0fa6f50)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_POP_FX_PERF_FLAGS.Progress", progress, 0x0, 0x3, true, 0xa259c6f58e4d348f, 3, uint32_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_POP_FX_PERF_FLAGS.Synchronicity", synchronicity, 0x1b, 0x2, true, 0xbaa3eab02bf5d854, 2, uint32_t)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_POP_FX_PERF_FLAGS.RequestPepCompleted", request_pep_completed, 0x1d, 0x1, true, 0xcc6a57a8b656d4c9, 1, uint32_t)
#define _m04 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_POP_FX_PERF_FLAGS.RequestSucceeded", request_succeeded, 0x1e, 0x1, true, 0xe6f5c4c955d03a8b, 1, uint32_t)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_POP_FX_PERF_FLAGS.NestedCallback", nested_callback, 0x1f, 0x1, true, 0x5bf1e0ae309e0f8e, 1, uint32_t)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif