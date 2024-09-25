#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::encapsulation_t), "_NDIS_ENCAPSULATION_FORMAT.Encapsulation", encapsulation, 0x0, 0x20, true, 0xe8488e294e6ea8cf)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_NDIS_ENCAPSULATION_FORMAT.Flags.FixedHeaderSize", fixed_header_size, 0x0, 0x1, true, 0x369115554f85be26, 1, uint32_t)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_flags_t), "_NDIS_ENCAPSULATION_FORMAT.Flags", flags, 0x20, 0x20, true, 0x385db0a5e83d4b86)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_ENCAPSULATION_FORMAT.EncapsulationHeaderSize", encapsulation_header_size, 0x40, 0x20, true, 0xc9986ad762d0dc13)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif