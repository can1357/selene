#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum nt::cdrom_opc_info_type_t), "_CDROM_SIMPLE_OPC_INFO.RequestType", request_type, 0x0, 0x20, true, 0x5d973932980b6785)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_CDROM_SIMPLE_OPC_INFO.Exclude0", exclude0, 0x20, 0x8, true, 0xa84f8a7cc09d497a)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_CDROM_SIMPLE_OPC_INFO.Exclude1", exclude1, 0x28, 0x8, true, 0xc2f85acd531ea1a0)
#else
#define _m00
#define _m01
#define _m02
#endif