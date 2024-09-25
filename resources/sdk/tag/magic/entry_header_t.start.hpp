#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagEntryHeader.Signature", signature, 0x0, 0x20, true, 0xa444543d6b2555e2)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagEntryHeader.cbBuffer", cb_buffer, 0x20, 0x20, true, 0x8138ff0f6515b651)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagEntryHeader.cbSize", cb_size, 0x40, 0x20, true, 0x2829b02eb995a9ae)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "tagEntryHeader.policyID", policy_id, 0x80, 0x80, true, 0x4242aa5dd884540b)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif