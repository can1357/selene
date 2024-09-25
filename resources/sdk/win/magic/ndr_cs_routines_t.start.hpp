#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::ndr_cs_size_convert_routines_t*), "_NDR_CS_ROUTINES.pSizeConvertRoutines", p_size_convert_routines, 0x0, 0x40, true, 0x997379fa022aff4c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, int32_t, uint32_t*, uint32_t*, uint32_t*, uint32_t*)>**), "_NDR_CS_ROUTINES.pTagGettingRoutines", p_tag_getting_routines, 0x40, 0x40, true, 0xadb6c8bff2c679da)
#else
#define _m00
#define _m01
#endif