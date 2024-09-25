#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::c_list_element_t*), "GIPEntry._flink", flink, 0x0, 0x40, true, 0xda6ac31f2664d706)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::c_list_element_t*), "GIPEntry._blink", blink, 0x40, 0x40, true, 0x3c0e3449a9742027)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "GIPEntry.dwType", dw_type, 0xc0, 0x20, true, 0xb3ed09aa6f4522c0)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "GIPEntry.dwSeqNo", dw_seq_no, 0xe0, 0x20, true, 0xc7769ff9bff7427a)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int32_t), "GIPEntry.cUsage", c_usage, 0x100, 0x20, true, 0x970399c4531024b7)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "GIPEntry.dwAptId", dw_apt_id, 0x120, 0x20, true, 0xc2076275f2626531)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::c_object_context_t*), "GIPEntry.pContext", p_context, 0x140, 0x40, true, 0x3365fb448564066a)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::i_unknown_t*), "GIPEntry.pUnk", p_unk, 0x180, 0x40, true, 0xe89ee83ae76c6d57)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "GIPEntry.pVtable", p_vtable, 0x1c0, 0x40, true, 0x4e8ed05bbeee67ed)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::i_unknown_t*), "GIPEntry.pUnkProxy", p_unk_proxy, 0x200, 0x40, true, 0xa8e683944a4702ec)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::i_unknown_t*), "GIPEntry.pUnkMtaUnmarshaledProxy", p_unk_mta_unmarshaled_proxy, 0x240, 0x40, true, 0xe926afd7762fa799)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::marshal_params_t), "GIPEntry.mp", mp, 0x280, 0xa0, true, 0x41430d17524f35b1)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::interface_data_t*), "GIPEntry.pIFD", p_ifd, 0x340, 0x40, true, 0xd6a4682a51fa98e9)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::objref_t*), "GIPEntry.pobjref", pobjref, 0x340, 0x40, true, 0xc0afc1545ec77014)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(bool), "GIPEntry.m_isInList", m_is_in_list, 0x80, 0x8, true, 0xdda416a3cddeabc4)
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
#define _m09
#define _m10
#define _m11
#define _m12
#define _m13
#define _m14
#endif