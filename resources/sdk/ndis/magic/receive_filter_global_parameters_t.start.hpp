#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::object_header_t), "_NDIS_RECEIVE_FILTER_GLOBAL_PARAMETERS.Header", header, 0x0, 0x20, true, 0xf1fd8d7d230385ab)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_RECEIVE_FILTER_GLOBAL_PARAMETERS.Flags", flags, 0x20, 0x20, true, 0x7df19c8744833652)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_RECEIVE_FILTER_GLOBAL_PARAMETERS.EnabledFilterTypes", enabled_filter_types, 0x40, 0x20, true, 0x3788f6f54ed5c6b2)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_RECEIVE_FILTER_GLOBAL_PARAMETERS.EnabledQueueTypes", enabled_queue_types, 0x60, 0x20, true, 0xf700165e7c4d0f3e)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif