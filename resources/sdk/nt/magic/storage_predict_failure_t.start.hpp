#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_PREDICT_FAILURE.PredictFailure", predict_failure, 0x0, 0x20, true, 0x81658ff216e337b9)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 512>), "_STORAGE_PREDICT_FAILURE.VendorSpecific", vendor_specific, 0x20, 0x0, true, 0x66d51dad76d74966)
#else
#define _m00
#define _m01
#endif