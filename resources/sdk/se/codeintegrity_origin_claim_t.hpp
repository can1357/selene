#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/single_list_entry_t.hpp"
#include "safe_open_prompt_results_t.hpp"

#include "magic/codeintegrity_origin_claim_t.start.hpp"
namespace se
{
    // [struct _SE_CODEINTEGRITY_ORIGIN_CLAIM]
    // => Windows 11
    //
    struct codeintegrity_origin_claim_t                                       
    {                                                                         
        // Windows 11                                                         
        //                                                                    
        _m00 struct se::safe_open_prompt_results_t prompt_results;              //{ +0x0000    } | .PromptResults
        _m01 struct nt::single_list_entry_t        app_id_tagging_claims_head;  //{ +0x0210    } | .AppIdTaggingClaimsHead
                                                                              
        SDK_MAGIC_PROPERTIES( "_SE_CODEINTEGRITY_ORIGIN_CLAIM.$", 0x0, false, 0x136a6bca97d50f77 );                           
        SDK_FIXED_SIZE( codeintegrity_origin_claim_t, 0x218 );                           
    };                                                                        
};
#include "magic/codeintegrity_origin_claim_t.end.hpp"
SDK_VERIFY( struct se::codeintegrity_origin_claim_t, 0x218 );
