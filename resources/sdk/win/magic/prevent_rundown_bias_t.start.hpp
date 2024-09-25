#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum win::prevent_rundown_bias_type_t), "PreventRundownBias.type", type, 0x0, 0x20, true, 0x43889e358effefd5)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "PreventRundownBias.moidBiasedStub", moid_biased_stub, 0x40, 0x80, true, 0x97a20f7baf085e86)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "PreventRundownBias.dwAptIdBiasedStub", dw_apt_id_biased_stub, 0xc0, 0x20, true, 0x7efc81d41fb1d74a)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::c_ref_cache_t*), "PreventRundownBias.pRefCache", p_ref_cache, 0x40, 0x40, true, 0x87dfac70a0b68b17)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "PreventRundownBias.listEntry", list_entry, 0x100, 0x80, true, 0x4745c39bee52a0f0)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif