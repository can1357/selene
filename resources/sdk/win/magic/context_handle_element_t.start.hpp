#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::context_handle_element_t*), "_CONTEXT_HANDLE_ELEMENT.Next", next, 0x0, 0x40, true, 0x914bcd93117213ba)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<void*, 2>), "_CONTEXT_HANDLE_ELEMENT.pContext.pad", pad, 0x0, 0x80, true, 0x9e0a83135675a1ef)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_CONTEXT_HANDLE_ELEMENT.pContext.userContext", user_context, 0x80, 0x40, true, 0x8eee104071c9a48b)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::variant<u0_p_context_t*, struct win::ndr_scontext_t*>), "_CONTEXT_HANDLE_ELEMENT.pContext", p_context, 0x40, 0x40, true, 0x8fd3b0459705efe3)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::ndr_context_handle_arg_desc_t*), "_CONTEXT_HANDLE_ELEMENT.pCtxtDesc", p_ctxt_desc, 0x80, 0x40, true, 0xc1d22889d017b36b)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t*), "_CONTEXT_HANDLE_ELEMENT.Key", key, 0xc0, 0x40, true, 0xc7efb7ab7bc5b7c0)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif