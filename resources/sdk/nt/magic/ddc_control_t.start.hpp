#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DDC_CONTROL.Size", size, 0x0, 0x20, true, 0xa8337ed972735994)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::i2c_callbacks_t), "_DDC_CONTROL.I2CCallbacks", i2c_callbacks, 0x40, 0x0, true, 0x3bed784b466ca541)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DDC_CONTROL.EdidSegment", edid_segment, 0x140, 0x8, true, 0x176569f487fc6f76)
#else
#define _m00
#define _m01
#define _m02
#endif