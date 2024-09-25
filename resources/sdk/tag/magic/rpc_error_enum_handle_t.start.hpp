#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagRPC_ERROR_ENUM_HANDLE.Signature", signature, 0x0, 0x20, true, 0x1bc7e8147a181add)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "tagRPC_ERROR_ENUM_HANDLE.CurrentPos", current_pos, 0x40, 0x40, true, 0xfb4caa69ce9cb75f)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "tagRPC_ERROR_ENUM_HANDLE.Head", head, 0x80, 0x40, true, 0xd87dbb6c5607afce)
#else
#define _m00
#define _m01
#define _m02
#endif