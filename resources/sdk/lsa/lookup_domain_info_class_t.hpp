#pragma once
#include <sdkgen/support_library.hpp>

namespace lsa
{
    // [enum _LSA_LOOKUP_DOMAIN_INFO_CLASS]
    //  Windows 11
    //
    enum class lookup_domain_info_class_t : int32_t
    {                                              
        account_domain_information = 0x5,            // Windows 11
        dns_domain_information =     0xc,            // Windows 11
    };                                             
};
