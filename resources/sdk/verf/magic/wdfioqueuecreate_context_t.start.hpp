#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct verf::common_context_header_t), "_VF_WDFIOQUEUECREATE_CONTEXT.CommonHeader", common_header, 0x0, 0x40, true, 0x79e980602d7f2318)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::io_queue_config_t), "_VF_WDFIOQUEUECREATE_CONTEXT.IoQueueConfigOriginal", io_queue_config_original, 0x40, 0x0, true, 0x3a3c8271905f1bfd)
#else
#define _m00
#define _m01
#endif