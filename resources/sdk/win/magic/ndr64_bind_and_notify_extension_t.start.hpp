#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::ndr64_bind_context_t), "_NDR64_BIND_AND_NOTIFY_EXTENSION.Binding", binding, 0x0, 0x30, true, 0x4d2685e6a818a179)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NDR64_BIND_AND_NOTIFY_EXTENSION.NotifyIndex", notify_index, 0x30, 0x10, true, 0x1d44578bccc3f63b)
#else
#define _m00
#define _m01
#endif