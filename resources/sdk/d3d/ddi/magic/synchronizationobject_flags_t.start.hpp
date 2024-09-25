#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS.Shared", shared, 0x0, 0x1, true, 0x9198684ea8d08d9f, 1, uint32_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS.NtSecuritySharing", nt_security_sharing, 0x1, 0x1, true, 0x268ccaa3204752e0, 1, uint32_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS.CrossAdapter", cross_adapter, 0x2, 0x1, true, 0x95f3f6e2aeebcbf9, 1, uint32_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS.TopOfPipeline", top_of_pipeline, 0x3, 0x1, true, 0x4b94f93e598a99c9, 1, uint32_t)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS.NoSignal", no_signal, 0x4, 0x1, true, 0xee5d93fc72aa533e, 1, uint32_t)
#define _m05 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS.NoWait", no_wait, 0x5, 0x1, true, 0xeb56dbba3060e8ab, 1, uint32_t)
#define _m06 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS.NoSignalMaxValueOnTdr", no_signal_max_value_on_tdr, 0x6, 0x1, true, 0x809cd8b039e89717, 1, uint32_t)
#define _m07 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS.NoGPUAccess", no_gpu_access, 0x7, 0x1, true, 0xbc16648999c3c858, 1, uint32_t)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS.Value", value, 0x0, 0x20, true, 0xaffc533db5e90eb)
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
#endif