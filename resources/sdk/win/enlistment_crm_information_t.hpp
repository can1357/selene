#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"

#include "magic/enlistment_crm_information_t.start.hpp"
namespace win
{
    // [struct _ENLISTMENT_CRM_INFORMATION]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct enlistment_crm_information_t                   
    {                                                     
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                           
        //                                                
        _m00 struct nt::guid_t crm_transaction_manager_id;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .CrmTransactionManagerId
        _m01 struct nt::guid_t crm_resource_manager_id;     //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .CrmResourceManagerId
        _m02 struct nt::guid_t crm_enlistment_id;           //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .CrmEnlistmentId
                                                          
        SDK_NONVOL_PROPERTIES( "_ENLISTMENT_CRM_INFORMATION.$", 0x30, true, 0x444f7b318714a19a );                           
        SDK_FIXED_SIZE( enlistment_crm_information_t, 0x30 );                           
    };                                                    
};
#include "magic/enlistment_crm_information_t.end.hpp"
SDK_VERIFY( struct win::enlistment_crm_information_t, 0x30 );
