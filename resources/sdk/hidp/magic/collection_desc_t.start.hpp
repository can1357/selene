#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_HIDP_COLLECTION_DESC.UsagePage", usage_page, 0x0, 0x10, true, 0xf582fededa4f18e)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_HIDP_COLLECTION_DESC.Usage", usage, 0x10, 0x10, true, 0x3f2fbe5a115b113)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_HIDP_COLLECTION_DESC.CollectionNumber", collection_number, 0x20, 0x8, true, 0x68836f28abffadab)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_HIDP_COLLECTION_DESC.InputLength", input_length, 0xa0, 0x10, true, 0x778d9dd431534b31)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_HIDP_COLLECTION_DESC.OutputLength", output_length, 0xb0, 0x10, true, 0xfb4921e75a3b73fb)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_HIDP_COLLECTION_DESC.FeatureLength", feature_length, 0xc0, 0x10, true, 0xb133f82271f98214)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_HIDP_COLLECTION_DESC.PreparsedDataLength", preparsed_data_length, 0xd0, 0x10, true, 0x2205cb821567da1)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct hidp::preparsed_data_t*), "_HIDP_COLLECTION_DESC.PreparsedData", preparsed_data, 0x100, 0x40, true, 0xcada46ea296e99e3)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif