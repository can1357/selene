#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IPSEC_OFFLOAD_V2_SECURITY_ASSOCIATION.Flags", flags, 0x0, 0x20, true, 0x1af0ec8bb0218bec)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::ipsec_offload_v2_operation_t), "_IPSEC_OFFLOAD_V2_SECURITY_ASSOCIATION.Operation", operation, 0x20, 0x20, true, 0x36bc9c9c1c1a8e7)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IPSEC_OFFLOAD_V2_SECURITY_ASSOCIATION.Spi", spi, 0x40, 0x20, true, 0x839688163b4c3b41)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::ipsec_offload_v2_algorithm_info_t), "_IPSEC_OFFLOAD_V2_SECURITY_ASSOCIATION.AuthenticationAlgorithm", authentication_algorithm, 0x60, 0x80, true, 0x53c57da165b9ca27)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::ipsec_offload_v2_algorithm_info_t), "_IPSEC_OFFLOAD_V2_SECURITY_ASSOCIATION.EncryptionAlgorithm", encryption_algorithm, 0xe0, 0x80, true, 0x8c5685f22966af25)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IPSEC_OFFLOAD_V2_SECURITY_ASSOCIATION.SequenceNumberHighOrder", sequence_number_high_order, 0x160, 0x20, true, 0x229f2ef7e978be7a)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif