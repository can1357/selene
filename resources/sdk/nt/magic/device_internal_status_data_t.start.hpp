#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DEVICE_INTERNAL_STATUS_DATA.Version", version, 0x0, 0x20, true, 0x9c0a74bdc6f1628d)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DEVICE_INTERNAL_STATUS_DATA.Size", size, 0x20, 0x20, true, 0x6a8a68efe14e5ebc)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_DEVICE_INTERNAL_STATUS_DATA.T10VendorId", t10_vendor_id, 0x40, 0x40, true, 0xf41d61d5503a3907)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DEVICE_INTERNAL_STATUS_DATA.DataSet1Length", data_set1_length, 0x80, 0x20, true, 0xe8b690139e519949)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DEVICE_INTERNAL_STATUS_DATA.DataSet2Length", data_set2_length, 0xa0, 0x20, true, 0xaeab7811fe5e9af1)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DEVICE_INTERNAL_STATUS_DATA.DataSet3Length", data_set3_length, 0xc0, 0x20, true, 0x269fd8b6770378e)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DEVICE_INTERNAL_STATUS_DATA.DataSet4Length", data_set4_length, 0xe0, 0x20, true, 0xaae37577c1b559bd)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DEVICE_INTERNAL_STATUS_DATA.StatusDataVersion", status_data_version, 0x100, 0x8, true, 0xd0bc961f305c147e)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 128>), "_DEVICE_INTERNAL_STATUS_DATA.ReasonIdentifier", reason_identifier, 0x120, 0x0, true, 0x8f65186012e8db52)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DEVICE_INTERNAL_STATUS_DATA.StatusDataLength", status_data_length, 0x520, 0x20, true, 0xfa1099b8a374cba4)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 1>), "_DEVICE_INTERNAL_STATUS_DATA.StatusData", status_data, 0x540, 0x8, true, 0x2944efbf93ac1b94)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#define _m09
#define _m10
#endif