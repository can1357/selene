#pragma once
#include <sdkgen/support_library.hpp>
#include "ksidentifier_t.hpp"

#include "magic/ksproperty_values_t.start.hpp"
namespace ndis
{
    struct ksproperty_memberslist_t;

    // [struct KSPROPERTY_VALUES]
    // => Windows 10 v1607
    //
    struct ksproperty_values_t                                               
    {                                                                        
        // Windows 10 v1607                                                  
        //                                                                   
        _m00 struct ndis::ksidentifier_t                  prop_type_set;       //{ +0x0000    } | .PropTypeSet
        _m01 uint32_t                                     members_list_count;  //{ +0x0018    } | .MembersListCount
        _m02 const struct ndis::ksproperty_memberslist_t* members_list;        //{ +0x0020    } | .MembersList
                                                                             
        SDK_MAGIC_PROPERTIES( "KSPROPERTY_VALUES.$", 0x0, false, 0x3630c792432807be );                   
        SDK_FIXED_SIZE( ksproperty_values_t, 0x28 );                         
    };                                                                       
};
#include "magic/ksproperty_values_t.end.hpp"
SDK_VERIFY( struct ndis::ksproperty_values_t, 0x28 );
