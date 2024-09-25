#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::i_serializable_parent_t*), "InstanceInfo._parent", parent, 0x80, 0x40, true, 0x31a7340d77a3e49d)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "InstanceInfo._unSerialized", un_serialized, 0xc0, 0x20, true, 0x47f45552b7854bd2)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "InstanceInfo._added", added, 0xe0, 0x20, true, 0x522310f3b03a88a7)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::instance_info_data_t), "InstanceInfo._instanceInfoData", instance_info_data, 0x100, 0x0, true, 0x97f1d327bc7ca914)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::i_storage_t*), "InstanceInfo._pstg", pstg, 0x200, 0x40, true, 0xa5820fa526ae3c40)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif