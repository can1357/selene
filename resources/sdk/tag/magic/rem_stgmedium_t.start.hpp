#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagRemSTGMEDIUM.tymed", tymed, 0x0, 0x20, true, 0xbb793c0a70040613)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagRemSTGMEDIUM.dwHandleType", dw_handle_type, 0x20, 0x20, true, 0x23cee1dee910465a)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagRemSTGMEDIUM.pData", p_data, 0x40, 0x20, true, 0x4dd144dc601239e9)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagRemSTGMEDIUM.pUnkForRelease", p_unk_for_release, 0x60, 0x20, true, 0x3bcba12b3f612308)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagRemSTGMEDIUM.cbData", cb_data, 0x80, 0x20, true, 0xf82cef78e51dcf06)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 1>), "tagRemSTGMEDIUM.data", data, 0xa0, 0x8, true, 0xe976ae31661f7fff)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif