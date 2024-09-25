#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(char*), "_CERT_QC_STATEMENT.pszStatementId", psz_statement_id, 0x0, 0x40, true, 0x6aa4b2975ae71d24)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::cryptoapi_blob_t), "_CERT_QC_STATEMENT.StatementInfo", statement_info, 0x40, 0x80, true, 0x3f2df983da69acc5)
#else
#define _m00
#define _m01
#endif