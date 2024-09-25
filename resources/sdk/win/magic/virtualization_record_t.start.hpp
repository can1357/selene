#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_VIRTUALIZATION_RECORD.VbsEnabled", vbs_enabled, 0x0, 0x8, true, 0x9bcd5e454e09471b)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_VIRTUALIZATION_RECORD.HvciEnabled", hvci_enabled, 0x8, 0x8, true, 0xa4425c60d82498ae)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_VIRTUALIZATION_RECORD.HyperVisorEnabled", hyper_visor_enabled, 0x10, 0x8, true, 0xf76e346cdcb4d282)
#else
#define _m00
#define _m01
#define _m02
#endif