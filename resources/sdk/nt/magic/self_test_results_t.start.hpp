#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "_SELF_TEST_RESULTS.SelfTestResults", self_test_results, 0x0, 0x4, true, 0x95d8a27e740dcc4, 4, uint8_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_SELF_TEST_RESULTS.SelfTestCode", self_test_code, 0x5, 0x3, true, 0xffcf73f9f304e2a3, 3, uint8_t)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_SELF_TEST_RESULTS.SelfTestNumber", self_test_number, 0x8, 0x8, true, 0xf4447f16aa3253d6)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 2>), "_SELF_TEST_RESULTS.PowerOnHours", power_on_hours, 0x10, 0x10, true, 0x93a1aa4aabea5d7b)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 8>), "_SELF_TEST_RESULTS.AddressOfFirstFailure", address_of_first_failure, 0x20, 0x40, true, 0x2ab9642890224e88)
#define _m05 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "_SELF_TEST_RESULTS.SenseKey", sense_key, 0x60, 0x4, true, 0xc8d39333664b6d28, 4, uint8_t)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_SELF_TEST_RESULTS.AdditionalSenseCode", additional_sense_code, 0x68, 0x8, true, 0x854cf144c11f3ce3)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_SELF_TEST_RESULTS.AdditionalSenseCodeQualifier", additional_sense_code_qualifier, 0x70, 0x8, true, 0x3e7c9e7c442bbbce)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_SELF_TEST_RESULTS.VendorSpecific", vendor_specific, 0x78, 0x8, true, 0xffb03f23533dc15e)
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
#endif