#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const uint16_t), "RifRefBuffer._cMaxRifRef", c_max_rif_ref, 0x0, 0x10, true, 0x477f559a33140177)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t const*), "RifRefBuffer._pcRifRef", pc_rif_ref, 0x40, 0x40, true, 0xbe471c1af6ecae0b)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::reminterfaceref_t const*), "RifRefBuffer._pBuffer", p_buffer, 0x80, 0x40, true, 0x2069c1e5d3d620b1)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "RifRefBuffer._cRifRef", c_rif_ref, 0xc0, 0x10, true, 0x2c4e2897af3699e)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif