#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::i_serializable_parent_t*), "WinRTActivationProperties._parent", parent, 0x0, 0x0, false, 0x6f5e9b2321ce6ad8)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "WinRTActivationProperties._unSerialized", un_serialized, 0x0, 0x0, false, 0xd55ea55a32044c49)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "WinRTActivationProperties._added", added, 0x0, 0x0, false, 0x1d3c0c7fe8b7a85b)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::win_rt_activation_properties_data_t), "WinRTActivationProperties._winRTActivationPropertiesData", win_rt_activation_properties_data, 0x0, 0x0, false, 0xc3797a36b57917f9)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif