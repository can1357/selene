#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct se::safe_open_prompt_results_t), "_SE_CODEINTEGRITY_ORIGIN_CLAIM.PromptResults", prompt_results, 0x0, 0x0, false, 0x3d1d6fa126e8683f)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::single_list_entry_t), "_SE_CODEINTEGRITY_ORIGIN_CLAIM.AppIdTaggingClaimsHead", app_id_tagging_claims_head, 0x0, 0x0, false, 0x296133c006ad69c5)
#else
#define _m00
#define _m01
#endif