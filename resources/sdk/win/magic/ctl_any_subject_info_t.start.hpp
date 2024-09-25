#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::crypt_algorithm_identifier_t), "_CTL_ANY_SUBJECT_INFO.SubjectAlgorithm", subject_algorithm, 0x0, 0xc0, true, 0x821793f1488c418e)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::cryptoapi_blob_t), "_CTL_ANY_SUBJECT_INFO.SubjectIdentifier", subject_identifier, 0xc0, 0x80, true, 0xc0fe2bc09a63fcf0)
#else
#define _m00
#define _m01
#endif