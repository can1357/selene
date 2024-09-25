#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "CContextPropList._Max", max, 0x0, 0x20, true, 0x571a43905fff2cc3)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "CContextPropList._iFirst", i_first, 0x20, 0x20, true, 0xe538b6be5c2ba5d7)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "CContextPropList._iLast", i_last, 0x40, 0x20, true, 0x80fe62129f26517a)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "CContextPropList._Count", count, 0x60, 0x20, true, 0x8a236025bdd526dc)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "CContextPropList._cCompareProps", c_compare_props, 0x80, 0x20, true, 0xaa7db9b4cc8c2773)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CContextPropList._Hash", hash, 0xa0, 0x20, true, 0xbf8919ec0274be06)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "CContextPropList._slotIdx", slot_idx, 0xc0, 0x20, true, 0x1181777fe2741ee9)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::context_property_t*), "CContextPropList._pProps", p_props, 0x100, 0x40, true, 0x4f00ba745edd6517)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t*), "CContextPropList._pSlots", p_slots, 0x140, 0x40, true, 0xfff6d10f27a44ace)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::context_property_t*), "CContextPropList._pCompareBuffer", p_compare_buffer, 0x180, 0x40, true, 0x593065ad0b980170)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::s_ctx_list_index_t*), "CContextPropList._pIndex", p_index, 0x1c0, 0x40, true, 0x9555b8643c0565dd)
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
#endif