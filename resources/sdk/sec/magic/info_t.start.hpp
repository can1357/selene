#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::i_serializable_parent_t*), "SecurityInfo._parent", parent, 0xc0, 0x40, true, 0x9eae3439aef08f16)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "SecurityInfo._unSerialized", un_serialized, 0x100, 0x20, true, 0x7629061c5cceb82d)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "SecurityInfo._added", added, 0x120, 0x20, true, 0x77f5e7af146a2082)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::security_info_data_t), "SecurityInfo._securityInfoData", security_info_data, 0x140, 0xc0, true, 0x69dd131ee2d86426)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::security_info_data_t), "SecurityInfo._securityInfoDataFixedUp", security_info_data_fixed_up, 0x200, 0xc0, true, 0x5fc2f12b03bad089)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "SecurityInfo._dwFixupServerInfoBufSize", dw_fixup_server_info_buf_size, 0x2c0, 0x20, true, 0xf6099acdfc3b51d0)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif