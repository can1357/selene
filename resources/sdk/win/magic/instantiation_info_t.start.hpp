#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::i_serializable_parent_t*), "InstantiationInfo._parent", parent, 0x80, 0x40, true, 0xeafa70926b76f60e)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "InstantiationInfo._unSerialized", un_serialized, 0xc0, 0x20, true, 0xd23265b276603095)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "InstantiationInfo._added", added, 0xe0, 0x20, true, 0xd889ab0f9b8934e)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::instantiation_info_data_t), "InstantiationInfo._instantiationInfoData", instantiation_info_data, 0x100, 0xc0, true, 0xd558b93bf460774d)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct nt::guid_t, 10>), "InstantiationInfo._pIIDs", p_ii_ds, 0x2c0, 0x0, true, 0x84d6bbbac7cc4183)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif