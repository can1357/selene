#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::object_header_t), "_NDIS_RECEIVE_FILTER_FIELD_PARAMETERS.Header", header, 0x0, 0x20, true, 0x4f871034d69c9cfe)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_RECEIVE_FILTER_FIELD_PARAMETERS.Flags", flags, 0x20, 0x20, true, 0x6819823863fc35e7)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::frame_header_t), "_NDIS_RECEIVE_FILTER_FIELD_PARAMETERS.FrameHeader", frame_header, 0x40, 0x20, true, 0x52fddbe24c6982a9)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::receive_filter_test_t), "_NDIS_RECEIVE_FILTER_FIELD_PARAMETERS.ReceiveFilterTest", receive_filter_test, 0x60, 0x20, true, 0x499202a731dd7621)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif