#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(int4_t), "_DMM_COMMITVIDPNREQUEST_DIAGINFO.ClientType", client_type, 0x0, 0x4, true, 0x6aa79bbae2181464, 4, uint32_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(int4_t), "_DMM_COMMITVIDPNREQUEST_DIAGINFO.VidPnChange", vid_pn_change, 0x4, 0x4, true, 0xae8584d9c2842adc, 4, uint32_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DMM_COMMITVIDPNREQUEST_DIAGINFO.ReclaimClonedTarget", reclaim_cloned_target, 0x20, 0x1, true, 0x114db7e0cf18f2ed, 1, uint8_t)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DMM_COMMITVIDPNREQUEST_DIAGINFO.CleanupAfterFailedCommitVidPn", cleanup_after_failed_commit_vid_pn, 0x21, 0x1, true, 0xd87127dadded417c, 1, uint8_t)
#define _m04 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DMM_COMMITVIDPNREQUEST_DIAGINFO.ForceAllActiveVidPnModeListInvalidation", force_all_active_vid_pn_mode_list_invalidation, 0x22, 0x1, true, 0x18a56b6337ec042b, 1, uint8_t)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DMM_COMMITVIDPNREQUEST_DIAGINFO.SkipCommitVidPn", skip_commit_vid_pn, 0x23, 0x1, true, 0x828cb9c69beb6f99, 1, uint8_t)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DMM_COMMITVIDPNREQUEST_DIAGINFO.ModeChangeRequestId", mode_change_request_id, 0x40, 0x20, true, 0x9d94d7482a51e263)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif