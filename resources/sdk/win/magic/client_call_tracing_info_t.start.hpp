#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "ClientCallTracingInfo.pProxyInterfacePointer", p_proxy_interface_pointer, 0x0, 0x40, true, 0x10169d6db6cf8d48)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "ClientCallTracingInfo.pProxyManagerIUnknown", p_proxy_manager_i_unknown, 0x40, 0x40, true, 0xac18552dad777d52)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "ClientCallTracingInfo.ipid", ipid, 0x80, 0x80, true, 0x9b0d249f475d6063)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "ClientCallTracingInfo.oid", oid, 0x100, 0x40, true, 0x7180f298ff1b0d63)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::caller_info_t), "ClientCallTracingInfo.callerInfo", caller_info, 0x140, 0x40, true, 0x58b39005088c9b45)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif