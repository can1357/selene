#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "D3DDDI_TRIMRESIDENCYSET_FLAGS.PeriodicTrim", periodic_trim, 0x0, 0x1, true, 0x208af32e7d34aa99, 1, uint32_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "D3DDDI_TRIMRESIDENCYSET_FLAGS.RestartPeriodicTrim", restart_periodic_trim, 0x1, 0x1, true, 0x8ecb3c1ab1e7e57b, 1, uint32_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "D3DDDI_TRIMRESIDENCYSET_FLAGS.TrimToBudget", trim_to_budget, 0x2, 0x1, true, 0x28aeab385f73df05, 1, uint32_t)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "D3DDDI_TRIMRESIDENCYSET_FLAGS.Value", value, 0x0, 0x20, true, 0x41c2b0a5722868c5)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif