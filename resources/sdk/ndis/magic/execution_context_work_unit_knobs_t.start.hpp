#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_EXECUTION_CONTEXT_WORK_UNIT_KNOBS.AtPassive", at_passive, 0x0, 0x0, false, 0x86cd23343f938240)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_EXECUTION_CONTEXT_WORK_UNIT_KNOBS.AtDispatch", at_dispatch, 0x0, 0x0, false, 0x41fccb691b8246b7)
#else
#define _m00
#define _m01
#endif