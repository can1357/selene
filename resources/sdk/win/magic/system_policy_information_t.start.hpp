#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_SYSTEM_POLICY_INFORMATION.InputData", input_data, 0x0, 0x40, true, 0x29d4d4c266d8286f)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_SYSTEM_POLICY_INFORMATION.OutputData", output_data, 0x40, 0x40, true, 0x4aa3a28b5ee8d9cf)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_POLICY_INFORMATION.InputDataSize", input_data_size, 0x80, 0x20, true, 0x47a0bd28a4769b4c)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_POLICY_INFORMATION.OutputDataSize", output_data_size, 0xa0, 0x20, true, 0x2c81de107b532c7e)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_POLICY_INFORMATION.Version", version, 0xc0, 0x20, true, 0xea0a9df8a9ead5b5)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif