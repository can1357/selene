#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const struct win::ips_factory_buffer_vtbl_t*), "tagCStdPSFactoryBuffer.lpVtbl", lp_vtbl, 0x0, 0x40, true, 0xa8295562c78d6a13)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "tagCStdPSFactoryBuffer.RefCount", ref_count, 0x40, 0x20, true, 0xa31042969824bed4)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const struct tag::proxy_file_info_t**), "tagCStdPSFactoryBuffer.pProxyFileList", p_proxy_file_list, 0x80, 0x40, true, 0x922c10b8c13aa33a)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "tagCStdPSFactoryBuffer.Filler1", filler1, 0xc0, 0x20, true, 0xc74f2a7b2d2319a2)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif