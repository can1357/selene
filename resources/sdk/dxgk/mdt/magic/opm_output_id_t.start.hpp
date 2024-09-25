#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxgk::mdt::opm_random_number_t), "_DXGKMDT_OPM_OUTPUT_ID.rnRandomNumber", rn_random_number, 0x0, 0x80, true, 0xc8b2e42d382b259e)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKMDT_OPM_OUTPUT_ID.ulStatusFlags", ul_status_flags, 0x80, 0x20, true, 0x19b7e15204fad347)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_DXGKMDT_OPM_OUTPUT_ID.OutputId", output_id, 0xa0, 0x40, true, 0x31a64b3930e40017)
#else
#define _m00
#define _m01
#define _m02
#endif