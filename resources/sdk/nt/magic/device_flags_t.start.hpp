#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DEVICE_FLAGS.Failed", failed, 0x0, 0x1, true, 0xac782fe1b347f51c, 1, uint32_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DEVICE_FLAGS.ReadOnly", read_only, 0x1, 0x1, true, 0xbac51795a6bfcf04, 1, uint32_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DEVICE_FLAGS.Removable", removable, 0x2, 0x1, true, 0x319fc845294d2b50, 1, uint32_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DEVICE_FLAGS.ConsoleIn", console_in, 0x3, 0x1, true, 0x34a14a1a4646afba, 1, uint32_t)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DEVICE_FLAGS.ConsoleOut", console_out, 0x4, 0x1, true, 0x80080627fa9868ee, 1, uint32_t)
#define _m05 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DEVICE_FLAGS.Input", input, 0x5, 0x1, true, 0x1cad6a67aa05ae70, 1, uint32_t)
#define _m06 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DEVICE_FLAGS.Output", output, 0x6, 0x1, true, 0x10b315788dac7f0f, 1, uint32_t)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif