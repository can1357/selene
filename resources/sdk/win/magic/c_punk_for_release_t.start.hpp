#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CPunkForRelease._cRefs", c_refs, 0x40, 0x20, true, 0x5e838477d6b14afa)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "CPunkForRelease._fTopLayerMFP", f_top_layer_mfp, 0x60, 0x1, true, 0x9af1790952d780b6, 1, uint32_t)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::stgmedium_t), "CPunkForRelease._stgmed", stgmed, 0x80, 0xc0, true, 0xfe77f565391d9a20)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::i_unknown_t*), "CPunkForRelease._pUnkForRelease", p_unk_for_release, 0x140, 0x40, true, 0x596deb8212936019)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif