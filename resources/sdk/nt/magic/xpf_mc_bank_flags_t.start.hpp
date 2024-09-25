#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_XPF_MC_BANK_FLAGS.ClearOnInitializationRW", clear_on_initialization_rw, 0x0, 0x1, true, 0x68badd5fec801496, 1, uint8_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_XPF_MC_BANK_FLAGS.ControlDataRW", control_data_rw, 0x1, 0x1, true, 0xf40cd65f758ee02a, 1, uint8_t)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_XPF_MC_BANK_FLAGS.AsUCHAR", as_uchar, 0x0, 0x8, true, 0x8615924012779361)
#else
#define _m00
#define _m01
#define _m02
#endif