#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_TRACKEDWORKLOAD_STATE_FLAGS.Saturated", saturated, 0x0, 0x1, true, 0x1659b9ec68985a8f, 1, uint32_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_TRACKEDWORKLOAD_STATE_FLAGS.OptimalLevel", optimal_level, 0x1, 0x1, true, 0x94a4de21ca72c89, 1, uint32_t)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_TRACKEDWORKLOAD_STATE_FLAGS.Value", value, 0x0, 0x20, true, 0xa7faa0ab40556bcb)
#else
#define _m00
#define _m01
#define _m02
#endif