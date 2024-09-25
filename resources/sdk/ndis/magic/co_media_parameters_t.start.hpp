#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CO_MEDIA_PARAMETERS.Flags", flags, 0x0, 0x20, true, 0xbf4935888bd944c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CO_MEDIA_PARAMETERS.ReceivePriority", receive_priority, 0x20, 0x20, true, 0x129b189f66f280ff)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CO_MEDIA_PARAMETERS.ReceiveSizeHint", receive_size_hint, 0x40, 0x20, true, 0x40132e97f7eecae9)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::co_specific_parameters_t), "_CO_MEDIA_PARAMETERS.MediaSpecific", media_specific, 0x80, 0x60, true, 0xecc6f6f1b699ed1a)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif