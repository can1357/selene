#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_AER_BRIDGE_DESCRIPTOR_FLAGS.UncorrectableErrorMaskRW", uncorrectable_error_mask_rw, 0x0, 0x1, true, 0xe8f969ddac009752, 1, uint16_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_AER_BRIDGE_DESCRIPTOR_FLAGS.UncorrectableErrorSeverityRW", uncorrectable_error_severity_rw, 0x1, 0x1, true, 0x220285e34961f073, 1, uint16_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_AER_BRIDGE_DESCRIPTOR_FLAGS.CorrectableErrorMaskRW", correctable_error_mask_rw, 0x2, 0x1, true, 0xa60caddb4e720400, 1, uint16_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_AER_BRIDGE_DESCRIPTOR_FLAGS.AdvancedCapsAndControlRW", advanced_caps_and_control_rw, 0x3, 0x1, true, 0xd9ba276957fd0407, 1, uint16_t)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_AER_BRIDGE_DESCRIPTOR_FLAGS.SecondaryUncorrectableErrorMaskRW", secondary_uncorrectable_error_mask_rw, 0x4, 0x1, true, 0xd884deb7a5382a2, 1, uint16_t)
#define _m05 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_AER_BRIDGE_DESCRIPTOR_FLAGS.SecondaryUncorrectableErrorSevRW", secondary_uncorrectable_error_sev_rw, 0x5, 0x1, true, 0xe1795b6c28a866c1, 1, uint16_t)
#define _m06 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_AER_BRIDGE_DESCRIPTOR_FLAGS.SecondaryCapsAndControlRW", secondary_caps_and_control_rw, 0x6, 0x1, true, 0x4d8f3b24fd94e727, 1, uint16_t)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_AER_BRIDGE_DESCRIPTOR_FLAGS.AsUSHORT", as_ushort, 0x0, 0x10, true, 0x6a43b8a137a15f24)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif