#pragma once
#include <sdkgen/support_library.hpp>
#include "pmkid_candidate_t.hpp"

#include "magic/_802_11_pmkid_candidate_list_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_802_11_PMKID_CANDIDATE_LIST]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct _802_11_pmkid_candidate_list_t                                 
    {                                                                     
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                                                                
        _m00 uint32_t                                      version;         //{ +0x0000    +0x0000    +0x0000    } | .Version
        _m01 uint32_t                                      num_candidates;  //{ +0x0004    +0x0004    +0x0004    } | .NumCandidates
        _m02 sdk::array<struct ndis::pmkid_candidate_t, 1> candidate_list;  //{ +0x0008    +0x0008    +0x0008    } | .CandidateList
                                                                          
        SDK_MAGIC_PROPERTIES( "_NDIS_802_11_PMKID_CANDIDATE_LIST.$", 0x14, true, 0x6673080021c3709f );               
        SDK_FIXED_SIZE( _802_11_pmkid_candidate_list_t, 0x14 );               
    };                                                                    
};
#include "magic/_802_11_pmkid_candidate_list_t.end.hpp"
SDK_VERIFY( struct ndis::_802_11_pmkid_candidate_list_t, 0x14 );
