#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_802_11_PMKID_CANDIDATE_LIST.Version", version, 0x0, 0x20, true, 0xc4bf704db508401c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_802_11_PMKID_CANDIDATE_LIST.NumCandidates", num_candidates, 0x20, 0x20, true, 0x7ee9cca035b35c7d)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct ndis::pmkid_candidate_t, 1>), "_NDIS_802_11_PMKID_CANDIDATE_LIST.CandidateList", candidate_list, 0x40, 0x60, true, 0x4cd71ff87f865069)
#else
#define _m00
#define _m01
#define _m02
#endif