#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_SETQUEUEDLIMIT.hDevice", h_device, 0x0, 0x20, true, 0x2810b75fc21063e7)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum d3dk::mt::queuedlimit_type_t), "_D3DKMT_SETQUEUEDLIMIT.Type", type, 0x20, 0x20, true, 0x8356fe2be9707f61)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_SETQUEUEDLIMIT.QueuedPresentLimit", queued_present_limit, 0x40, 0x20, true, 0x149de34468f595ef)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_SETQUEUEDLIMIT.VidPnSourceId", vid_pn_source_id, 0x40, 0x20, true, 0xb465e8ff123f74b5)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_SETQUEUEDLIMIT.QueuedPendingFlipLimit", queued_pending_flip_limit, 0x60, 0x20, true, 0x5e2cbe90ad68b03a)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif