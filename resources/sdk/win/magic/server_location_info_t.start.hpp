#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::i_serializable_parent_t*), "ServerLocationInfo._parent", parent, 0x80, 0x40, true, 0x25673332b1574aba)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "ServerLocationInfo._unSerialized", un_serialized, 0xc0, 0x20, true, 0xf33960664bede495)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "ServerLocationInfo._added", added, 0xe0, 0x20, true, 0x17a39aef6273d1a4)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::location_info_data_t), "ServerLocationInfo._locationInfoData", location_info_data, 0x100, 0xc0, true, 0xc1bd2b0b8ff77698)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::c_object_context_t*), "ServerLocationInfo._pObjectContext", p_object_context, 0x1c0, 0x40, true, 0x698a3287c29af247)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::i_special_system_properties_t*), "ServerLocationInfo._pISSP", p_issp, 0x200, 0x40, true, 0x8514229abb685536)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif