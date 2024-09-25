#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_DMM_COMMITVIDPNREQUESTSET_SERIALIZATION.NumCommitVidPnRequests", num_commit_vid_pn_requests, 0x0, 0x8, true, 0xd4c0078b315ccfff)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 1>), "_DMM_COMMITVIDPNREQUESTSET_SERIALIZATION.CommitVidPnRequestOffset", commit_vid_pn_request_offset, 0x20, 0x20, true, 0x384bfe92d7d04765)
#else
#define _m00
#define _m01
#endif