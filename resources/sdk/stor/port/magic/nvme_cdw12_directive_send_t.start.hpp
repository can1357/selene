#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union stor::port::nvme_cdw12_directive_send_identify_enable_directive_t), "NVME_CDW12_DIRECTIVE_SEND.EnableDirective", enable_directive, 0x0, 0x0, false, 0x3abaaec019f86805)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "NVME_CDW12_DIRECTIVE_SEND.AsUlong", as_ulong, 0x0, 0x0, false, 0x5b01b65d6a997099)
#else
#define _m00
#define _m01
#endif