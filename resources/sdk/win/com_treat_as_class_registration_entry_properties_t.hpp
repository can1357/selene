#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"

#include "magic/com_treat_as_class_registration_entry_properties_t.start.hpp"
namespace win
{
    // [struct ComTreatAsClassRegistrationEntryProperties]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct com_treat_as_class_registration_entry_properties_t
    {                                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2         
        //                              
        _m00 struct nt::guid_t treat_as;                       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .TreatAs
                                                             
        SDK_MAGIC_PROPERTIES( "ComTreatAsClassRegistrationEntryProperties.$", 0x38, true, 0x87860fa87f4d1586 );         
        SDK_DYNAMIC_SIZE( com_treat_as_class_registration_entry_properties_t );         
    };                                                       
};
#include "magic/com_treat_as_class_registration_entry_properties_t.end.hpp"
