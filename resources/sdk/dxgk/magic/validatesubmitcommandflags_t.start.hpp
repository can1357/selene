#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_VALIDATESUBMITCOMMANDFLAGS.HardwareQueueSubmission", hardware_queue_submission, 0x0, 0x1, true, 0x8239034ebac243c6, 1, uint32_t)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_VALIDATESUBMITCOMMANDFLAGS.Value", value, 0x0, 0x20, true, 0x778165a0429d35ae)
#else
#define _m00
#define _m01
#endif