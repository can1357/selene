#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_SETVIDPNSOURCEADDRESS_OUTPUT_FLAGS.PrePresentNeeded", pre_present_needed, 0x0, 0x1, true, 0xa81d65cd48ace7a7, 1, uint32_t)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_SETVIDPNSOURCEADDRESS_OUTPUT_FLAGS.Value", value, 0x0, 0x20, true, 0xf4bff6206a1231e6)
#else
#define _m00
#define _m01
#endif