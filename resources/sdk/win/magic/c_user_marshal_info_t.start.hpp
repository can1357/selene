#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "CUserMarshalInfo._RpcStatus", rpc_status, 0x0, 0x20, true, 0x496434ef1a2c565c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t*), "CUserMarshalInfo._pSuppliedBuffer", p_supplied_buffer, 0x40, 0x40, true, 0x79c7fe231b8bfb)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::ndr_user_marshal_info_t), "CUserMarshalInfo._MarshalInfo", marshal_info, 0x80, 0xc0, true, 0x39f4b70cd493d5d3)
#else
#define _m00
#define _m01
#define _m02
#endif