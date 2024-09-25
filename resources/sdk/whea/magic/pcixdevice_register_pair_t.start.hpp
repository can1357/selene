#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "WHEA_PCIXDEVICE_REGISTER_PAIR.Register", _register, 0x0, 0x40, true, 0x8680a5e0e82695cc)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "WHEA_PCIXDEVICE_REGISTER_PAIR.Data", data, 0x40, 0x40, true, 0x6f10608e273bcf7d)
#else
#define _m00
#define _m01
#endif