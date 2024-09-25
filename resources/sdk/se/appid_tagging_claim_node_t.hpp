#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/single_list_entry_t.hpp"

#include "magic/appid_tagging_claim_node_t.start.hpp"
namespace se
{
    // [struct _SE_APPID_TAGGING_CLAIM_NODE]
    // => Windows 11
    //
    struct appid_tagging_claim_node_t                            
    {                                                            
        // Windows 11                                            
        //                                                       
        _m00 nt::unicode_view               app_id_tagging_key;    //{ +0x0000    } | .AppIdTaggingKey
        _m01 nt::unicode_view               app_id_tagging_value;  //{ +0x0010    } | .AppIdTaggingValue
        _m02 struct nt::single_list_entry_t list_entry;            //{ +0x0020    } | .ListEntry
                                                                 
        SDK_MAGIC_PROPERTIES( "_SE_APPID_TAGGING_CLAIM_NODE.$", 0x0, false, 0x10d35b698f5f1621 );                     
        SDK_FIXED_SIZE( appid_tagging_claim_node_t, 0x28 );                     
    };                                                           
};
#include "magic/appid_tagging_claim_node_t.end.hpp"
SDK_VERIFY( struct se::appid_tagging_claim_node_t, 0x28 );
