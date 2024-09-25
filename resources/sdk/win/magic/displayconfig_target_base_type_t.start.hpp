#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct win::displayconfig_device_info_header_t), "DISPLAYCONFIG_TARGET_BASE_TYPE.header", header, 0x0, 0xa0, true, 0xff457f464668912c)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(int32_t), "DISPLAYCONFIG_TARGET_BASE_TYPE.baseOutputTechnology", base_output_technology, 0xa0, 0x20, true, 0x4b162f9b93ee1db4, 32, uint32_t)
#else
#define _m00
#define _m01
#endif