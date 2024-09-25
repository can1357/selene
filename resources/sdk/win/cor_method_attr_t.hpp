#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum CorMethodAttr]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class cor_method_attr_t : int32_t   
    {                                        
        private_scope =            0x0,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        reuse_slot =               0x0,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        _private =                 0x1,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        fam_and_assem =            0x2,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        assem =                    0x3,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        family =                   0x4,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        fam_or_assem =             0x5,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        _public =                  0x6,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        member_access_mask =       0x7,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        unmanaged_export =         0x8,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        _static =                  0x10,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        final =                    0x20,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        _virtual =                 0x40,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        hide_by_sig =              0x80,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        new_slot =                 0x100,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        vtable_layout_mask =       0x100,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        check_access_on_override = 0x200,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        abstract =                 0x400,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        special_name =             0x800,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        rt_special_name =          0x1000,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        pinvoke_impl =             0x2000,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        has_security =             0x4000,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        require_sec_object =       0x8000,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        reserved_mask =            0xd000,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                       
};
