#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CERT_QC_STATEMENTS_EXT_INFO.cStatement", c_statement, 0x0, 0x20, true, 0x87d2db8d341f37b)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::cert_qc_statement_t*), "_CERT_QC_STATEMENTS_EXT_INFO.rgStatement", rg_statement, 0x40, 0x40, true, 0x586d6d86290c28be)
#else
#define _m00
#define _m01
#endif