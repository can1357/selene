#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_PO_FX_COMPONENT_PERF_SET.Name", name, 0x0, 0x80, true, 0x4d8d8f68f335908a)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_PO_FX_COMPONENT_PERF_SET.Flags", flags, 0x80, 0x40, true, 0x1092545d61b422c5)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum po::fx_perf_state_unit_t), "_PO_FX_COMPONENT_PERF_SET.Unit", unit, 0xc0, 0x20, true, 0xcf72da3c4a916554)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum po::fx_perf_state_type_t), "_PO_FX_COMPONENT_PERF_SET.Type", type, 0xe0, 0x20, true, 0xc364d9bcc86e3e07)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PO_FX_COMPONENT_PERF_SET.Discrete.Count", count, 0x0, 0x20, true, 0x49ad8b087219fa31)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct po::fx_perf_state_t*), "_PO_FX_COMPONENT_PERF_SET.Discrete.States", states, 0x40, 0x40, true, 0x4836ee6996f679ce)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u0_discrete_t), "_PO_FX_COMPONENT_PERF_SET.Discrete", discrete, 0x100, 0x80, true, 0xc6b1e23c48321944)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_PO_FX_COMPONENT_PERF_SET.Range.Minimum", minimum, 0x0, 0x40, true, 0x58e08c512306c6e0)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_PO_FX_COMPONENT_PERF_SET.Range.Maximum", maximum, 0x40, 0x40, true, 0x4531c21adc4ba8ef)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u5_range_t), "_PO_FX_COMPONENT_PERF_SET.Range", range, 0x100, 0x80, true, 0xf9da2f2940f8bc5b)
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
#define _m09
#endif