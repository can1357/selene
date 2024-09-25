#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "KSFASTMETHOD_ITEM.MethodId", method_id, 0x0, 0x0, false, 0xed79689b5febe3f)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint8_t(struct nt::file_object_t*, struct ndis::ksidentifier_t*, uint32_t, void*, uint32_t, struct io::status_block_t*)>*), "KSFASTMETHOD_ITEM.MethodHandler", method_handler, 0x0, 0x0, false, 0x11d91a8bc4175c3e)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "KSFASTMETHOD_ITEM.MethodSupported", method_supported, 0x0, 0x0, false, 0xb5208dfa760baf2)
#else
#define _m00
#define _m01
#define _m02
#endif