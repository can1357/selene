#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const struct win::midl_stub_desc_t*), "_MIDL_STUBLESS_PROXY_INFO.pStubDesc", p_stub_desc, 0x0, 0x40, true, 0x76be0b42bd9893a9)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const uint8_t*), "_MIDL_STUBLESS_PROXY_INFO.ProcFormatString", proc_format_string, 0x40, 0x40, true, 0xb04f7979132a7892)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const uint16_t*), "_MIDL_STUBLESS_PROXY_INFO.FormatStringOffset", format_string_offset, 0x80, 0x40, true, 0xd32dd8cb771bf5ed)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rpc::syntax_identifier_t*), "_MIDL_STUBLESS_PROXY_INFO.pTransferSyntax", p_transfer_syntax, 0xc0, 0x40, true, 0x8132e1a5e2678f41)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MIDL_STUBLESS_PROXY_INFO.nCount", n_count, 0x100, 0x40, true, 0x2c8f63c94dfeb121)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::midl_syntax_info_t*), "_MIDL_STUBLESS_PROXY_INFO.pSyntaxInfo", p_syntax_info, 0x140, 0x40, true, 0x4c289f185177427e)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif