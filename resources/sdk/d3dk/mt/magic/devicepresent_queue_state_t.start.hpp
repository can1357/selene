#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_DEVICEPRESENT_QUEUE_STATE.VidPnSourceId", vid_pn_source_id, 0x0, 0x20, true, 0x8c53fbe723f8ac0a)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_D3DKMT_DEVICEPRESENT_QUEUE_STATE.bQueuedPresentLimitReached", b_queued_present_limit_reached, 0x20, 0x8, true, 0x85e6881a70a766f2)
#else
#define _m00
#define _m01
#endif