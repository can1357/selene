#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct stor::port::sense_data_t), "_SENSE_DATA_EX.FixedData", fixed_data, 0x0, 0x90, true, 0xadd1a8e3387d2942)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct stor::port::descriptor_sense_data_t), "_SENSE_DATA_EX.DescriptorData", descriptor_data, 0x0, 0x48, true, 0x270286a300512139)
#else
#define _m00
#define _m01
#endif