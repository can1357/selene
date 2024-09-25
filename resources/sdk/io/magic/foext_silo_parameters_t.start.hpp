#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_IO_FOEXT_SILO_PARAMETERS.Length", length, 0x0, 0x20, true, 0xa63c0275ec5d197b)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_IO_FOEXT_SILO_PARAMETERS.HasHardReference", has_hard_reference, 0x20, 0x1, true, 0x8a6522ee842da02b, 1, uint32_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint31_t), "_IO_FOEXT_SILO_PARAMETERS.SpareFlags", spare_flags, 0x21, 0x1f, true, 0x6f302c4857c81fb3, 31, uint32_t)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_IO_FOEXT_SILO_PARAMETERS.Flags", flags, 0x20, 0x20, true, 0x4335457d2acf2379)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::ejob_t*), "_IO_FOEXT_SILO_PARAMETERS.SiloContext", silo_context, 0x40, 0x40, true, 0x482b8594d24db3ca)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif