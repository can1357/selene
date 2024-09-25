#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::i_serializable_parent_t*), "ComWinRTActivationProperties._parent", parent, 0x80, 0x40, true, 0x308ed13d1d0d0421)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "ComWinRTActivationProperties._unSerialized", un_serialized, 0xc0, 0x20, true, 0x57e631754884bcfa)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "ComWinRTActivationProperties._added", added, 0xe0, 0x20, true, 0x58ef2949b754afd9)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::com_win_rt_activation_properties_data_t), "ComWinRTActivationProperties._comWinRTActivationPropertiesData", com_win_rt_activation_properties_data, 0x100, 0xc0, true, 0xbb32f9446238f442)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif