#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DDDI_WAITFORSYNCHRONIZATIONOBJECTFROMCPU_FLAGS.WaitAny", wait_any, 0x0, 0x1, true, 0x101401e61e3ea6b3, 1, uint32_t)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DDDI_WAITFORSYNCHRONIZATIONOBJECTFROMCPU_FLAGS.Value", value, 0x0, 0x20, true, 0x1e45d980cd0f0bd0)
#else
#define _m00
#define _m01
#endif