#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(add_v_t, _SDK_ESCAPE(volatile uint31_t), "RTLWOW64_CROSSPROCESS_WORK_HEAD.First", first, 0x0, 0x1f, true, 0x76fafc3df67ba996, 31, uint32_t)
#define _m01 _SDK_MAGIC_BITFIELD(add_v_t, _SDK_ESCAPE(volatile uint1_t), "RTLWOW64_CROSSPROCESS_WORK_HEAD.HeavyFlush", heavy_flush, 0x1f, 0x1, true, 0xe7a5dc723fe55db4, 1, uint32_t)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "RTLWOW64_CROSSPROCESS_WORK_HEAD.Sequence", sequence, 0x20, 0x20, true, 0xf5b25951703e41ac)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int64_t), "RTLWOW64_CROSSPROCESS_WORK_HEAD.Value", value, 0x0, 0x40, true, 0x90abad6a3420d079)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif