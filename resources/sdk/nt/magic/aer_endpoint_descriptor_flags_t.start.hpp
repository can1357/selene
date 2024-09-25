#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_AER_ENDPOINT_DESCRIPTOR_FLAGS.UncorrectableErrorMaskRW", uncorrectable_error_mask_rw, 0x0, 0x1, true, 0xd928bf7bdbf9c1e, 1, uint16_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_AER_ENDPOINT_DESCRIPTOR_FLAGS.UncorrectableErrorSeverityRW", uncorrectable_error_severity_rw, 0x1, 0x1, true, 0x9b397b5412696741, 1, uint16_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_AER_ENDPOINT_DESCRIPTOR_FLAGS.CorrectableErrorMaskRW", correctable_error_mask_rw, 0x2, 0x1, true, 0xbbbec65e4914a155, 1, uint16_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_AER_ENDPOINT_DESCRIPTOR_FLAGS.AdvancedCapsAndControlRW", advanced_caps_and_control_rw, 0x3, 0x1, true, 0x21e9fc7b7d32e31b, 1, uint16_t)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_AER_ENDPOINT_DESCRIPTOR_FLAGS.AsUSHORT", as_ushort, 0x0, 0x10, true, 0x5ce9b9682e504c2d)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif