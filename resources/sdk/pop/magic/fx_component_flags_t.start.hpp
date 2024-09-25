#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_POP_FX_COMPONENT_FLAGS.Value", value, 0x0, 0x20, true, 0x536ad9c05b5b2e64)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_POP_FX_COMPONENT_FLAGS.Value2", value2, 0x20, 0x20, true, 0x375a99ee7cb1289a)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint30_t), "_POP_FX_COMPONENT_FLAGS.RefCount", ref_count, 0x0, 0x1e, true, 0x65a96302548ad4da, 30, uint32_t)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_POP_FX_COMPONENT_FLAGS.Idling", idling, 0x1e, 0x1, true, 0x51cf2cdd21f997a4, 1, uint32_t)
#define _m04 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_POP_FX_COMPONENT_FLAGS.Active", active, 0x1f, 0x1, true, 0x86e4d7b575e97cb8, 1, uint32_t)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_POP_FX_COMPONENT_FLAGS.CriticalIdleOverride", critical_idle_override, 0x20, 0x1, true, 0xbb6ffffedee2f9f4, 1, uint32_t)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_POP_FX_COMPONENT_FLAGS.ResidentOverride", resident_override, 0x21, 0x1, true, 0x707fe6c7677e23f, 1, uint32_t)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif