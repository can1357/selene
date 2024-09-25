#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const struct nt::guid_t), "CClientChannel._guidSignature", guid_signature, 0x2c0, 0x80, true, 0x6be50c339dc7b8fd)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const uint32_t), "CClientChannel._dwTIDCallee", dw_tid_callee, 0x340, 0x20, true, 0xa0503ca02284ce13)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::variant<class win::c_dest_object_t, const class win::c_dest_object_t>), "CClientChannel._destObj", dest_obj, 0x380, 0x40, true, 0x4f89ec118c99e611)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::ipid_entry_t*), "CClientChannel._pIPIDEntry", p_ipid_entry, 0x4c0, 0x40, true, 0x92028b7bcdc1f32d)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::c_channel_handle_t volatile*), "CClientChannel._pRpcDefault", p_rpc_default, 0x500, 0x40, true, 0x6dabafd6799558a9)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::c_channel_handle_t*), "CClientChannel._pRpcCustom", p_rpc_custom, 0x540, 0x40, true, 0x1616c5adff97734d)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "CClientChannel._pInterfaceInfo", p_interface_info, 0x580, 0x40, true, 0x137047cdaec2843f)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif