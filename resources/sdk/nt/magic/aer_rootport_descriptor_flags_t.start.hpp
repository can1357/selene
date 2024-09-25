#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_AER_ROOTPORT_DESCRIPTOR_FLAGS.UncorrectableErrorMaskRW", uncorrectable_error_mask_rw, 0x0, 0x1, true, 0x34f4bb15e581aaf1, 1, uint16_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_AER_ROOTPORT_DESCRIPTOR_FLAGS.UncorrectableErrorSeverityRW", uncorrectable_error_severity_rw, 0x1, 0x1, true, 0x943080a009e84384, 1, uint16_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_AER_ROOTPORT_DESCRIPTOR_FLAGS.CorrectableErrorMaskRW", correctable_error_mask_rw, 0x2, 0x1, true, 0x5467af9ef333da0b, 1, uint16_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_AER_ROOTPORT_DESCRIPTOR_FLAGS.AdvancedCapsAndControlRW", advanced_caps_and_control_rw, 0x3, 0x1, true, 0x50593a8906ca4c0e, 1, uint16_t)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_AER_ROOTPORT_DESCRIPTOR_FLAGS.RootErrorCommandRW", root_error_command_rw, 0x4, 0x1, true, 0xd83ac20d8206d1f3, 1, uint16_t)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_AER_ROOTPORT_DESCRIPTOR_FLAGS.AsUSHORT", as_ushort, 0x0, 0x10, true, 0xf89f45cb9161ac66)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif