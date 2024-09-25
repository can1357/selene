#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::cid_object_t*), "tagStdMarshalData.pID", p_id, 0x0, 0x40, true, 0x85bccb05ef957a32)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::i_unknown_t*), "tagStdMarshalData.pServer", p_server, 0x40, 0x40, true, 0x5988ced1a58f04de)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const struct nt::guid_t*), "tagStdMarshalData.pIID", p_iid, 0x80, 0x40, true, 0x85199f96a4ff7d2e)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagStdMarshalData.dwDestCtx", dw_dest_ctx, 0xc0, 0x20, true, 0x689798d727cfbfbf)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "tagStdMarshalData.pvDestCtx", pv_dest_ctx, 0x100, 0x40, true, 0xf9dc26adcf60a6b9)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagStdMarshalData.mshlflags", mshlflags, 0x140, 0x20, true, 0xb3f104273e36178d)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::objref_t*), "tagStdMarshalData.pobjref", pobjref, 0x180, 0x40, true, 0x43769b4e353fa437)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::prevent_rundown_bias_container_t*), "tagStdMarshalData.pBiasContainer", p_bias_container, 0x1c0, 0x40, true, 0xdc5b12cd543803c3)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(bool), "tagStdMarshalData.bApplyDirectMarshalingMitigation", b_apply_direct_marshaling_mitigation, 0x200, 0x8, true, 0x16085e791dc5f948)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#endif