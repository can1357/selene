#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kist_base_frame_t*), "_KIST_LINK_FRAME.IstBaseFrame", ist_base_frame, 0x0, 0x40, true, 0xa889ae89c1b29c0a)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KIST_LINK_FRAME.Signature", signature, 0x40, 0x20, true, 0x6b34f9da1a1f3ac4)
#else
#define _m00
#define _m01
#endif