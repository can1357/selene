#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint16_t), "NVME_CDW11_GET_LOG_PAGE.NUMDU", numdu, 0x0, 0x0, false, 0xd490df9717c6c5e4, 16, uint32_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint16_t), "NVME_CDW11_GET_LOG_PAGE.LogSpecificIdentifier", log_specific_identifier, 0x0, 0x0, false, 0xe0afba8c238f18b1, 16, uint32_t)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "NVME_CDW11_GET_LOG_PAGE.AsUlong", as_ulong, 0x0, 0x0, false, 0x4ab22c039288179b)
#else
#define _m00
#define _m01
#define _m02
#endif