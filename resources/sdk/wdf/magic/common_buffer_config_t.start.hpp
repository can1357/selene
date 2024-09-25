#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_COMMON_BUFFER_CONFIG.Size", size, 0x0, 0x20, true, 0x386f76b57f72b1f)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_COMMON_BUFFER_CONFIG.AlignmentRequirement", alignment_requirement, 0x20, 0x20, true, 0x211173689cc24209)
#else
#define _m00
#define _m01
#endif