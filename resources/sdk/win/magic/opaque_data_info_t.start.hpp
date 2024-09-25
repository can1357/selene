#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::i_serializable_parent_t*), "OpaqueDataInfo._parent", parent, 0x80, 0x40, true, 0xa5c3e16204b5d7a)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "OpaqueDataInfo._unSerialized", un_serialized, 0xc0, 0x20, true, 0x81079a1b9742bc85)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "OpaqueDataInfo._added", added, 0xe0, 0x20, true, 0xe8e25fb4019ebac2)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "OpaqueDataInfo._cOpaqueData", c_opaque_data, 0x100, 0x20, true, 0xd396f88351ed20c5)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "OpaqueDataInfo._dwCollSize", dw_coll_size, 0x120, 0x20, true, 0xa4e09c20727556ae)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::opaque_data_t*), "OpaqueDataInfo._pOpaqueData", p_opaque_data, 0x140, 0x40, true, 0x27417a18f6647169)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "OpaqueDataInfo._pAct", p_act, 0x180, 0x40, true, 0x48c1a554a267da7e)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif