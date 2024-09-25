#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const struct ndis::kspin_descriptor_ex_t*), "_KSPIN.Descriptor", descriptor, 0x0, 0x0, false, 0xece96859355e97ef)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_KSPIN.Bag", bag, 0x0, 0x0, false, 0xe45ba1f0c5ad6c58)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_KSPIN.Context", context, 0x0, 0x0, false, 0x4859b9b463734fbe)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KSPIN.Id", id, 0x0, 0x0, false, 0xe4d713487917a208)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::kspin_communication_t), "_KSPIN.Communication", communication, 0x0, 0x0, false, 0xbae48011fb0567da)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_KSPIN.ConnectionIsExternal", connection_is_external, 0x0, 0x0, false, 0x6db42c56f0af141e)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::ksidentifier_t), "_KSPIN.ConnectionInterface", connection_interface, 0x0, 0x0, false, 0xdba61a1c14ffc3f)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::ksidentifier_t), "_KSPIN.ConnectionMedium", connection_medium, 0x0, 0x0, false, 0x7e2dae7af49f530d)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::kspriority_t), "_KSPIN.ConnectionPriority", connection_priority, 0x0, 0x0, false, 0xe3caf3d82f6e70d1)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union ndis::ksdataformat_t*), "_KSPIN.ConnectionFormat", connection_format, 0x0, 0x0, false, 0xa4dc88c30a90544b)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::ksmultiple_item_t*), "_KSPIN.AttributeList", attribute_list, 0x0, 0x0, false, 0xa5acfd0d43a2b128)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KSPIN.StreamHeaderSize", stream_header_size, 0x0, 0x0, false, 0xc806c34e8a4471c4)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::kspin_dataflow_t), "_KSPIN.DataFlow", data_flow, 0x0, 0x0, false, 0xaf477cc04fa7350a)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::ksstate_t), "_KSPIN.DeviceState", device_state, 0x0, 0x0, false, 0x5bdbfeb4a05432b0)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::ksreset_t), "_KSPIN.ResetState", reset_state, 0x0, 0x0, false, 0xe2be415cee3d0402)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::ksstate_t), "_KSPIN.ClientState", client_state, 0x0, 0x0, false, 0xa4520b83cd70d0a8)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#define _m09
#define _m10
#define _m11
#define _m12
#define _m13
#define _m14
#define _m15
#endif