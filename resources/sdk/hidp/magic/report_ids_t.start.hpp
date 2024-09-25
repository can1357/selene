#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_HIDP_REPORT_IDS.ReportID", report_id, 0x0, 0x8, true, 0xd8539c9ebd8e9783)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_HIDP_REPORT_IDS.CollectionNumber", collection_number, 0x8, 0x8, true, 0x5650ca300356820a)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_HIDP_REPORT_IDS.InputLength", input_length, 0x10, 0x10, true, 0xa96f2451efb53136)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_HIDP_REPORT_IDS.OutputLength", output_length, 0x20, 0x10, true, 0xc8d3414e0bbe0055)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_HIDP_REPORT_IDS.FeatureLength", feature_length, 0x30, 0x10, true, 0xeb9c6f768a03dbca)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif