#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const wchar_t*), "tagSDBMSITRANSFORMINFO.lpszTransformName", lpsz_transform_name, 0x0, 0x40, true, 0xa79f233694e46b75)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagSDBMSITRANSFORMINFO.trTransform", tr_transform, 0x40, 0x20, true, 0x7a0ae3fe1205d101)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagSDBMSITRANSFORMINFO.trFile", tr_file, 0x60, 0x20, true, 0x6390bc6723c30e2a)
#else
#define _m00
#define _m01
#define _m02
#endif