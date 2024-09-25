#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::context_stack_node_t*), "tagContextStackNode.pNext", p_next, 0x0, 0x40, true, 0xc835f940a246a38c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::c_object_context_t*), "tagContextStackNode.pSavedContext", p_saved_context, 0x40, 0x40, true, 0x643b5740b23f94bb)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::c_object_context_t*), "tagContextStackNode.pServerContext", p_server_context, 0x80, 0x40, true, 0xd4dfb7b4310254b5)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::c_ctx_call_t*), "tagContextStackNode.pClientCall", p_client_call, 0xc0, 0x40, true, 0xdd56ed30b7b7ff2b)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::c_ctx_call_t*), "tagContextStackNode.pServerCall", p_server_call, 0x100, 0x40, true, 0x8108ec0845580b0b)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::c_policy_set_t*), "tagContextStackNode.pPS", p_ps, 0x140, 0x40, true, 0x2afffc0e7d46e858)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif